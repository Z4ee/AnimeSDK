#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CumulativeConsumptionTierState_TypeDefinitionIndex = 60749;

	enum class CumulativeConsumptionTierState : ::System::Int32
	{
		None = 0,
		Locked = 1,
		CanTake = 3,
		HasTaken = 4,
	};
}
