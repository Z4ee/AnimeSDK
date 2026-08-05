#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/NPCCrowd/AI/PathGraphConfig_RoadGraphType.h"
#include "unitysdk/NPCCrowd/Lod/CrowdLODDistanceSetting.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/Lod/LodDistanceOverrideEntry.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LODRenderMode.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LODRenderRuleConfig.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LODRenderRulePriority.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LodParam.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LodType.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_OverrideLodProfileSignature.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_PathGraphLodOverrideData.h"
#include "unitysdk/NPCCrowd/Lod/NPCExternalLodRenderRuleConfigSO_RuleKeyType.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdLODInstance; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace NPCCrowd::Lod { class NPCExternalLodRenderRuleConfigSO; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ALLOCATECUSTOMOVERRIDEPARAMKEY_OFFSET UNITYSDK_OFFSET(0xE5813A0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_APPLYPATHGRAPHLODOVERRIDETONPC_OFFSET UNITYSDK_OFFSET(0xE5825A0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_CALNPCAVATARNEXTLODPHYSICS_OFFSET UNITYSDK_OFFSET(0xE582850)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_CALNPCAVATARNEXTLOD_OFFSET UNITYSDK_OFFSET(0xE57FF90)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_CLEAREXTERNALRENDERRULES_OFFSET UNITYSDK_OFFSET(0xE580B30)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_CLEARPATHGRAPHLODOVERRIDE_OFFSET UNITYSDK_OFFSET(0xE582540)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_COPYOVERRIDEDISTANCEARRAY_OFFSET UNITYSDK_OFFSET(0xE581260)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETCAMERAFOV_OFFSET UNITYSDK_OFFSET(0xE57F290)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETDEFAULTFOV_OFFSET UNITYSDK_OFFSET(0xE57F4C0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETDEFAULTRENDERRULECONFIG_OFFSET UNITYSDK_OFFSET(0xE580320)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETREFPOINT_OFFSET UNITYSDK_OFFSET(0xE57E3F0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETRESOLVEDRENDERMODE_OFFSET UNITYSDK_OFFSET(0xE581020)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETRULECONFIG_OFFSET UNITYSDK_OFFSET(0xE580E90)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETVALIDLODPARAM_OFFSET UNITYSDK_OFFSET(0xE57E470)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GETVALIDREFPOINT_OFFSET UNITYSDK_OFFSET(0xE57F1B0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GET_CURRENTNPCLODTYPE_OFFSET UNITYSDK_OFFSET(0xE57F240)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xE554670)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_INITPHYSICS_OFFSET UNITYSDK_OFFSET(0xE57E8E0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xE57DE00)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISCPULOD_OFFSET UNITYSDK_OFFSET(0xE548C00)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISGPUBLOCKEDBYSCENEORDEBUGGER_OFFSET UNITYSDK_OFFSET(0xE580C70)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISGPULOD_OFFSET UNITYSDK_OFFSET(0xE548D10)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISGPUSIMPLEMODELLOD_OFFSET UNITYSDK_OFFSET(0xE55E0F0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISHIDELOD_OFFSET UNITYSDK_OFFSET(0xE55E060)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISVALIDLOD_OFFSET UNITYSDK_OFFSET(0xE580C30)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ISVALIDOVERRIDEDISTANCEARRAY_OFFSET UNITYSDK_OFFSET(0xE581210)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ONBIASCHANGED_OFFSET UNITYSDK_OFFSET(0xE5802D0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE57EFE0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xE57EBC0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_POPNPCLODTYPE_1_OFFSET UNITYSDK_OFFSET(0xE57FEE0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_POPNPCLODTYPE_OFFSET UNITYSDK_OFFSET(0xE57FE50)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xE57DCD0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_PUSHNPCLODTYPE_OFFSET UNITYSDK_OFFSET(0xE57FDC0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_REBUILDOVERRIDEPROFILECACHE_OFFSET UNITYSDK_OFFSET(0xE57E620)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_RECORDVISIBLENONPATHNPC_OFFSET UNITYSDK_OFFSET(0xE57F5B0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_REGISTERORUPDATEEXTERNALRENDERRULE_OFFSET UNITYSDK_OFFSET(0xE580A00)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_REMOVEEXTERNALRENDERRULE_OFFSET UNITYSDK_OFFSET(0xE580A80)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_REMOVENONPATHNPCRECORD_OFFSET UNITYSDK_OFFSET(0xE57F9E0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_RESETPHYSICSLOD0DISTANCE_OFFSET UNITYSDK_OFFSET(0xE582D00)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_SETGLOBALCROWDVISIBLE_OFFSET UNITYSDK_OFFSET(0xE57FA90)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_SETPATHGRAPHLODOVERRIDE_1_OFFSET UNITYSDK_OFFSET(0xE582140)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_SETPATHGRAPHLODOVERRIDE_OFFSET UNITYSDK_OFFSET(0xE5820B0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_SETPHYSICSLOD0DISTANCE_OFFSET UNITYSDK_OFFSET(0xE5829C0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETACTIVEEXTERNALRENDERRULE_OFFSET UNITYSDK_OFFSET(0xE580B80)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETDEFAULTAVATARLODSETTING_OFFSET UNITYSDK_OFFSET(0xE581DB0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETEXTERNALRULECONFIG_OFFSET UNITYSDK_OFFSET(0xE5803C0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETLODDISTANCEOVERRIDEBYROADTYPE_OFFSET UNITYSDK_OFFSET(0xE5807A0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETNPCPATHGRAPHID_OFFSET UNITYSDK_OFFSET(0xE5819E0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETNPCSPAWNPATHGRAPHID_OFFSET UNITYSDK_OFFSET(0xE5818F0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETPATHGRAPHLODOVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xE581C10)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETPATHGRAPHLODOVERRIDEITEMBIAS_OFFSET UNITYSDK_OFFSET(0xE581CF0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETPATHGRAPHLODOVERRIDEPARAMKEY_OFFSET UNITYSDK_OFFSET(0xE581B60)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETPATHGRAPHLODOVERRIDESETTING_OFFSET UNITYSDK_OFFSET(0xE581F20)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETPATHGRAPHROADTYPERULECONFIG_OFFSET UNITYSDK_OFFSET(0xE580600)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_UPDATEMODEPHYSICS_OFFSET UNITYSDK_OFFSET(0xE5801E0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_UPDATEMODES_OFFSET UNITYSDK_OFFSET(0xE5800E0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE582EF0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE582DA0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xE582F90)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE583020)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xE5830B0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_TypeDefinitionIndex = 57935;

	class NPCCrowdLodManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__visibleNonPathNpcEntityIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodManager_TypeDefinitionIndex)->GetStaticField(0x37790);
		}
		static ::System::String** StaticGet_ExternalLodRenderRuleConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodManager_TypeDefinitionIndex)->GetStaticField(0x37798);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__externalLodRenderRuleConfigRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodManager_TypeDefinitionIndex)->GetStaticField(0x377A0);
		}
		static ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>** StaticGet_storeWhiteList()
		{
			return (::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodManager_TypeDefinitionIndex)->GetStaticField(0x377C0);
		}
		static ::System::Boolean* StaticGet_GlobalCrowdVisible()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodManager_TypeDefinitionIndex)->GetStaticField(0xD0C0);
		}
		static ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig* StaticGet_DefaultLodRuleConfig()
		{
			return (::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodManager_TypeDefinitionIndex)->GetStaticField(0xD0C1);
		}
		static ::System::Boolean* StaticGet_NonPathNpcVisibleInBigScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodManager_TypeDefinitionIndex)->GetStaticField(0xD0C6);
		}
		static ::System::Single* StaticGet_Debug_LODSoftArea()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodManager_TypeDefinitionIndex)->GetStaticField(0xD0C8);
		}
		// static const ::System::Int32 CustomOverrideLodParamKeyStart = 0x3E8; // 0x0
		::NPCCrowd::Lod::NPCCrowdLODInstance* lodInstance; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Lod::NPCCrowdLodManager_PathGraphLodOverrideData>* _pathGraphOverrideDatas; // 0x20
		::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* lodRefPoint; // 0x28
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x30
		::System::Collections::Generic::Stack_1<::NPCCrowd::Lod::NPCCrowdLodManager_LodType>* _typeStack; // 0x38
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::NPCCrowdLodManager_OverrideLodProfileSignature, ::System::Int32>* _overrideLodProfileParamKeys; // 0x40
		::NPCCrowd::Lod::NPCCrowdLODInstance* lodInstancePhysics; // 0x48
		::NPCCrowd::Lod::CrowdLODDistanceSetting cameraDistanceLodSetting; // 0x50
		::NPCCrowd::Lod::CrowdLODDistanceSetting avatarDistanceLodSetting; // 0x68
		::NPCCrowd::Lod::NPCExternalLodRenderRuleConfigSO* _externalLodRenderRuleConfigSO; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Int32>* distance2Idx; // 0x88
		::System::Boolean customLod0Dist; // 0x90
		::System::Boolean bInited; // 0x91
		::System::Int32 _nextCustomOverrideLodParamKey; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Lod::NPCCrowdLodManager* Get()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GET_OFFSET))();
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_INIT_OFFSET))(this);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ONDESTROY_OFFSET))(this);
		}

		::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* GetRefPoint()
		{
			return ((::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETREFPOINT_OFFSET))(this);
		}

		::NPCCrowd::Lod::NPCCrowdLodManager_LodParam GetValidRefPoint()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_LodParam(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETVALIDREFPOINT_OFFSET))(this);
		}

		::NPCCrowd::Lod::NPCCrowdLodManager_LodParam GetValidLodParam()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_LodParam(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETVALIDLODPARAM_OFFSET))(this);
		}

		static ::System::Boolean RecordVisibleNonPathNpc(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_RECORDVISIBLENONPATHNPC_OFFSET))(entityID);
		}

		static ::System::Void RemoveNonPathNpcRecord(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_REMOVENONPATHNPCRECORD_OFFSET))(entityID);
		}

		::NPCCrowd::Lod::NPCCrowdLodManager_LodType get_CurrentNpcLodType()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_LodType(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GET_CURRENTNPCLODTYPE_OFFSET))(this);
		}

		::System::Void SetGlobalCrowdVisible(::System::Boolean visible, ::System::Boolean isStreaming, ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* whiteList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_SETGLOBALCROWDVISIBLE_OFFSET))(this, visible, isStreaming, whiteList);
		}

		::System::Void PushNpcLodType(::NPCCrowd::Lod::NPCCrowdLodManager_LodType type)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodManager_LodType))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_PUSHNPCLODTYPE_OFFSET))(this, type);
		}

		::System::Void PopNpcLodType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_POPNPCLODTYPE_OFFSET))(this);
		}

		::System::Void PopNpcLodType_1(::NPCCrowd::Lod::NPCCrowdLodManager_LodType npcLodType)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodManager_LodType))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_POPNPCLODTYPE_1_OFFSET))(this, npcLodType);
		}

		::System::Boolean CalNPCAvatarNextLod(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::NPCCrowd::Lod::ELODLevel& newLevel, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* npcAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCCrowd::Lod::ELODLevel&, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_CALNPCAVATARNEXTLOD_OFFSET))(this, lodRuntimeData, newLevel, npcAbility);
		}

		::System::Void UpdateModes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_UPDATEMODES_OFFSET))(this);
		}

		::System::Void OnBiasChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ONBIASCHANGED_OFFSET))(this);
		}

		static ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig GetDefaultRenderRuleConfig()
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETDEFAULTRENDERRULECONFIG_OFFSET))();
		}

		::System::Boolean TryGetExternalRuleConfig(::NPCCrowd::Lod::NPCExternalLodRenderRuleConfigSO_RuleKeyType keyType, ::System::Int32 key, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig& ruleConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::NPCExternalLodRenderRuleConfigSO_RuleKeyType, ::System::Int32, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETEXTERNALRULECONFIG_OFFSET))(this, keyType, key, ruleConfig);
		}

		::System::Boolean TryGetPathGraphRoadTypeRuleConfig(::NPCCrowd::AI::PathGraphConfig_RoadGraphType roadType, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig& ruleConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathGraphConfig_RoadGraphType, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETPATHGRAPHROADTYPERULECONFIG_OFFSET))(this, roadType, ruleConfig);
		}

		::System::Boolean TryGetLodDistanceOverrideByRoadType(::NPCCrowd::AI::PathGraphConfig_RoadGraphType roadType, ::NPCCrowd::Lod::LodDistanceOverrideEntry& overrideEntry)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathGraphConfig_RoadGraphType, ::NPCCrowd::Lod::LodDistanceOverrideEntry&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETLODDISTANCEOVERRIDEBYROADTYPE_OFFSET))(this, roadType, overrideEntry);
		}

		static ::System::Void RegisterOrUpdateExternalRenderRule(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority priority, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig ruleConfig)
		{
			return ((::System::Void(*)(::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_REGISTERORUPDATEEXTERNALRENDERRULE_OFFSET))(lodRuntimeData, priority, ruleConfig);
		}

		static ::System::Boolean RemoveExternalRenderRule(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority priority)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_REMOVEEXTERNALRENDERRULE_OFFSET))(lodRuntimeData, priority);
		}

		static ::System::Void ClearExternalRenderRules(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_CLEAREXTERNALRENDERRULES_OFFSET))(lodRuntimeData);
		}

		static ::System::Boolean TryGetActiveExternalRenderRule(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority& priority, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig& ruleConfig)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRulePriority&, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETACTIVEEXTERNALRENDERRULE_OFFSET))(lodRuntimeData, priority, ruleConfig);
		}

		static ::System::Boolean IsValidLod(::NPCCrowd::Lod::ELODLevel lodLevel)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISVALIDLOD_OFFSET))(lodLevel);
		}

		static ::System::Boolean IsGpuBlockedBySceneOrDebugger()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISGPUBLOCKEDBYSCENEORDEBUGGER_OFFSET))();
		}

		static ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig GetRuleConfig(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderRuleConfig(*)(::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETRULECONFIG_OFFSET))(lodRuntimeData);
		}

		static ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode GetResolvedRenderMode(::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode(*)(::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETRESOLVEDRENDERMODE_OFFSET))(lodLevel, lodRuntimeData);
		}

		static ::System::Boolean IsGPULOD(::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISGPULOD_OFFSET))(lodLevel, lodRuntimeData);
		}

		static ::System::Boolean IsCPULOD(::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISCPULOD_OFFSET))(lodLevel, lodRuntimeData);
		}

		static ::System::Boolean IsHideLOD(::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISHIDELOD_OFFSET))(lodLevel, lodRuntimeData);
		}

		static ::System::Boolean IsGPUSimpleModelLod(::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISGPUSIMPLEMODELLOD_OFFSET))(lodLevel, lodRuntimeData);
		}

		static ::System::Single GetCameraFov()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETCAMERAFOV_OFFSET))();
		}

		static ::System::Single GetDefaultFov()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_GETDEFAULTFOV_OFFSET))();
		}

		static ::System::Boolean IsValidOverrideDistanceArray(::Il2CppArray<::System::Single>* lodDistancesCm)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ISVALIDOVERRIDEDISTANCEARRAY_OFFSET))(lodDistancesCm);
		}

		static ::Il2CppArray<::System::Single>* CopyOverrideDistanceArray(::Il2CppArray<::System::Single>* source)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_COPYOVERRIDEDISTANCEARRAY_OFFSET))(source);
		}

		::System::Int32 AllocateCustomOverrideParamKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_ALLOCATECUSTOMOVERRIDEPARAMKEY_OFFSET))(this);
		}

		::System::Void RebuildOverrideProfileCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_REBUILDOVERRIDEPROFILECACHE_OFFSET))(this);
		}

		static ::System::Boolean TryGetNpcSpawnPathGraphID(::Class_3_F2DAD7F45F518868* npcCmp, ::System::Int32& pathGraphID)
		{
			return ((::System::Boolean(*)(::Class_3_F2DAD7F45F518868*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETNPCSPAWNPATHGRAPHID_OFFSET))(npcCmp, pathGraphID);
		}

		static ::System::Boolean TryGetNpcPathGraphID(::Class_3_F2DAD7F45F518868* npcCmp, ::System::Int32& pathGraphID, ::System::Boolean allowPathFollowFallback)
		{
			return ((::System::Boolean(*)(::Class_3_F2DAD7F45F518868*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETNPCPATHGRAPHID_OFFSET))(npcCmp, pathGraphID, allowPathFollowFallback);
		}

		::System::Boolean TryGetPathGraphLodOverrideParamKey(::System::Int32 pathGraphID, ::System::Int32& paramKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETPATHGRAPHLODOVERRIDEPARAMKEY_OFFSET))(this, pathGraphID, paramKey);
		}

		::System::Boolean TryGetPathGraphLodOverrideData(::System::Int32 pathGraphID, ::System::Int32& paramKey, ::System::Boolean& overrideLodItemBias, ::System::Single& lodItemBias)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Boolean&, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETPATHGRAPHLODOVERRIDEDATA_OFFSET))(this, pathGraphID, paramKey, overrideLodItemBias, lodItemBias);
		}

		::System::Boolean TryGetPathGraphLodOverrideItemBias(::System::Int32 pathGraphID, ::System::Single& lodItemBias)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETPATHGRAPHLODOVERRIDEITEMBIAS_OFFSET))(this, pathGraphID, lodItemBias);
		}

		::System::Boolean TryGetDefaultAvatarLodSetting(::NPCCrowd::Lod::CrowdLODDistanceSetting& setting)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::CrowdLODDistanceSetting&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETDEFAULTAVATARLODSETTING_OFFSET))(this, setting);
		}

		::System::Boolean TryGetPathGraphLodOverrideSetting(::System::Int32 pathGraphID, ::NPCCrowd::Lod::CrowdLODDistanceSetting& setting, ::System::Int32& paramKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Lod::CrowdLODDistanceSetting&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_TRYGETPATHGRAPHLODOVERRIDESETTING_OFFSET))(this, pathGraphID, setting, paramKey);
		}

		::System::Boolean SetPathGraphLodOverride(::System::Int32 pathGraphID, ::Il2CppArray<::System::Single>* lodDistancesCm, ::System::Single lodBias, ::System::Int32& paramKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_SETPATHGRAPHLODOVERRIDE_OFFSET))(this, pathGraphID, lodDistancesCm, lodBias, paramKey);
		}

		::System::Boolean SetPathGraphLodOverride_1(::System::Int32 pathGraphID, ::Il2CppArray<::System::Single>* lodDistancesCm, ::System::Single lodBias, ::System::Boolean overrideLodItemBias, ::System::Single lodItemBias, ::System::Int32& paramKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Boolean, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_SETPATHGRAPHLODOVERRIDE_1_OFFSET))(this, pathGraphID, lodDistancesCm, lodBias, overrideLodItemBias, lodItemBias, paramKey);
		}

		::System::Boolean ClearPathGraphLodOverride(::System::Int32 pathGraphID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_CLEARPATHGRAPHLODOVERRIDE_OFFSET))(this, pathGraphID);
		}

		::System::Void ApplyPathGraphLodOverrideToNpc(::Class_3_F2DAD7F45F518868* npcCmp, ::System::Int32 pathGraphID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_APPLYPATHGRAPHLODOVERRIDETONPC_OFFSET))(this, npcCmp, pathGraphID);
		}

		::System::Void InitPhysics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_INITPHYSICS_OFFSET))(this);
		}

		::System::Boolean CalNPCAvatarNextLodPhysics(::NPCCrowd::Lod::ELODLevel oldLevel, ::NPCCrowd::Lod::ELODLevel& newLevel, ::System::Boolean bOverrideShow, ::System::Boolean bOverrideHide, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* npcAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel&, ::System::Boolean, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_CALNPCAVATARNEXTLODPHYSICS_OFFSET))(this, oldLevel, newLevel, bOverrideShow, bOverrideHide, npcAbility);
		}

		::System::Void SetPhysicsLOD0Distance(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_SETPHYSICSLOD0DISTANCE_OFFSET))(this, distance);
		}

		::System::Void ResetPhysicsLOD0Distance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_RESETPHYSICSLOD0DISTANCE_OFFSET))(this);
		}

		::System::Void UpdateModePhysics(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* curRefPoint, ::System::Int32 paramIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_UPDATEMODEPHYSICS_OFFSET))(this, curRefPoint, paramIdx);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}
	};
}
