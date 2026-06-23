#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_ECloseReason_TypeDefinitionIndex = 71923;

	enum class UISummerFishPlayPageController_ECloseReason : ::System::Int32
	{
		Timeout = 2,
		AutoFishEnd = 4,
		ManualClose = 0,
		FinishFish = 1,
		AutoFishBack = 3,
	};
}
