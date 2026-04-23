#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCRunAwayPlayerStatus_TypeDefinitionIndex = 48412;

	enum class AdvNPCRunAwayPlayerStatus : ::System::Int32
	{
		Empty = 0,
		SelectRunAwayTargetPoint = 1,
		RunAway = 2,
		LastRunAwaySelect = 3,
		RunAwayEnd = 4,
	};
}
