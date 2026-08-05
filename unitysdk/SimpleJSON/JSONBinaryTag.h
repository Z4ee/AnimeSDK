#pragma once
#include "unitysdk/unitysdk.h"

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONBinaryTag_TypeDefinitionIndex = 7904;

	enum class JSONBinaryTag : ::System::Int32
	{
		LongValue = 8,
		Value = 3,
		DoubleValue = 5,
		IntValue = 4,
		BoolValue = 6,
		Class = 2,
		FloatValue = 7,
		Array = 1,
	};
}
