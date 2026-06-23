#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController_EState_TypeDefinitionIndex = 42898;

	enum class UIFishContestMainPageController_EState : ::System::Int32
	{
		BattleLoop = 3,
		FishQTE = 2,
		WaitFish = 0,
		StartFish = 1,
	};
}
