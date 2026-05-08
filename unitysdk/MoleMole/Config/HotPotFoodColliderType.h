#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HotPotFoodColliderType_TypeDefinitionIndex = 79614;

	enum class HotPotFoodColliderType : ::System::Int32
	{
		Capsule = 2,
		Box = 0,
		Circle = 1,
	};
}
