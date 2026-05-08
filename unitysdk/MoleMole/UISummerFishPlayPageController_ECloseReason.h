#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_ECloseReason_TypeDefinitionIndex = 62371;

	enum class UISummerFishPlayPageController_ECloseReason : ::System::Int32
	{
		AutoFishBack = 3,
		AutoFishEnd = 4,
		Timeout = 2,
		ManualClose = 0,
		FinishFish = 1,
	};
}
