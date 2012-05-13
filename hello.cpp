#include <iostream>
#include <vector>

void foo()
{
	const std::vector< int > hoge = { 0, 1, 2, 3 };

	for( const auto i : hoge )
	{
		std::cout << i << std::endl;
	}	
}


int main()
{
	foo();
	return 0;
}