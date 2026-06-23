#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageManager_SequenceLayerSourceData_TypeDefinitionIndex = 65141;

	struct alignas(4) NPCCrowdMontageManager_SequenceLayerSourceData
	{
		::System::Int32 montageKey; // 0x10
		::System::Single montageTime; // 0x14
		::System::Int32 sourcePriorityLayer; // 0x18
	};
}
