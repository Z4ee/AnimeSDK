#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int WaypointRefreshReason_TypeDefinitionIndex = 69644;

	enum class WaypointRefreshReason : ::System::Int32
	{
		Invalid = 0,
		EdgeEnableConditionChanged = 1,
	};
}
