#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageManager_MontageSourceInfo_TypeDefinitionIndex = 65142;

	struct alignas(4) NPCCrowdMontageManager_MontageSourceInfo
	{
		::System::Int32 playTriggeredMask; // 0x10
		::System::Int32 animTrackSourceMask; // 0x14
		::System::Int32 sequenceTrackSourceMask; // 0x18
		::System::Int32 sourceAnimLayerMaskPacked; // 0x1C
		::System::Int32 sourceSequenceLayerMaskPacked; // 0x20
		::System::Boolean hasPlayTriggered; // 0x24
	};
}
