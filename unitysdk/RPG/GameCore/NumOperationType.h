#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NumOperationType_TypeDefinitionIndex = 15807;

	enum class NumOperationType : ::System::Int32
	{
		First = 0,
		Sum = 1,
		Multiplier = 2,
		Max = 3,
	};
}
