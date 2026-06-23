#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int RegisterData_TypeDefinitionIndex = 53006;

	struct alignas(8) RegisterData
	{
		::Il2CppArray<::NPCCrowd::Lod::ConditionData>* conditions; // 0x10
		::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* callback; // 0x18
		::System::Boolean forceRefresh; // 0x20
	};
}
