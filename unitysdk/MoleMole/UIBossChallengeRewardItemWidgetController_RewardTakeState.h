#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeRewardItemWidgetController_RewardTakeState_TypeDefinitionIndex = 69424;

	enum class UIBossChallengeRewardItemWidgetController_RewardTakeState : ::System::Int32
	{
		CanTake = 1,
		AlreadyTaken = 2,
		CanNotTake = 0,
	};
}
