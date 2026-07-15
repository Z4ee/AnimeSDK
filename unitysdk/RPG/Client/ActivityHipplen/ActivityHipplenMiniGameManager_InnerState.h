#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniGameManager_InnerState_TypeDefinitionIndex = 71976;

	enum class ActivityHipplenMiniGameManager_InnerState : ::System::Int32
	{
		None = 0,
		InitPerformance = 1,
		WaitingStart = 2,
		Gaming = 3,
		Finished = 4,
	};
}
