#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int Registry_TypeDefinitionIndex = 39717;

	struct alignas(8) Registry
	{
		::System::Int32 handler; // 0x10
		::System::Int32 taskIdx; // 0x14
		::System::Boolean forceRefresh; // 0x18
		::Il2CppArray<::NPCCrowd::Lod::ConditionData>* conditions; // 0x20
		::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* callback; // 0x28
		::System::Boolean callbackFlag; // 0x30
	};
}
