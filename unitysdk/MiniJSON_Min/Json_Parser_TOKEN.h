#pragma once
#include "unitysdk/unitysdk.h"

namespace MiniJSON_Min
{
	inline static constexpr unsigned int Json_Parser_TOKEN_TypeDefinitionIndex = 39187;

	enum class Json_Parser_TOKEN : ::System::Int32
	{
		NONE = 0,
		CURLY_OPEN = 1,
		CURLY_CLOSE = 2,
		SQUARED_OPEN = 3,
		SQUARED_CLOSE = 4,
		COLON = 5,
		COMMA = 6,
		STRING = 7,
		NUMBER = 8,
		TRUE = 9,
		FALSE = 10,
		NULL = 11,
	};
}
