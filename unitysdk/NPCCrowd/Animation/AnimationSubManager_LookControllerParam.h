#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_LookControllerParam_TypeDefinitionIndex = 88306;

	struct alignas(4) AnimationSubManager_LookControllerParam
	{
		::System::Single pitchUp; // 0x10
		::System::Single pitchDown; // 0x14
		::System::Single yawLeft; // 0x18
		::System::Single yawRight; // 0x1C
		::System::Single currentSpeed; // 0x20
		::System::Single speedOnLockTarget; // 0x24
	};
}
