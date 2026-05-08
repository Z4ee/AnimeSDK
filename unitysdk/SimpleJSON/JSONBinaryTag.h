#pragma once
#include "unitysdk/unitysdk.h"

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONBinaryTag_TypeDefinitionIndex = 8294;

	enum class JSONBinaryTag : ::System::Int32
	{
		IntValue = 4,
		Class = 2,
		FloatValue = 7,
		BoolValue = 6,
		Array = 1,
		Value = 3,
		LongValue = 8,
		DoubleValue = 5,
	};
}
