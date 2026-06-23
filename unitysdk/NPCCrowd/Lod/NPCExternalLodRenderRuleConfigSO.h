#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphConfig_RoadGraphType.h"
#include "unitysdk/NPCCrowd/Lod/LodDistanceOverrideEntry.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LODRenderRuleConfig.h"
#include "unitysdk/NPCCrowd/Lod/NPCExternalLodRenderRuleConfigSO_RuleEntry.h"
#include "unitysdk/NPCCrowd/Lod/NPCExternalLodRenderRuleConfigSO_RuleKeyType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO_BUILDKEYOPTIONS_OFFSET UNITYSDK_OFFSET(0xD43FA20)
#define NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO_TRYGETLODDISTANCEOVERRIDEBYROADTYPE_OFFSET UNITYSDK_OFFSET(0xD440180)
#define NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO_TRYGETRULECONFIGBYROADTYPE_OFFSET UNITYSDK_OFFSET(0xD440090)
#define NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO_TRYGETRULECONFIG_OFFSET UNITYSDK_OFFSET(0xD43FFE0)
#define NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO__CTOR_OFFSET UNITYSDK_OFFSET(0xD440260)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCExternalLodRenderRuleConfigSO_TypeDefinitionIndex = 66246;

	class NPCExternalLodRenderRuleConfigSO : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Lod::NPCExternalLodRenderRuleConfigSO_RuleEntry>* entries; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Lod::LodDistanceOverrideEntry>* lodDistanceOverrideEntries; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO__CTOR_OFFSET))(this);
		}

		static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* BuildKeyOptions(::NPCCrowd::Lod::NPCExternalLodRenderRuleConfigSO_RuleKeyType keyType)
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::NPCCrowd::Lod::NPCExternalLodRenderRuleConfigSO_RuleKeyType))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO_BUILDKEYOPTIONS_OFFSET))(keyType);
		}

		::System::Boolean TryGetRuleConfig(::NPCCrowd::Lod::NPCExternalLodRenderRuleConfigSO_RuleKeyType keyType, ::System::Int32 key, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig& ruleConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::NPCExternalLodRenderRuleConfigSO_RuleKeyType, ::System::Int32, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO_TRYGETRULECONFIG_OFFSET))(this, keyType, key, ruleConfig);
		}

		::System::Boolean TryGetRuleConfigByRoadType(::NPCCrowd::AI::PathGraphConfig_RoadGraphType roadType, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig& ruleConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathGraphConfig_RoadGraphType, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO_TRYGETRULECONFIGBYROADTYPE_OFFSET))(this, roadType, ruleConfig);
		}

		::System::Boolean TryGetLodDistanceOverrideByRoadType(::NPCCrowd::AI::PathGraphConfig_RoadGraphType roadType, ::NPCCrowd::Lod::LodDistanceOverrideEntry& overrideEntry)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathGraphConfig_RoadGraphType, ::NPCCrowd::Lod::LodDistanceOverrideEntry&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCEXTERNALLODRENDERRULECONFIGSO_TRYGETLODDISTANCEOVERRIDEBYROADTYPE_OFFSET))(this, roadType, overrideEntry);
		}
	};
}
