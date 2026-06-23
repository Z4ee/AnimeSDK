#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController_ECloseReason_TypeDefinitionIndex = 42903;

	enum class UIFishContestMainPageController_ECloseReason : ::System::Int32
	{
		ManualClose = 0,
		Timeout = 2,
		FinishFish = 1,
	};
}
