#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A488AA7614AA6A91;
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class AdventureAIDefaultParameter; }
namespace RPG::GameCore { class BattleBGMConfig; }
namespace RPG::GameCore { class CRPVirtualCameraConfigMap; }
namespace RPG::GameCore { class CameraShakeTemplateConfig; }
namespace RPG::GameCore { class ConfigManifest; }
namespace RPG::GameCore { class DamageBehaviorTemplateListConfig; }
namespace RPG::GameCore { class DebugUIConfig; }
namespace RPG::GameCore { class EntityTimelineControlGlobalConfig; }
namespace RPG::GameCore { class FollowSlotConstValue; }
namespace RPG::GameCore { class GachaCutsceneConfig; }
namespace RPG::GameCore { class GameCoreConstValue; }
namespace RPG::GameCore { class GameCoreUISetting; }
namespace RPG::GameCore { class GameObjectPoolConfig; }
namespace RPG::GameCore { class GlobalReactionParameter; }
namespace RPG::GameCore { class JsonEnumDefineConfig; }
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatchList; }
namespace RPG::GameCore { class LightningStrikeAreaGlobalConfig; }
namespace RPG::GameCore { class MainStoryConfig; }
namespace RPG::GameCore { class MarbleGameConfig; }
namespace RPG::GameCore { class MazeConfig; }
namespace RPG::GameCore { class MonsterSneakConst; }
namespace RPG::GameCore { class NetDefineConstValue; }
namespace RPG::GameCore { class PamAIConstValue; }
namespace RPG::GameCore { class PointEvaluatorConstValue; }
namespace RPG::GameCore { class PrefabCacheConfig; }
namespace RPG::GameCore { class PriorityConfigList; }
namespace RPG::GameCore { class ResidentPossessionConfig; }
namespace RPG::GameCore { class ResolutionAdaptionConfig; }
namespace RPG::GameCore { class ResolutionAdaptionConfigList; }
namespace RPG::GameCore { class ResolutionAdaptionConfigMapping; }
namespace RPG::GameCore { class SdkEnvConfig; }
namespace RPG::GameCore { class SettingsConfig; }
namespace RPG::GameCore { class SummonUnitGlobalConfig; }
namespace RPG::GameCore { class TrackNpcConst; }
namespace RPG::GameCore { class VCameraConfigList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GAMECORECONFIGMANAGER_ASYNCLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1158FC00)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_CHECKLEGALITY_OFFSET UNITYSDK_OFFSET(0x18413DB0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_CLEARIMPORTEDCONFIGCACHE_OFFSET UNITYSDK_OFFSET(0x1158F8F0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_GET_CURRENTRESOLUTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x18414F50)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1158F990)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_LOADCONFIGMANIFEST_OFFSET UNITYSDK_OFFSET(0x1158F930)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_RELOADIMPORTEDCONFIG_OFFSET UNITYSDK_OFFSET(0x1158F8B0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_RELOADREPLAYRELEVANTCONFIG_OFFSET UNITYSDK_OFFSET(0x18413A10)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_TRYGETRESOLUTIONDELTAFROMNORMAL_OFFSET UNITYSDK_OFFSET(0x184155E0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x18413860)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x184157A0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADADVENTUREAIDEFAULTPARAMETERCONFIG_OFFSET UNITYSDK_OFFSET(0x18414700)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADBATTLEBGMCONFIG_OFFSET UNITYSDK_OFFSET(0x184140F0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADCAMERACONFIGMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x18414230)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADCAMERASHAKETEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0x18414190)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADDEBUGUICONFIG_OFFSET UNITYSDK_OFFSET(0x18413FB0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADENTITYTIMELINECONTROLGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x18414CA0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADFOLLOWSLOTCONSTVALUECONFIG_OFFSET UNITYSDK_OFFSET(0x18414C00)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGACHACUTSCENECONFIG_OFFSET UNITYSDK_OFFSET(0x18414660)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMECORECONSTVALUE_OFFSET UNITYSDK_OFFSET(0x18413B80)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMECOREUISETTING_OFFSET UNITYSDK_OFFSET(0x18413EC0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMEOBJECTPOOLCONFIG_OFFSET UNITYSDK_OFFSET(0x18414980)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMEPLAYMONSTERSNEAKCONSTCONFIG_OFFSET UNITYSDK_OFFSET(0x184147A0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMEPLAYTRACKNPCCONSTCONFIG_OFFSET UNITYSDK_OFFSET(0x18414A20)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGLOBALREACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x18414DE0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADLEVELGROUPMAINMISSIONPATCH_OFFSET UNITYSDK_OFFSET(0x18414840)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADLIGHTNINGSTRIKEAREAGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x18414E80)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADMAINSTORYCONFIG_OFFSET UNITYSDK_OFFSET(0x18413E20)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADMARBLEGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x18413F60)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADMAZECONFIG_OFFSET UNITYSDK_OFFSET(0x18414050)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADNETDEFINECONSTVALUECONFIG_OFFSET UNITYSDK_OFFSET(0x184145C0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADPAMAICONSTVALUE_OFFSET UNITYSDK_OFFSET(0x184148E0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADPOINTEVALUATORCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x18414D40)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADPREFABCACHECONFIG_OFFSET UNITYSDK_OFFSET(0x18414520)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADRESIDENTPOSSESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x18414AC0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADRESOLUTIONADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x18414350)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADSETTINGSCONFIG_OFFSET UNITYSDK_OFFSET(0x18414480)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADSUMMONUNITGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x18414B60)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__ONCONFIGLOADINGPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x11590330)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__ONCONFIGSLOADFINISHED_OFFSET UNITYSDK_OFFSET(0x115905A0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__QUEUECONFIGLOADWORK_OFFSET UNITYSDK_OFFSET(0x1158FDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreConfigManager_TypeDefinitionIndex = 56691;

	class GameCoreConfigManager : public ::System::Object
	{
	public:
		static ::RPG::GameCore::MarbleGameConfig** StaticGet_MarbleGameConfig()
		{
			return (::RPG::GameCore::MarbleGameConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1820);
		}
		static ::RPG::GameCore::SummonUnitGlobalConfig** StaticGet_SummonUnitGlobalConfig()
		{
			return (::RPG::GameCore::SummonUnitGlobalConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1828);
		}
		static ::RPG::GameCore::LightningStrikeAreaGlobalConfig** StaticGet_LightningStrikeAreaGlobalConfig()
		{
			return (::RPG::GameCore::LightningStrikeAreaGlobalConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1830);
		}
		static ::RPG::GameCore::SdkEnvConfig** StaticGet_SdkEnvConfig()
		{
			return (::RPG::GameCore::SdkEnvConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1838);
		}
		static ::RPG::GameCore::GameObjectPoolConfig** StaticGet_GameObjectPoolConfig()
		{
			return (::RPG::GameCore::GameObjectPoolConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1840);
		}
		static ::RPG::GameCore::PrefabCacheConfig** StaticGet_PrefabCacheConfig()
		{
			return (::RPG::GameCore::PrefabCacheConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1848);
		}
		static ::RPG::GameCore::DebugUIConfig** StaticGet_DebugUIConfig()
		{
			return (::RPG::GameCore::DebugUIConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1850);
		}
		static ::RPG::GameCore::NetDefineConstValue** StaticGet_NetDefineConstValueConfig()
		{
			return (::RPG::GameCore::NetDefineConstValue**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1858);
		}
		static ::RPG::GameCore::PriorityConfigList** StaticGet_PriorityConfigList()
		{
			return (::RPG::GameCore::PriorityConfigList**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1860);
		}
		static ::RPG::GameCore::MainStoryConfig** StaticGet_MainStoryConfig()
		{
			return (::RPG::GameCore::MainStoryConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1868);
		}
		static ::RPG::GameCore::CameraShakeTemplateConfig** StaticGet_ShakeTemplateConfig()
		{
			return (::RPG::GameCore::CameraShakeTemplateConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1870);
		}
		static ::RPG::GameCore::ResolutionAdaptionConfigMapping** StaticGet__RAMapping()
		{
			return (::RPG::GameCore::ResolutionAdaptionConfigMapping**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1878);
		}
		static ::System::Collections::Generic::List_1<::Class_1_A488AA7614AA6A91*>** StaticGet_JsonConfigHolderActions()
		{
			return (::System::Collections::Generic::List_1<::Class_1_A488AA7614AA6A91*>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1880);
		}
		static ::RPG::GameCore::JsonEnumDefineConfig** StaticGet_JsonEnumDefineConfig()
		{
			return (::RPG::GameCore::JsonEnumDefineConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1888);
		}
		static ::System::String** StaticGet_tmpResolutionName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1890);
		}
		static ::RPG::GameCore::EntityTimelineControlGlobalConfig** StaticGet_EntityTimelineControlConstConfig()
		{
			return (::RPG::GameCore::EntityTimelineControlGlobalConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1898);
		}
		static ::RPG::Client::Promises::Promise** StaticGet__LoadAllConfigPromise()
		{
			return (::RPG::Client::Promises::Promise**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18A0);
		}
		static ::RPG::GameCore::ConfigManifest** StaticGet_Manifest()
		{
			return (::RPG::GameCore::ConfigManifest**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18A8);
		}
		static ::RPG::GameCore::LevelGroupMainMissionIssuePatchList** StaticGet_LevelGroupMainMissionIssuePatchList()
		{
			return (::RPG::GameCore::LevelGroupMainMissionIssuePatchList**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18B0);
		}
		static ::RPG::GameCore::TrackNpcConst** StaticGet_TrackNpcConstConfig()
		{
			return (::RPG::GameCore::TrackNpcConst**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18B8);
		}
		static ::RPG::GameCore::CRPVirtualCameraConfigMap** StaticGet_CRPVirtualCameraConfigMap()
		{
			return (::RPG::GameCore::CRPVirtualCameraConfigMap**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18C0);
		}
		static ::RPG::GameCore::VCameraConfigList** StaticGet_CameraConfigList()
		{
			return (::RPG::GameCore::VCameraConfigList**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18C8);
		}
		static ::RPG::GameCore::GlobalReactionParameter** StaticGet_GlobalReactionParameter()
		{
			return (::RPG::GameCore::GlobalReactionParameter**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18D0);
		}
		static ::RPG::GameCore::AdventureAIDefaultParameter** StaticGet_AdventureAIDefaultParameter()
		{
			return (::RPG::GameCore::AdventureAIDefaultParameter**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18D8);
		}
		static ::RPG::GameCore::GameCoreConstValue** StaticGet_GameCoreConstValueConfig()
		{
			return (::RPG::GameCore::GameCoreConstValue**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18E0);
		}
		static ::RPG::GameCore::BattleBGMConfig** StaticGet_BattleBGMConfig()
		{
			return (::RPG::GameCore::BattleBGMConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18E8);
		}
		static ::RPG::GameCore::DamageBehaviorTemplateListConfig** StaticGet_DamageBehaviorTemplateConfig()
		{
			return (::RPG::GameCore::DamageBehaviorTemplateListConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18F0);
		}
		static ::RPG::GameCore::MonsterSneakConst** StaticGet_MonsterSneakConstConfig()
		{
			return (::RPG::GameCore::MonsterSneakConst**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x18F8);
		}
		static ::RPG::GameCore::ResidentPossessionConfig** StaticGet_ResidentPossessionConfig()
		{
			return (::RPG::GameCore::ResidentPossessionConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1900);
		}
		static ::RPG::GameCore::MazeConfig** StaticGet_MazeConfig()
		{
			return (::RPG::GameCore::MazeConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1908);
		}
		static ::RPG::GameCore::PamAIConstValue** StaticGet_PamAIConstValueConfig()
		{
			return (::RPG::GameCore::PamAIConstValue**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1910);
		}
		static ::RPG::GameCore::FollowSlotConstValue** StaticGet_FollowSlotConstValueConfig()
		{
			return (::RPG::GameCore::FollowSlotConstValue**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1918);
		}
		static ::RPG::GameCore::GameCoreUISetting** StaticGet_GameCoreUIConfig()
		{
			return (::RPG::GameCore::GameCoreUISetting**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1920);
		}
		static ::RPG::GameCore::ResolutionAdaptionConfigList** StaticGet__RAConfigList()
		{
			return (::RPG::GameCore::ResolutionAdaptionConfigList**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1928);
		}
		static ::RPG::GameCore::PointEvaluatorConstValue** StaticGet_PointEvaluatorConstValue()
		{
			return (::RPG::GameCore::PointEvaluatorConstValue**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1930);
		}
		static ::RPG::GameCore::ResolutionAdaptionConfig** StaticGet__CurrentRAConfig()
		{
			return (::RPG::GameCore::ResolutionAdaptionConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1938);
		}
		static ::RPG::GameCore::GachaCutsceneConfig** StaticGet_GachaCutsceneConfig()
		{
			return (::RPG::GameCore::GachaCutsceneConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1940);
		}
		static ::RPG::GameCore::SettingsConfig** StaticGet_SettingsConfig()
		{
			return (::RPG::GameCore::SettingsConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1948);
		}
		static ::System::Int32* StaticGet_CurProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x950);
		}
		static ::System::Int32* StaticGet_Total()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x954);
		}
		static ::System::Single* StaticGet__LastScreenAspect()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x958);
		}
		static ::System::Boolean* StaticGet_EnableResoulutionFixCameraOffset()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x95C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void ReloadImportedConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_RELOADIMPORTEDCONFIG_OFFSET))();
		}

		static ::System::Void ClearImportedConfigCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_CLEARIMPORTEDCONFIGCACHE_OFFSET))();
		}

		static ::System::Void LoadConfigManifest()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_LOADCONFIGMANIFEST_OFFSET))();
		}

		static ::System::Void LoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_LOADALLCONFIG_OFFSET))();
		}

		static ::RPG::Client::Promises::Promise* AsyncLoadAllConfig()
		{
			return ((::RPG::Client::Promises::Promise*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_ASYNCLOADALLCONFIG_OFFSET))();
		}

		static ::System::Void _QueueConfigLoadWork()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__QUEUECONFIGLOADWORK_OFFSET))();
		}

		static ::System::Void _OnConfigLoadingProgressChanged(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__ONCONFIGLOADINGPROGRESSCHANGED_OFFSET))(a1);
		}

		static ::System::Void _OnConfigsLoadFinished()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__ONCONFIGSLOADFINISHED_OFFSET))();
		}

		static ::System::Void UnloadAllConfig(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_UNLOADALLCONFIG_OFFSET))(a1);
		}

		static ::System::Void ReloadReplayRelevantConfig(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_RELOADREPLAYRELEVANTCONFIG_OFFSET))(a1);
		}

		static ::System::Void CheckLegality()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_CHECKLEGALITY_OFFSET))();
		}

		static ::System::Void _LoadGameCoreConstValue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMECORECONSTVALUE_OFFSET))();
		}

		static ::System::Void _LoadMainStoryConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADMAINSTORYCONFIG_OFFSET))();
		}

		static ::System::Void _LoadGameCoreUISetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMECOREUISETTING_OFFSET))();
		}

		static ::System::Void _LoadMarbleGameConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADMARBLEGAMECONFIG_OFFSET))();
		}

		static ::System::Void _LoadDebugUIConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADDEBUGUICONFIG_OFFSET))();
		}

		static ::System::Void _LoadMazeConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADMAZECONFIG_OFFSET))();
		}

		static ::System::Void _LoadBattleBGMConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADBATTLEBGMCONFIG_OFFSET))();
		}

		static ::System::Void _LoadCameraShakeTemplateConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADCAMERASHAKETEMPLATECONFIG_OFFSET))();
		}

		static ::System::Void _LoadCameraConfigMapConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADCAMERACONFIGMAPCONFIG_OFFSET))();
		}

		static ::System::Void _LoadResolutionAdaptionConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADRESOLUTIONADAPTIONCONFIG_OFFSET))();
		}

		static ::System::Void _LoadSettingsConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADSETTINGSCONFIG_OFFSET))();
		}

		static ::System::Void _LoadPrefabCacheConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADPREFABCACHECONFIG_OFFSET))();
		}

		static ::System::Void _LoadNetDefineConstValueConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADNETDEFINECONSTVALUECONFIG_OFFSET))();
		}

		static ::System::Void _LoadGachaCutsceneConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGACHACUTSCENECONFIG_OFFSET))();
		}

		static ::System::Void _LoadAdventureAIDefaultParameterConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADADVENTUREAIDEFAULTPARAMETERCONFIG_OFFSET))();
		}

		static ::System::Void _LoadGamePlayMonsterSneakConstConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMEPLAYMONSTERSNEAKCONSTCONFIG_OFFSET))();
		}

		static ::System::Void _LoadLevelGroupMainMissionPatch()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADLEVELGROUPMAINMISSIONPATCH_OFFSET))();
		}

		static ::System::Void _LoadPamAIConstValue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADPAMAICONSTVALUE_OFFSET))();
		}

		static ::System::Void _LoadGameObjectPoolConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMEOBJECTPOOLCONFIG_OFFSET))();
		}

		static ::System::Void _LoadGamePlayTrackNpcConstConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMEPLAYTRACKNPCCONSTCONFIG_OFFSET))();
		}

		static ::System::Void _LoadResidentPossessionConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADRESIDENTPOSSESSIONCONFIG_OFFSET))();
		}

		static ::System::Void _LoadSummonUnitGlobalConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADSUMMONUNITGLOBALCONFIG_OFFSET))();
		}

		static ::System::Void _LoadFollowSlotConstValueConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADFOLLOWSLOTCONSTVALUECONFIG_OFFSET))();
		}

		static ::System::Void _LoadEntityTimelineControlGlobalConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADENTITYTIMELINECONTROLGLOBALCONFIG_OFFSET))();
		}

		static ::System::Void _LoadPointEvaluatorConstValue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADPOINTEVALUATORCONSTVALUE_OFFSET))();
		}

		static ::System::Void _LoadGlobalReactionConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGLOBALREACTIONCONFIG_OFFSET))();
		}

		static ::System::Void _LoadLightningStrikeAreaGlobalConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADLIGHTNINGSTRIKEAREAGLOBALCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::ResolutionAdaptionConfig* get_CurrentResolutionConfig()
		{
			return ((::RPG::GameCore::ResolutionAdaptionConfig*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_GET_CURRENTRESOLUTIONCONFIG_OFFSET))();
		}

		static ::System::Boolean TryGetResolutionDeltaFromNormal(::System::Single& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Boolean(*)(::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_TRYGETRESOLUTIONDELTAFROMNORMAL_OFFSET))(a1, a2, a3);
		}
	};
}
