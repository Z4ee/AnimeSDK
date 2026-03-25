#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class IRIFBXLodSizeConfig; }
namespace RPG::GameCore { class LevelFloorBakedInfo; }
namespace RPG::GameCore { class LevelFloorInfo; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class OptionalBattleAreaConfigTable; }
namespace RPG::GameCore { class OptionalLoadBlocksConfig; }
namespace RPG::GameCore { class SceneConstValueConfig; }
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace RPG::GameCore { class StagePVSBakeConfig; }
namespace RPG::GameCore { class StagePVSData; }
namespace RPG::GameCore { class StagePVSRuntimeDebugExportData; }
namespace RPG::GameCore { class StageVoxelMetaData; }
namespace RPG::GameCore { class TAMonoTickLodConfig; }
namespace RPG::GameCore { class UnifiedBattleAreaConfig; }
namespace RPG::GameCore { class VolumeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_STAGEMANAGER_DESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0xA4D17E0)
#define RPG_CLIENT_STAGEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0xA4D1910)
#define RPG_CLIENT_STAGEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4D1AF0)
#define RPG_CLIENT_STAGEMANAGER_EDITORLOADSTAGEPVSBAKECONFIG_OFFSET UNITYSDK_OFFSET(0xA4D0FF0)
#define RPG_CLIENT_STAGEMANAGER_GETCHAPTERLODCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xA4D01C0)
#define RPG_CLIENT_STAGEMANAGER_GETIRIFBXLODSIZECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xA4D0300)
#define RPG_CLIENT_STAGEMANAGER_GET_CURRSTAGE_OFFSET UNITYSDK_OFFSET(0xA4D1DF0)
#define RPG_CLIENT_STAGEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA4D1B30)
#define RPG_CLIENT_STAGEMANAGER_GET_NORMDISTANCELODTEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0xA4CFB00)
#define RPG_CLIENT_STAGEMANAGER_GET_SCENECONSTVALUE_OFFSET UNITYSDK_OFFSET(0xA4CFD80)
#define RPG_CLIENT_STAGEMANAGER_GET_SCENELODTEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0xA4CF970)
#define RPG_CLIENT_STAGEMANAGER_GET_TAMONOTICKLODCONFIG_OFFSET UNITYSDK_OFFSET(0xA4CFBF0)
#define RPG_CLIENT_STAGEMANAGER_LOADBATTLEAREACONFIG_OFFSET UNITYSDK_OFFSET(0xA4D0EB0)
#define RPG_CLIENT_STAGEMANAGER_LOADIRIFBXLODSIZECONFIG_OFFSET UNITYSDK_OFFSET(0xA4CFF10)
#define RPG_CLIENT_STAGEMANAGER_LOADLODCONFIG_OFFSET UNITYSDK_OFFSET(0xA4CFA60)
#define RPG_CLIENT_STAGEMANAGER_LOADOPTIONALBATTLEAREACONFIGTABLE_OFFSET UNITYSDK_OFFSET(0xA4D0B30)
#define RPG_CLIENT_STAGEMANAGER_LOADOPTIONALLOADBLOCKSCONFIG_OFFSET UNITYSDK_OFFSET(0xA4D0A90)
#define RPG_CLIENT_STAGEMANAGER_LOADPVSMETACONFIG_OFFSET UNITYSDK_OFFSET(0xA4D0CB0)
#define RPG_CLIENT_STAGEMANAGER_LOADSCENECONSTVALUECONFIG_OFFSET UNITYSDK_OFFSET(0xA4CFE70)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEAUTOGENCONFIG_OFFSET UNITYSDK_OFFSET(0xA4B79A0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYFLOORINFO_OFFSET UNITYSDK_OFFSET(0xA4D10B0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYMAPDEF_OFFSET UNITYSDK_OFFSET(0xA4D1150)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYPATH_OFFSET UNITYSDK_OFFSET(0xA4D1FD0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0xA4B7900)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIGBYSTAGEDIR_OFFSET UNITYSDK_OFFSET(0xA4D03C0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xA4D0010)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEPVSRUNTIMEDEBUGEXPORTDATA_OFFSET UNITYSDK_OFFSET(0xA4D0E60)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEVOXELMETADATA_OFFSET UNITYSDK_OFFSET(0xA4D0D50)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGE_OFFSET UNITYSDK_OFFSET(0xA4D1380)
#define RPG_CLIENT_STAGEMANAGER_LOADTAMONOTICKLODCONFIG_OFFSET UNITYSDK_OFFSET(0xA4CFCE0)
#define RPG_CLIENT_STAGEMANAGER_LOADVOLUMECONFIG_OFFSET UNITYSDK_OFFSET(0xA4D0BD0)
#define RPG_CLIENT_STAGEMANAGER_SETCURRSTAGE_OFFSET UNITYSDK_OFFSET(0xA4D1C10)
#define RPG_CLIENT_STAGEMANAGER_SET_CURRSTAGE_OFFSET UNITYSDK_OFFSET(0xA4D1E00)
#define RPG_CLIENT_STAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D1030)

