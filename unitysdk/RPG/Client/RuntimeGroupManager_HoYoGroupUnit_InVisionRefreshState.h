#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState_TypeDefinitionIndex = 59313;

	enum class RuntimeGroupManager_HoYoGroupUnit_InVisionRefreshState : ::System::Int32
	{
		None = 0,
		InVision = 1,
		OutVision = 2,
	};
}
