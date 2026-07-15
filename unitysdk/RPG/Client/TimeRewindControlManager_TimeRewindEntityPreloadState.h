#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TimeRewindEntityPreloadState_TypeDefinitionIndex = 58093;

	enum class TimeRewindControlManager_TimeRewindEntityPreloadState : ::System::Int32
	{
		Unload = 0,
		Loading = 1,
		Loaded = 2,
		LoadFailed = 3,
	};
}
