#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_EState_TypeDefinitionIndex = 62372;

	enum class UISummerFishPlayPageController_EState : ::System::Int32
	{
		BattleLoop = 3,
		StartFish = 1,
		WaitFish = 0,
		FishQTE = 2,
	};
}
