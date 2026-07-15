#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TeamModule_TeleportState_TypeDefinitionIndex = 65115;

	enum class TeamModule_TeleportState : ::System::Int32
	{
		None = 0,
		Teleported = 1,
		TeleportedNoSwitchIn = 2,
		TeleportedNoSwitchInWhite = 3,
		TeleportedCrossMap = 4,
	};
}
