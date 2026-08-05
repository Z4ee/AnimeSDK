#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController_EState_TypeDefinitionIndex = 52889;

	enum class UIFishContestMainPageController_EState : ::System::Int32
	{
		StartFish = 1,
		FishQTE = 2,
		BattleLoop = 3,
		WaitFish = 0,
	};
}