namespace RPG::Client
{
	inline static constexpr unsigned int StageManager_TypeDefinitionIndex = 56810;

	class StageManager : public ::System::Object
	{
	public:
		static ::RPG::Client::StageManager** StaticGet__instance()
		{
			return (::RPG::Client::StageManager**)Il2CppClass::FromTypeDefinitionIndex(StageManager_TypeDefinitionIndex)->GetStaticField(0x26460);
		}
		::RPG::Client::Stage* CacheCurrStage; // 0x10
		::RPG::GameCore::LodConfig* _SceneLodTemplateConfig; // 0x18
		::RPG::GameCore::TAMonoTickLodConfig* _TAMonoTickLodConfig; // 0x20
		::RPG::GameCore::LodConfig* _NormDistanceLodTemplateConfig; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Stage*>* _dicStages; // 0x30
		::RPG::Client::Stage* _CurrStage; // 0x38
		::RPG::GameCore::SceneConstValueConfig* _SceneConstValue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LodConfig* get_SceneLodTemplateConfig()
		{
			return ((::RPG::GameCore::LodConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_SCENELODTEMPLATECONFIG_OFFSET))(this);
		}

		::RPG::GameCore::LodConfig* get_NormDistanceLodTemplateConfig()
		{
			return ((::RPG::GameCore::LodConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_NORMDISTANCELODTEMPLATECONFIG_OFFSET))(this);
		}

		::RPG::GameCore::TAMonoTickLodConfig* get_TAMonoTickLodConfig()
		{
			return ((::RPG::GameCore::TAMonoTickLodConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_TAMONOTICKLODCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::SceneConstValueConfig* get_SceneConstValue()
		{
			return ((::RPG::GameCore::SceneConstValueConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_SCENECONSTVALUE_OFFSET))(this);
		}

		static ::RPG::GameCore::IRIFBXLodSizeConfig* LoadIRIFBXLodSizeConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::IRIFBXLodSizeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADIRIFBXLODSIZECONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::StageConfig* LoadStageConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::StageConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGECONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::StageAutoGenConfig* LoadStageAutoGenConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::StageAutoGenConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEAUTOGENCONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::LodConfig* LoadLodConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::LodConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADLODCONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::TAMonoTickLodConfig* LoadTAMonoTickLodConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::TAMonoTickLodConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADTAMONOTICKLODCONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::SceneConstValueConfig* LoadSceneConstValueConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::SceneConstValueConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSCENECONSTVALUECONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::StageLodMapConfig* LoadStageLodMapConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::StageLodMapConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIG_OFFSET))(jsonPath);
		}

