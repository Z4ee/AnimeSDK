#pragma once
#include "unitysdk/unitysdk.h"

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONBinaryTag_TypeDefinitionIndex = 8037;

	enum class JSONBinaryTag : ::System::Int32
	{
		BoolValue = 6,
		Value = 3,
		Array = 1,
		DoubleValue = 5,
		Class = 2,
		IntValue = 4,
		LongValue = 8,
		FloatValue = 7,
	};
}
