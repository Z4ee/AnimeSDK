#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HotPotFoodColliderType_TypeDefinitionIndex = 84024;

	enum class HotPotFoodColliderType : ::System::Int32
	{
		Box = 0,
		Circle = 1,
		Capsule = 2,
	};
}
