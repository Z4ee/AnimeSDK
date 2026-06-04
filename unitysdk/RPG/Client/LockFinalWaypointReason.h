#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LockFinalWaypointReason_TypeDefinitionIndex = 60032;

	enum class LockFinalWaypointReason : ::System::Int32
	{
		None = 0,
		SwitchHand = 1,
	};
}
