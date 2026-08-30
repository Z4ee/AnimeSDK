#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int ERacingMatchFlowState_TypeDefinitionIndex = 80534;

	enum class ERacingMatchFlowState : ::System::Int32
	{
		None = 0,
		Initializing = 1,
		WaitingCountDown = 2,
		LaunchCountDown = 3,
		ResumeCountDown = 4,
		Racing = 5,
		Paused = 6,
		Finished = 7,
		Exiting = 8,
	};
}
