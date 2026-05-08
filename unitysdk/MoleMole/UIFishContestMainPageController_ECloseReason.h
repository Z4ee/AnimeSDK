#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController_ECloseReason_TypeDefinitionIndex = 56742;

	enum class UIFishContestMainPageController_ECloseReason : ::System::Int32
	{
		Timeout = 2,
		ManualClose = 0,
		FinishFish = 1,
	};
}
