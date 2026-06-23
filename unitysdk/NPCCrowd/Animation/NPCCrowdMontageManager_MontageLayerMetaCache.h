#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageTrackTypeFlags.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageManager_MontageLayerMetaCache_TypeDefinitionIndex = 65138;

	struct alignas(8) NPCCrowdMontageManager_MontageLayerMetaCache
	{
		::NPCCrowd::Animation::MontageTrackTypeFlags trackTypeMask; // 0x10
		::System::Int32 animLayerMask; // 0x14
		::System::Int32 sequenceLayerMask; // 0x18
		::Il2CppArray<::System::Single>* animLayerDurations; // 0x20
		::Il2CppArray<::System::Single>* sequenceLayerDurations; // 0x28
	};
}
