#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenInteractController_InnerState_TypeDefinitionIndex = 69632;

	enum class ActivityHipplenInteractController_InnerState : ::System::Int32
	{
		None = 0,
		Interacting = 1,
		FinalInteract = 2,
		FinalPerformance = 3,
		Completed = 4,
	};
}
