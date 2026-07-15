#pragma once
#include "unitysdk/unitysdk.h"

namespace IniParserEx
{
	inline static constexpr unsigned int TokenType_TypeDefinitionIndex = 3913;

	enum class TokenType : ::System::Int32
	{
		None = 0,
		Identifier = 1,
		Symbol = 2,
		Const = 3,
		Max = 3,
	};
}
