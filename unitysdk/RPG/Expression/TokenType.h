#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Expression
{
	inline static constexpr unsigned int TokenType_TypeDefinitionIndex = 10026;

	enum class TokenType : ::System::Int32
	{
		LeftParen = 0,
		RightParen = 1,
		Plus = 2,
		Minus = 3,
		Star = 4,
		Slash = 5,
		Percent = 6,
		Less = 7,
		Greater = 8,
		Equal = 9,
		Colon = 10,
		Question = 11,
		Number = 12,
		Identifier = 13,
		Comma = 14,
		Bang = 15,
		Eof = 16,
		Error = 17,
	};
}
