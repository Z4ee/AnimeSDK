#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StopPlayerMotionReason_TypeDefinitionIndex = 58182;

	enum class StopPlayerMotionReason : ::System::Int32
	{
		Task = 0,
		PlayerMotionHelper = 1,
		TeleportGate = 2,
	};
}
