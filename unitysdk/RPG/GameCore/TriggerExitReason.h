#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerExitReason_TypeDefinitionIndex = 54941;

	enum class TriggerExitReason : ::System::Int32
	{
		ExitRegion = 0,
		HostDisable = 1,
		GuestDisable = 2,
	};
}
