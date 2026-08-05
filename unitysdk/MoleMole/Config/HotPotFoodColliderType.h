#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HotPotFoodColliderType_TypeDefinitionIndex = 80438;

	enum class HotPotFoodColliderType : ::System::Int32
	{
		Circle = 1,
		Box = 0,
		Capsule = 2,
	};
}
