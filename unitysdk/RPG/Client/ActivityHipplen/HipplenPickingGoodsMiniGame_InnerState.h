#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenPickingGoodsMiniGame_InnerState_TypeDefinitionIndex = 75297;

	enum class HipplenPickingGoodsMiniGame_InnerState : ::System::Int32
	{
		None = 0,
		InitPerformance = 1,
		BeforeSelectPerformance = 2,
		Selecting = 3,
		AfterSelectPerformance = 4,
		Finished = 5,
	};
}
