#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ValueGroupComputeType_TypeDefinitionIndex = 23929;

	enum class ValueGroupComputeType : ::System::Int32
	{
		Add = 0,
		Mul = 1,
		Max = 2,
		Min = 3,
		Avg = 4,
	};
}
