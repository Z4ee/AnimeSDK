#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::MiniJSON
{
	inline static constexpr unsigned int Json_TOKEN_TypeDefinitionIndex = 8320;

	enum class Json_TOKEN : ::System::Int32
	{
		NONE = 0,
		NUMBER = 8,
		COMMA = 6,
		STRING = 7,
		SQUARED_OPEN = 3,
		NULL = 11,
		FALSE = 10,
		TRUE = 9,
		CURLY_OPEN = 1,
		SQUARED_CLOSE = 4,
		CURLY_CLOSE = 2,
		COLON = 5,
	};
}
