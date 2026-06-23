#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::MiniJSON
{
	inline static constexpr unsigned int Json_TOKEN_TypeDefinitionIndex = 8199;

	enum class Json_TOKEN : ::System::Int32
	{
		SQUARED_CLOSE = 4,
		STRING = 7,
		COMMA = 6,
		CURLY_OPEN = 1,
		FALSE = 10,
		NULL = 11,
		CURLY_CLOSE = 2,
		COLON = 5,
		NUMBER = 8,
		TRUE = 9,
		SQUARED_OPEN = 3,
		NONE = 0,
	};
}
