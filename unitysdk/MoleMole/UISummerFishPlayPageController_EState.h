#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_EState_TypeDefinitionIndex = 54762;

	enum class UISummerFishPlayPageController_EState : ::System::Int32
	{
		WaitFish = 0,
		FishQTE = 2,
		StartFish = 1,
		BattleLoop = 3,
	};
}
