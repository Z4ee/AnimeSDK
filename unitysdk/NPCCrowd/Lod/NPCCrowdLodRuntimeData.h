#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LODRenderRuleConfig.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LODRenderRulePriority.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodRuntimeData_ExternalRenderRuleData.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0x10D8EF10)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CLEAREXTERNALRENDERRULES_OFFSET UNITYSDK_OFFSET(0x10D8F410)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CONSUMEOVERRIDEFADE_OFFSET UNITYSDK_OFFSET(0x10D8EE30)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_FORCELOD0_OFFSET UNITYSDK_OFFSET(0x10D8EE90)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLODTICKBATCH_OFFSET UNITYSDK_OFFSET(0x10D8F4E0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLOD_OFFSET UNITYSDK_OFFSET(0x10D8F600)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_FORCELODLEVEL_OFFSET UNITYSDK_OFFSET(0x10D8EA90)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_ISCHANGEING_OFFSET UNITYSDK_OFFSET(0x10D8F4D0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0x10D8E750)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0x10D8EDE0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_REFRESHACTIVEEXTERNALRENDERRULECACHE_OFFSET UNITYSDK_OFFSET(0x10D8F900)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_REGISTERORUPDATEEXTERNALRENDERRULE_OFFSET UNITYSDK_OFFSET(0x10D8F640)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_REMOVEEXTERNALRENDERRULE_OFFSET UNITYSDK_OFFSET(0x10D8F7E0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SETLODTICKBATCH_OFFSET UNITYSDK_OFFSET(0x10D8F590)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_FORCELODLEVEL_OFFSET UNITYSDK_OFFSET(0x10D8EAA0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_ISCHANGEING_OFFSET UNITYSDK_OFFSET(0x10D8F3C0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0x10D8E760)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_TRYGETACTIVEEXTERNALRENDERRULE_OFFSET UNITYSDK_OFFSET(0x10D8F870)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D8FBD0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D8FA90)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodRuntimeData_TypeDefinitionIndex = 64147;

	class NPCCrowdLodRuntimeData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_cache()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodRuntimeData_TypeDefinitionIndex)->GetStaticField(0x31A20);
		}
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData_ExternalRenderRuleData>* _externalRenderRules; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>*>* lastAssetRef; // 0x18
		::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* curLODRenderers; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* LODTickBatchCount; // 0x28
		::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* oldLODRenderers; // 0x30
		::System::Action* lodInitCallback; // 0x38
		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig _activeExternalRenderRuleConfig; // 0x40
		::System::Boolean bOverrideHide; // 0x45
		::System::Boolean lodPreloadFinished; // 0x46
		::System::Boolean _isChangeing; // 0x47
		::NPCCrowd::Lod::ELODLevel _lodLevel; // 0x48
		::NPCCrowd::Lod::ELODLevel physicsLodLevel; // 0x4C
		::System::Boolean _externalRenderRuleDirty; // 0x50
		::System::Boolean _hasActiveExternalRenderRule; // 0x51
		::System::Boolean lodChangedCurFrame; // 0x52
		::NPCCrowd::Lod::ELODLevel nextLodLevel; // 0x54
		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority _activeExternalRenderRulePriority; // 0x58
		::System::Boolean bOverrideFadeTrigger; // 0x5C
		::System::Boolean bOverrideFade; // 0x5D
		::System::Boolean bOverrideShow; // 0x5E
		::System::Boolean isVisible; // 0x5F
		::NPCCrowd::Lod::ELODLevel _forceLodLevel; // 0x60
		::System::Single lastMatCmpAlphaValue; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CCTOR_OFFSET))();
		}

		::NPCCrowd::Lod::ELODLevel get_lodLevel()
		{
			return ((::NPCCrowd::Lod::ELODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_LODLEVEL_OFFSET))(this);
		}

		::System::Void set_lodLevel(::NPCCrowd::Lod::ELODLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_LODLEVEL_OFFSET))(this, value);
		}

		::NPCCrowd::Lod::ELODLevel get_forceLodLevel()
		{
			return ((::NPCCrowd::Lod::ELODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_FORCELODLEVEL_OFFSET))(this);
		}

		::System::Void set_forceLodLevel(::NPCCrowd::Lod::ELODLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_FORCELODLEVEL_OFFSET))(this, value);
		}

		::System::Void OnVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_ONVISIBLE_OFFSET))(this, isVisible);
		}

		::System::Boolean ConsumeOverrideFade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CONSUMEOVERRIDEFADE_OFFSET))(this);
		}

		::System::Void ForceLOD0(::System::Boolean enable, ::System::Boolean fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_FORCELOD0_OFFSET))(this, enable, fade);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CLEAN_OFFSET))(this);
		}

		::System::Boolean get_isChangeing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_ISCHANGEING_OFFSET))(this);
		}

		::System::Void set_isChangeing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_ISCHANGEING_OFFSET))(this, value);
		}

		::System::Boolean GetLODTickBatch(::System::Int32 handler, ::System::UInt32& batch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLODTICKBATCH_OFFSET))(this, handler, batch);
		}

		::System::Void SetLODTickBatch(::System::Int32 handler, ::System::UInt32 LODTickBatch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SETLODTICKBATCH_OFFSET))(this, handler, LODTickBatch);
		}

		::System::Int32 GetLOD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLOD_OFFSET))(this);
		}

		::System::Void RegisterOrUpdateExternalRenderRule(::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority priority, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig ruleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_REGISTERORUPDATEEXTERNALRENDERRULE_OFFSET))(this, priority, ruleConfig);
		}

		::System::Boolean RemoveExternalRenderRule(::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority priority)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_REMOVEEXTERNALRENDERRULE_OFFSET))(this, priority);
		}

		::System::Void ClearExternalRenderRules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CLEAREXTERNALRENDERRULES_OFFSET))(this);
		}

		::System::Boolean TryGetActiveExternalRenderRule(::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority& priority, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig& ruleConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority&, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_TRYGETACTIVEEXTERNALRENDERRULE_OFFSET))(this, priority, ruleConfig);
		}

		::System::Void RefreshActiveExternalRenderRuleCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_REFRESHACTIVEEXTERNALRENDERRULECACHE_OFFSET))(this);
		}
	};
}
