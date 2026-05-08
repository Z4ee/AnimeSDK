#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::MiniJSON
{
	inline static constexpr unsigned int Json_TOKEN_TypeDefinitionIndex = 8255;

	enum class Json_TOKEN : ::System::Int32
	{
		CURLY_OPEN = 1,
		FALSE = 10,
		NONE = 0,
		NULL = 11,
		CURLY_CLOSE = 2,
		SQUARED_OPEN = 3,
		NUMBER = 8,
		STRING = 7,
		TRUE = 9,
		SQUARED_CLOSE = 4,
		COLON = 5,
		COMMA = 6,
	};
}
