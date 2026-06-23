#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int MiniJSON_Parser_TOKEN_TypeDefinitionIndex = 33250;

	enum class MiniJSON_Parser_TOKEN : ::System::Int32
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
		INFINITY = 9,
		Value_10 = 10,
		TRUE = 11,
		FALSE = 12,
		NULL = 13,
	};
}
