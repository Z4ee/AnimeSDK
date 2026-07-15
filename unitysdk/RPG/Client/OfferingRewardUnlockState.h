#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int OfferingRewardUnlockState_TypeDefinitionIndex = 63439;

	enum class OfferingRewardUnlockState : ::System::Int32
	{
		Normal = 0,
		MaxLevel = 1,
		Locked = 2,
	};
}
