#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LODRenderRuleConfig.h"
#include "unitysdk/NPCCrowd/Lod/NPCExternalLodRenderRuleConfigSO_RuleKeyType.h"
#include "unitysdk/System/ValueType.h"

namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }

#define NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO_RULEENTRY_GETKEYOPTIONS_OFFSET UNITYSDK_OFFSET(0x669220)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCExternalLodRenderRuleConfigSO_RuleEntry_TypeDefinitionIndex = 57441;

	struct alignas(4) NPCExternalLodRenderRuleConfigSO_RuleEntry
	{
		::NPCCrowd::Lod::NPCExternalLodRenderRuleConfigSO_RuleKeyType keyType; // 0x10
		::System::Int32 key; // 0x14
		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig ruleConfig; // 0x18

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* GetKeyOptions()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO_RULEENTRY_GETKEYOPTIONS_OFFSET))(this);
		}
	};
}
