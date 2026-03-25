#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentStepState_TypeDefinitionIndex = 61700;

	enum class ActivityHipplenIncidentStepState : ::System::Int32
	{
		None = 0,
		Ready = 1,
		Running = 2,
		Completed = 3,
		Stopped = 4,
	};
}