		static ::System::String* GetChapterLodConfigPath(::System::String* stageDir, ::System::Boolean isAuto)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GETCHAPTERLODCONFIGPATH_OFFSET))(stageDir, isAuto);
		}

		static ::System::String* GetIRIFBXLodSizeConfigPath(::System::String* stageDir, ::System::String* stageName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GETIRIFBXLODSIZECONFIGPATH_OFFSET))(stageDir, stageName);
		}

		static ::RPG::GameCore::StageLodMapConfig* LoadStageLodMapConfigByStageDir(::System::String* stageDir, ::System::Collections::Generic::HashSet_1<::System::String*>*& useAutoLodTemplateItems)
		{
			return ((::RPG::GameCore::StageLodMapConfig*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIGBYSTAGEDIR_OFFSET))(stageDir, useAutoLodTemplateItems);
		}

		static ::RPG::GameCore::OptionalLoadBlocksConfig* LoadOptionalLoadBlocksConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::OptionalLoadBlocksConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADOPTIONALLOADBLOCKSCONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::OptionalBattleAreaConfigTable* LoadOptionalBattleAreaConfigTable(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::OptionalBattleAreaConfigTable*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADOPTIONALBATTLEAREACONFIGTABLE_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::VolumeConfig* LoadVolumeConfig(::System::String* jsonPath, ::System::Boolean ignoreError)
		{
			return ((::RPG::GameCore::VolumeConfig*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADVOLUMECONFIG_OFFSET))(jsonPath, ignoreError);
		}

		static ::RPG::GameCore::StagePVSData* LoadPVSMetaConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::StagePVSData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADPVSMETACONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::StageVoxelMetaData* LoadStageVoxelMetaData(::System::String* jsonPath, ::System::Boolean ignoreError)
		{
			return ((::RPG::GameCore::StageVoxelMetaData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEVOXELMETADATA_OFFSET))(jsonPath, ignoreError);
		}

		::RPG::GameCore::StagePVSRuntimeDebugExportData* LoadStagePVSRuntimeDebugExportData(::System::String* stageName)
		{
			return ((::RPG::GameCore::StagePVSRuntimeDebugExportData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEPVSRUNTIMEDEBUGEXPORTDATA_OFFSET))(this, stageName);
		}

		static ::RPG::GameCore::UnifiedBattleAreaConfig* LoadBattleAreaConfig(::System::UInt32 unifiedBattleAreaId, ::System::Boolean useLevelEditorCache)
		{
			return ((::RPG::GameCore::UnifiedBattleAreaConfig*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADBATTLEAREACONFIG_OFFSET))(unifiedBattleAreaId, useLevelEditorCache);
		}

		static ::RPG::GameCore::StagePVSBakeConfig* EditorLoadStagePVSBakeConfig()
		{
			return ((::RPG::GameCore::StagePVSBakeConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_EDITORLOADSTAGEPVSBAKECONFIG_OFFSET))();
		}

		::RPG::Client::Stage* LoadStageByFloorInfo(::RPG::GameCore::LevelFloorInfo* floorInfo, ::RPG::GameCore::LevelFloorBakedInfo* floorBakedInfo, ::System::UInt32 dimensionID)
		{
			return ((::RPG::Client::Stage*(*)(::PVOID, ::RPG::GameCore::LevelFloorInfo*, ::RPG::GameCore::LevelFloorBakedInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYFLOORINFO_OFFSET))(this, floorInfo, floorBakedInfo, dimensionID);
		}

		::RPG::Client::Stage* LoadStageByMapDef(::RPG::Client::MapDef* mapDef)
		{
			return ((::RPG::Client::Stage*(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYMAPDEF_OFFSET))(this, mapDef);
		}

		::RPG::Client::Stage* LoadStage(::System::String* floorID, ::System::UInt32 dimensionID, ::System::String* strName, ::System::String* strNavmeshPath, ::System::String* strNavmeshLargeMonsterDataPath, ::System::String* dir)
		{
			return ((::RPG::Client::Stage*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGE_OFFSET))(this, floorID, dimensionID, strName, strNavmeshPath, strNavmeshLargeMonsterDataPath, dir);
		}

		::System::Void DestroyStage(::System::String* floorID, ::System::UInt32 dimensionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_DESTROYSTAGE_OFFSET))(this, floorID, dimensionID);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_DESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_DISPOSE_OFFSET))(this);
		}

		static ::RPG::Client::StageManager* get_Instance()
		{
			return ((::RPG::Client::StageManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void SetCurrStage(::RPG::Client::Stage* stage, ::System::Boolean onlyBattle)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_SETCURRSTAGE_OFFSET))(this, stage, onlyBattle);
		}

		::RPG::Client::Stage* get_CurrStage()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_CURRSTAGE_OFFSET))(this);
		}

		::System::Void set_CurrStage(::RPG::Client::Stage* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_SET_CURRSTAGE_OFFSET))(this, value);
		}

		::RPG::Client::Stage* LoadStageByPath(::System::String* strJsonPath, ::System::String* strNavmeshPath, ::System::String* strNavmeshLargeMonsterDataPath)
		{
			return ((::RPG::Client::Stage*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYPATH_OFFSET))(this, strJsonPath, strNavmeshPath, strNavmeshLargeMonsterDataPath);
		}
	};
}
