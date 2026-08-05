#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeRewardItemWidgetController_RewardTakeState_TypeDefinitionIndex = 64803;

	enum class UIBossChallengeRewardItemWidgetController_RewardTakeState : ::System::Int32
	{
		CanNotTake = 0,
		AlreadyTaken = 2,
		CanTake = 1,
	};
}
