#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B27A28B5F94F6BD2;
class Class_2_2CF600F518D344A2;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayCaseData; }
namespace RPG::GameCore { class IRIFBXLodSizeConfig; }
namespace RPG::GameCore { class LevelFloorInfo; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class OptionalBattleAreaConfigTable; }
namespace RPG::GameCore { class OptionalLoadBlocksConfig; }
namespace RPG::GameCore { class SceneConstValueConfig; }
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace RPG::GameCore { class StagePVSBakeConfig; }
namespace RPG::GameCore { class StagePVSData; }
namespace RPG::GameCore { class StagePVSRuntimeDebugExportData; }
namespace RPG::GameCore { class StageVoxelMetaData; }
namespace RPG::GameCore { class TAMonoTickLodConfig; }
namespace RPG::GameCore { class TerrainStageLodConfig; }
namespace RPG::GameCore { class UnifiedBattleAreaConfig; }
namespace RPG::GameCore { class VolumeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_STAGEMANAGER_DESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0xE0E3FA0)
#define RPG_CLIENT_STAGEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0xE0E40C0)
#define RPG_CLIENT_STAGEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0E4300)
#define RPG_CLIENT_STAGEMANAGER_EDITORLOADSTAGEPVSBAKECONFIG_OFFSET UNITYSDK_OFFSET(0xE0E37A0)
#define RPG_CLIENT_STAGEMANAGER_GET_CURRBIGSTAGE_OFFSET UNITYSDK_OFFSET(0xE0E4530)
#define RPG_CLIENT_STAGEMANAGER_GET_CURRSTAGE_OFFSET UNITYSDK_OFFSET(0xE0E4540)
#define RPG_CLIENT_STAGEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE0E4340)
#define RPG_CLIENT_STAGEMANAGER_GET_NORMDISTANCELODTEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0xE0E1EC0)
#define RPG_CLIENT_STAGEMANAGER_GET_SCENECONSTVALUE_OFFSET UNITYSDK_OFFSET(0xE0E2140)
#define RPG_CLIENT_STAGEMANAGER_GET_SCENELODTEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0xE0E1D30)
#define RPG_CLIENT_STAGEMANAGER_GET_TAMONOTICKLODCONFIG_OFFSET UNITYSDK_OFFSET(0xE0E1FB0)
#define RPG_CLIENT_STAGEMANAGER_LOADBATTLEAREACONFIG_OFFSET UNITYSDK_OFFSET(0xE0E3660)
#define RPG_CLIENT_STAGEMANAGER_LOADIRIFBXLODSIZECONFIG_OFFSET UNITYSDK_OFFSET(0xE0E22D0)
#define RPG_CLIENT_STAGEMANAGER_LOADLODCONFIG_OFFSET UNITYSDK_OFFSET(0xE0E1E20)
#define RPG_CLIENT_STAGEMANAGER_LOADOPTIONALBATTLEAREACONFIGTABLE_OFFSET UNITYSDK_OFFSET(0xE0E3290)
#define RPG_CLIENT_STAGEMANAGER_LOADOPTIONALLOADBLOCKSCONFIG_OFFSET UNITYSDK_OFFSET(0xE0E31F0)
#define RPG_CLIENT_STAGEMANAGER_LOADPVSMETACONFIG_OFFSET UNITYSDK_OFFSET(0xE0E3410)
#define RPG_CLIENT_STAGEMANAGER_LOADSCENECONSTVALUECONFIG_OFFSET UNITYSDK_OFFSET(0xE0E2230)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEAUTOGENCONFIG_OFFSET UNITYSDK_OFFSET(0xE0E26B0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBASECONFIG_OFFSET UNITYSDK_OFFSET(0xE0E2420)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYFLOORINFO_OFFSET UNITYSDK_OFFSET(0xE0E3860)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYMAPDEF_OFFSET UNITYSDK_OFFSET(0xE0E3900)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYPATH_OFFSET UNITYSDK_OFFSET(0xE0E45C0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0xE0E23D0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIGBYSTAGEDIR_OFFSET UNITYSDK_OFFSET(0xE0E2B20)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xE0E27B0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEPVSRUNTIMEDEBUGEXPORTDATA_OFFSET UNITYSDK_OFFSET(0xE0E35C0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEPVSRUNTIMEREPLAYCASEDATA_OFFSET UNITYSDK_OFFSET(0xE0E3610)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEVOXELMETADATA_OFFSET UNITYSDK_OFFSET(0xE0E34B0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGE_OFFSET UNITYSDK_OFFSET(0xE0E3D50)
#define RPG_CLIENT_STAGEMANAGER_LOADTAMONOTICKLODCONFIG_OFFSET UNITYSDK_OFFSET(0xE0E20A0)
#define RPG_CLIENT_STAGEMANAGER_LOADTERRAINSTAGELODCONFIG_OFFSET UNITYSDK_OFFSET(0xE0E2960)
#define RPG_CLIENT_STAGEMANAGER_LOADVOLUMECONFIG_OFFSET UNITYSDK_OFFSET(0xE0E3330)
#define RPG_CLIENT_STAGEMANAGER_SETCURRSTAGE_OFFSET UNITYSDK_OFFSET(0xE0E4420)
#define RPG_CLIENT_STAGEMANAGER_TRYLOADSTAGEDATACONFIG_OFFSET UNITYSDK_OFFSET(0xE0E24C0)
#define RPG_CLIENT_STAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E37E0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageManager_TypeDefinitionIndex = 69475;

	class StageManager : public ::System::Object
	{
	public:
		static ::RPG::Client::StageManager** StaticGet__instance()
		{
			return (::RPG::Client::StageManager**)Il2CppClass::FromTypeDefinitionIndex(StageManager_TypeDefinitionIndex)->GetStaticField(0x2C0D0);
		}
		::RPG::GameCore::LodConfig* _SceneLodTemplateConfig; // 0x10
		::Class_2_2CF600F518D344A2* _CurrStage; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_2CF600F518D344A2*>* _dicStages; // 0x20
		::RPG::GameCore::LodConfig* _NormDistanceLodTemplateConfig; // 0x28
		::RPG::GameCore::SceneConstValueConfig* _SceneConstValue; // 0x30
		::RPG::GameCore::TAMonoTickLodConfig* _TAMonoTickLodConfig; // 0x38
		::Class_2_2CF600F518D344A2* CacheCurrStage; // 0x40

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

		static ::RPG::GameCore::IRIFBXLodSizeConfig* LoadIRIFBXLodSizeConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::IRIFBXLodSizeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADIRIFBXLODSIZECONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::StageConfig* LoadStageConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::StageConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGECONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::StageBaseConfig* LoadStageBaseConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::StageBaseConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBASECONFIG_OFFSET))(a1);
		}

		static ::System::Boolean TryLoadStageDataConfig(::System::String* a1, ::RPG::GameCore::StageBaseConfig*& a2, ::System::Boolean& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::StageBaseConfig*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_TRYLOADSTAGEDATACONFIG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::StageAutoGenConfig* LoadStageAutoGenConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::StageAutoGenConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEAUTOGENCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::LodConfig* LoadLodConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::LodConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADLODCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::TAMonoTickLodConfig* LoadTAMonoTickLodConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::TAMonoTickLodConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADTAMONOTICKLODCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::SceneConstValueConfig* LoadSceneConstValueConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::SceneConstValueConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSCENECONSTVALUECONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::StageLodMapConfig* LoadStageLodMapConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::StageLodMapConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::TerrainStageLodConfig* LoadTerrainStageLodConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::TerrainStageLodConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADTERRAINSTAGELODCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::StageLodMapConfig* LoadStageLodMapConfigByStageDir(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>*& a2)
		{
			return ((::RPG::GameCore::StageLodMapConfig*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIGBYSTAGEDIR_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::OptionalLoadBlocksConfig* LoadOptionalLoadBlocksConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::OptionalLoadBlocksConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADOPTIONALLOADBLOCKSCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::OptionalBattleAreaConfigTable* LoadOptionalBattleAreaConfigTable(::System::String* a1)
		{
			return ((::RPG::GameCore::OptionalBattleAreaConfigTable*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADOPTIONALBATTLEAREACONFIGTABLE_OFFSET))(a1);
		}

		static ::RPG::GameCore::VolumeConfig* LoadVolumeConfig(::System::String* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::VolumeConfig*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADVOLUMECONFIG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::StagePVSData* LoadPVSMetaConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::StagePVSData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADPVSMETACONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::StageVoxelMetaData* LoadStageVoxelMetaData(::System::String* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::StageVoxelMetaData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEVOXELMETADATA_OFFSET))(a1, a2);
		}

		::RPG::GameCore::StagePVSRuntimeDebugExportData* LoadStagePVSRuntimeDebugExportData(::System::String* a1)
		{
			return ((::RPG::GameCore::StagePVSRuntimeDebugExportData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEPVSRUNTIMEDEBUGEXPORTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* LoadStagePVSRuntimeReplayCaseData(::System::String* a1)
		{
			return ((::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEPVSRUNTIMEREPLAYCASEDATA_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::UnifiedBattleAreaConfig* LoadBattleAreaConfig(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::UnifiedBattleAreaConfig*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADBATTLEAREACONFIG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::StagePVSBakeConfig* EditorLoadStagePVSBakeConfig()
		{
			return ((::RPG::GameCore::StagePVSBakeConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_EDITORLOADSTAGEPVSBAKECONFIG_OFFSET))();
		}

		::Class_2_2CF600F518D344A2* LoadStageByFloorInfo(::RPG::GameCore::LevelFloorInfo* a1, ::Class_1_B27A28B5F94F6BD2* a2, ::System::UInt32 a3)
		{
			return ((::Class_2_2CF600F518D344A2*(*)(::PVOID, ::RPG::GameCore::LevelFloorInfo*, ::Class_1_B27A28B5F94F6BD2*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYFLOORINFO_OFFSET))(this, a1, a2, a3);
		}

		::Class_2_2CF600F518D344A2* LoadStageByMapDef(::RPG::Client::MapDef* a1)
		{
			return ((::Class_2_2CF600F518D344A2*(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYMAPDEF_OFFSET))(this, a1);
		}

		::Class_2_2CF600F518D344A2* LoadStage(::System::String* a1, ::System::UInt32 a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::Class_2_2CF600F518D344A2*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DestroyStage(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_DESTROYSTAGE_OFFSET))(this, a1, a2);
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

		::System::Void SetCurrStage(::Class_2_2CF600F518D344A2* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2CF600F518D344A2*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_SETCURRSTAGE_OFFSET))(this, a1, a2);
		}

		::Class_2_2CF600F518D344A2* get_CurrBigStage()
		{
			return ((::Class_2_2CF600F518D344A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_CURRBIGSTAGE_OFFSET))(this);
		}

		::RPG::Client::Stage* get_CurrStage()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_CURRSTAGE_OFFSET))(this);
		}

		::Class_2_2CF600F518D344A2* LoadStageByPath(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Class_2_2CF600F518D344A2*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYPATH_OFFSET))(this, a1, a2, a3);
		}
	};
}
