#pragma once
#include "unitysdk/unitysdk.h"

namespace SharpJson
{
	inline static constexpr unsigned int Lexer_Token_TypeDefinitionIndex = 37435;

	enum class Lexer_Token : ::System::Int32
	{
		None = 0,
		Null = 1,
		True = 2,
		False = 3,
		Colon = 4,
		Comma = 5,
		String = 6,
		Number = 7,
		CurlyOpen = 8,
		CurlyClose = 9,
		SquaredOpen = 10,
		SquaredClose = 11,
	};
}
