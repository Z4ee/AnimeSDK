#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTransitionConfig_TypeDefinitionIndex = 85277;

	struct alignas(4) MontageTransitionConfig
	{
		::System::Single DefaultFadeInTime; // 0x10
		::System::Single DefaultFadeOutTime; // 0x14
		::System::Single GeneratedTransitionTime; // 0x18
	};
}
