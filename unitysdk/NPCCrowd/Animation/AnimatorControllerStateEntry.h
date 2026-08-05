#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerStateIdentifier.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorControllerStateEntry_TypeDefinitionIndex = 56648;

	struct alignas(4) AnimatorControllerStateEntry
	{
		::NPCCrowd::Animation::AnimatorControllerStateIdentifier StateId; // 0x10
		::System::Int32 AnimationId; // 0x18
	};
}
