#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A488AA7614AA6A91;
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class AdventureAIDefaultParameter; }
namespace RPG::GameCore { class BattleBGMConfig; }
namespace RPG::GameCore { class CameraShakeTemplateConfig; }
namespace RPG::GameCore { class ChessModeConst; }
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

#define RPG_GAMECORE_GAMECORECONFIGMANAGER_ASYNCLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xA946690)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_CHECKLEGALITY_OFFSET UNITYSDK_OFFSET(0xA9475F0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_CLEARIMPORTEDCONFIGCACHE_OFFSET UNITYSDK_OFFSET(0xA9463B0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_GET_CURRENTRESOLUTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA948640)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xA9464B0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_LOADCONFIGMANIFEST_OFFSET UNITYSDK_OFFSET(0xA9463F0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_RELOADIMPORTEDCONFIG_OFFSET UNITYSDK_OFFSET(0xA946370)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_RELOADREPLAYRELEVANTCONFIG_OFFSET UNITYSDK_OFFSET(0xA947250)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xA9470C0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA948C30)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADADVENTUREAIDEFAULTPARAMETERCONFIG_OFFSET UNITYSDK_OFFSET(0xA947EC0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADBATTLEBGMCONFIG_OFFSET UNITYSDK_OFFSET(0xA947930)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADCAMERACONFIGMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xA947A70)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADCAMERASHAKETEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0xA9479D0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADDEBUGUICONFIG_OFFSET UNITYSDK_OFFSET(0xA9477F0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADENTITYTIMELINECONTROLGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xA948460)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADFOLLOWSLOTCONSTVALUECONFIG_OFFSET UNITYSDK_OFFSET(0xA9483C0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGACHACUTSCENECONFIG_OFFSET UNITYSDK_OFFSET(0xA947E20)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMECORECONSTVALUE_OFFSET UNITYSDK_OFFSET(0xA9473C0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMECOREUISETTING_OFFSET UNITYSDK_OFFSET(0xA947700)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMEOBJECTPOOLCONFIG_OFFSET UNITYSDK_OFFSET(0xA948140)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMEPLAYMONSTERSNEAKCONSTCONFIG_OFFSET UNITYSDK_OFFSET(0xA947F60)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGAMEPLAYTRACKNPCCONSTCONFIG_OFFSET UNITYSDK_OFFSET(0xA9481E0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADGLOBALREACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA9485A0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADLEVELGROUPMAINMISSIONPATCH_OFFSET UNITYSDK_OFFSET(0xA948000)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADMAINSTORYCONFIG_OFFSET UNITYSDK_OFFSET(0xA947660)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADMARBLEGAMECONFIG_OFFSET UNITYSDK_OFFSET(0xA9477A0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADMAZECONFIG_OFFSET UNITYSDK_OFFSET(0xA947890)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADNETDEFINECONSTVALUECONFIG_OFFSET UNITYSDK_OFFSET(0xA947D80)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADPAMAICONSTVALUE_OFFSET UNITYSDK_OFFSET(0xA9480A0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADPOINTEVALUATORCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xA948500)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADPREFABCACHECONFIG_OFFSET UNITYSDK_OFFSET(0xA947CE0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADRESIDENTPOSSESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA948280)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADRESOLUTIONADAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA947B10)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADSETTINGSCONFIG_OFFSET UNITYSDK_OFFSET(0xA947C40)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__LOADSUMMONUNITGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0xA948320)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__ONCONFIGLOADINGPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0xA946CD0)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__ONCONFIGSLOADFINISHED_OFFSET UNITYSDK_OFFSET(0xA946F10)
#define RPG_GAMECORE_GAMECORECONFIGMANAGER__QUEUECONFIGLOADWORK_OFFSET UNITYSDK_OFFSET(0xA9467F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreConfigManager_TypeDefinitionIndex = 45440;

	class GameCoreConfigManager : public ::System::Object
	{
	public:
		static ::RPG::GameCore::PriorityConfigList** StaticGet_PriorityConfigList()
		{
			return (::RPG::GameCore::PriorityConfigList**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D40);
		}
		static ::RPG::GameCore::SdkEnvConfig** StaticGet_SdkEnvConfig()
		{
			return (::RPG::GameCore::SdkEnvConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D48);
		}
		static ::RPG::GameCore::ResolutionAdaptionConfigMapping** StaticGet__RAMapping()
		{
			return (::RPG::GameCore::ResolutionAdaptionConfigMapping**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D50);
		}
		static ::RPG::GameCore::GlobalReactionParameter** StaticGet_GlobalReactionParameter()
		{
			return (::RPG::GameCore::GlobalReactionParameter**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D58);
		}
		static ::RPG::GameCore::DebugUIConfig** StaticGet_DebugUIConfig()
		{
			return (::RPG::GameCore::DebugUIConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D60);
		}
		static ::RPG::GameCore::DamageBehaviorTemplateListConfig** StaticGet_DamageBehaviorTemplateConfig()
		{
			return (::RPG::GameCore::DamageBehaviorTemplateListConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D68);
		}
		static ::RPG::GameCore::PrefabCacheConfig** StaticGet_PrefabCacheConfig()
		{
			return (::RPG::GameCore::PrefabCacheConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D70);
		}
		static ::RPG::GameCore::FollowSlotConstValue** StaticGet_FollowSlotConstValueConfig()
		{
			return (::RPG::GameCore::FollowSlotConstValue**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D78);
		}
		static ::RPG::GameCore::VCameraConfigList** StaticGet_CameraConfigList()
		{
			return (::RPG::GameCore::VCameraConfigList**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D80);
		}
		static ::RPG::GameCore::NetDefineConstValue** StaticGet_NetDefineConstValueConfig()
		{
			return (::RPG::GameCore::NetDefineConstValue**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D88);
		}
		static ::RPG::GameCore::SummonUnitGlobalConfig** StaticGet_SummonUnitGlobalConfig()
		{
			return (::RPG::GameCore::SummonUnitGlobalConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D90);
		}
		static ::System::Collections::Generic::List_1<::Class_1_A488AA7614AA6A91*>** StaticGet_JsonConfigHolderActions()
		{
			return (::System::Collections::Generic::List_1<::Class_1_A488AA7614AA6A91*>**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1D98);
		}
		static ::RPG::GameCore::GameObjectPoolConfig** StaticGet_GameObjectPoolConfig()
		{
			return (::RPG::GameCore::GameObjectPoolConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DA0);
		}
		static ::RPG::GameCore::ConfigManifest** StaticGet_Manifest()
		{
			return (::RPG::GameCore::ConfigManifest**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DA8);
		}
		static ::RPG::GameCore::ResolutionAdaptionConfigList** StaticGet__RAConfigList()
		{
			return (::RPG::GameCore::ResolutionAdaptionConfigList**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DB0);
		}
		static ::RPG::GameCore::ChessModeConst** StaticGet_ChessModeConstConfig()
		{
			return (::RPG::GameCore::ChessModeConst**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DB8);
		}
		static ::RPG::GameCore::TrackNpcConst** StaticGet_TrackNpcConstConfig()
		{
			return (::RPG::GameCore::TrackNpcConst**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DC0);
		}
		static ::RPG::GameCore::BattleBGMConfig** StaticGet_BattleBGMConfig()
		{
			return (::RPG::GameCore::BattleBGMConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DC8);
		}
		static ::RPG::GameCore::MonsterSneakConst** StaticGet_MonsterSneakConstConfig()
		{
			return (::RPG::GameCore::MonsterSneakConst**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DD0);
		}
		static ::RPG::GameCore::MazeConfig** StaticGet_MazeConfig()
		{
			return (::RPG::GameCore::MazeConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DD8);
		}
		static ::System::String** StaticGet_tmpResolutionName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DE0);
		}
		static ::RPG::GameCore::PamAIConstValue** StaticGet_PamAIConstValueConfig()
		{
			return (::RPG::GameCore::PamAIConstValue**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DE8);
		}
		static ::RPG::GameCore::ResidentPossessionConfig** StaticGet_ResidentPossessionConfig()
		{
			return (::RPG::GameCore::ResidentPossessionConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DF0);
		}
		static ::RPG::GameCore::LevelGroupMainMissionIssuePatchList** StaticGet_LevelGroupMainMissionIssuePatchList()
		{
			return (::RPG::GameCore::LevelGroupMainMissionIssuePatchList**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1DF8);
		}
		static ::RPG::GameCore::GameCoreConstValue** StaticGet_GameCoreConstValueConfig()
		{
			return (::RPG::GameCore::GameCoreConstValue**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E00);
		}
		static ::RPG::GameCore::JsonEnumDefineConfig** StaticGet_JsonEnumDefineConfig()
		{
			return (::RPG::GameCore::JsonEnumDefineConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E08);
		}
		static ::RPG::GameCore::EntityTimelineControlGlobalConfig** StaticGet_EntityTimelineControlConstConfig()
		{
			return (::RPG::GameCore::EntityTimelineControlGlobalConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E10);
		}
		static ::RPG::GameCore::PointEvaluatorConstValue** StaticGet_PointEvaluatorConstValue()
		{
			return (::RPG::GameCore::PointEvaluatorConstValue**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E18);
		}
		static ::RPG::GameCore::MarbleGameConfig** StaticGet_MarbleGameConfig()
		{
			return (::RPG::GameCore::MarbleGameConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E20);
		}
		static ::RPG::GameCore::AdventureAIDefaultParameter** StaticGet_AdventureAIDefaultParameter()
		{
			return (::RPG::GameCore::AdventureAIDefaultParameter**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E28);
		}
		static ::RPG::GameCore::GameCoreUISetting** StaticGet_GameCoreUIConfig()
		{
			return (::RPG::GameCore::GameCoreUISetting**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E30);
		}
		static ::RPG::GameCore::GachaCutsceneConfig** StaticGet_GachaCutsceneConfig()
		{
			return (::RPG::GameCore::GachaCutsceneConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E38);
		}
		static ::RPG::Client::Promises::Promise** StaticGet__LoadAllConfigPromise()
		{
			return (::RPG::Client::Promises::Promise**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E40);
		}
		static ::RPG::GameCore::MainStoryConfig** StaticGet_MainStoryConfig()
		{
			return (::RPG::GameCore::MainStoryConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E48);
		}
		static ::RPG::GameCore::CameraShakeTemplateConfig** StaticGet_ShakeTemplateConfig()
		{
			return (::RPG::GameCore::CameraShakeTemplateConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E50);
		}
		static ::RPG::GameCore::SettingsConfig** StaticGet_SettingsConfig()
		{
			return (::RPG::GameCore::SettingsConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E58);
		}
		static ::RPG::GameCore::ResolutionAdaptionConfig** StaticGet__CurrentRAConfig()
		{
			return (::RPG::GameCore::ResolutionAdaptionConfig**)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x1E60);
		}
		static ::System::Int32* StaticGet_CurProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x2330);
		}
		static ::System::Int32* StaticGet_Total()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x2334);
		}
		static ::System::Single* StaticGet__LastScreenAspect()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x2338);
		}
		static ::System::Boolean* StaticGet_EnableResoulutionFixCameraOffset()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameCoreConfigManager_TypeDefinitionIndex)->GetStaticField(0x233C);
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

		static ::System::Void _OnConfigLoadingProgressChanged(::System::Single progress)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__ONCONFIGLOADINGPROGRESSCHANGED_OFFSET))(progress);
		}

		static ::System::Void _OnConfigsLoadFinished()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER__ONCONFIGSLOADFINISHED_OFFSET))();
		}

		static ::System::Void UnloadAllConfig(::System::Boolean unloadTable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_UNLOADALLCONFIG_OFFSET))(unloadTable);
		}

		static ::System::Void ReloadReplayRelevantConfig(::System::Boolean ReplayMode)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_RELOADREPLAYRELEVANTCONFIG_OFFSET))(ReplayMode);
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

		static ::RPG::GameCore::ResolutionAdaptionConfig* get_CurrentResolutionConfig()
		{
			return ((::RPG::GameCore::ResolutionAdaptionConfig*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGMANAGER_GET_CURRENTRESOLUTIONCONFIG_OFFSET))();
		}
	};
}
