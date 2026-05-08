#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeRewardItemWidgetController_RewardTakeState_TypeDefinitionIndex = 72021;

	enum class UIBossChallengeRewardItemWidgetController_RewardTakeState : ::System::Int32
	{
		AlreadyTaken = 2,
		CanTake = 1,
		CanNotTake = 0,
	};
}
