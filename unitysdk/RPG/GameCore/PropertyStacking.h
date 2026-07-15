#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropertyStacking_TypeDefinitionIndex = 53805;

	enum class PropertyStacking : ::System::Int32
	{
		Unknow = 0,
		Unique = 1,
		Latest = 2,
		Sum = 3,
		Multiply = 4,
		InverseMultiply = 5,
		Min = 6,
		Max = 7,
	};
}
