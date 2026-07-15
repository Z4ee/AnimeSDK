#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLifeBindingType_TypeDefinitionIndex = 23935;

	enum class RtLifeBindingType : ::System::Int32
	{
		Auto = 0,
		OwnerModifier = 1,
		OwnerAbility = 2,
		OwnerEntity = 3,
		Level = 4,
		CustomModifier = 5,
		CustomAbility = 6,
		CustomTarget = 7,
		OneFrame = 8,
	};
}
