#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenMovingGoodsMiniGame_InnerState_TypeDefinitionIndex = 75293;

	enum class HipplenMovingGoodsMiniGame_InnerState : ::System::Int32
	{
		WaitingStart = 0,
		Gaming = 1,
		OnFinalPerformance = 2,
		Finished = 3,
	};
}
