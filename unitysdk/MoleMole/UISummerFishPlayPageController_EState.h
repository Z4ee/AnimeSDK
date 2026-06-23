#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_EState_TypeDefinitionIndex = 71924;

	enum class UISummerFishPlayPageController_EState : ::System::Int32
	{
		BattleLoop = 3,
		WaitFish = 0,
		StartFish = 1,
		FishQTE = 2,
	};
}
