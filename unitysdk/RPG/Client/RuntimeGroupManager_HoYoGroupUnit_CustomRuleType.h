#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_HoYoGroupUnit_CustomRuleType_TypeDefinitionIndex = 59309;

	enum class RuntimeGroupManager_HoYoGroupUnit_CustomRuleType : ::System::UInt32
	{
		RotatablePose = 0x0,
		RotatableRegion = 0x1,
		WolfBro = 0x2,
		FiveDim = 0x3,
		PlatformQuality = 0x4,
	};
}
