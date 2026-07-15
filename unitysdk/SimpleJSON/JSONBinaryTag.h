#pragma once
#include "unitysdk/unitysdk.h"

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONBinaryTag_TypeDefinitionIndex = 9614;

	enum class JSONBinaryTag : ::System::Int32
	{
		Array = 1,
		Class = 2,
		Value = 3,
		IntValue = 4,
		DoubleValue = 5,
		BoolValue = 6,
		FloatValue = 7,
	};
}
