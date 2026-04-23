#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaypathUsageType_TypeDefinitionIndex = 10260;

	enum class WaypathUsageType : ::System::Int32
	{
		Patrol = 0,
		TaskFollow = 1,
	};
}
