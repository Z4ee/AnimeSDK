#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageManager_SequenceLayerClipState_TypeDefinitionIndex = 65137;

	struct alignas(4) NPCCrowdMontageManager_SequenceLayerClipState
	{
		::System::Boolean hasClip; // 0x10
		::System::Int32 clipIndex; // 0x14
		::System::Int32 sourceMontageKey; // 0x18
		::System::Int32 sourcePriorityLayer; // 0x1C
	};
}
