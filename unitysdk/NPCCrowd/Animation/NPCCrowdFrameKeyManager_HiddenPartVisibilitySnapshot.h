#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdFrameKeyManager_HiddenPartVisibilitySnapshot_TypeDefinitionIndex = 87209;

	struct alignas(4) NPCCrowdFrameKeyManager_HiddenPartVisibilitySnapshot
	{
		::ENPCAvatarBodyPart partType; // 0x10
	};
}
