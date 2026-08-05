#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LODRenderRuleConfig.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LODRenderRulePriority.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodRuntimeData_ExternalRenderRuleData_TypeDefinitionIndex = 65047;

	struct alignas(4) NPCCrowdLodRuntimeData_ExternalRenderRuleData
	{
		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority Priority; // 0x10
		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig RuleConfig; // 0x14
	};
}
