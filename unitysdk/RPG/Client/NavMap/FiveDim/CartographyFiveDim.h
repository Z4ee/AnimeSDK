#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1227;
class Class_1_A3C62CC0DC4BD2F1;
class Class_1_E7E7FCFD10613C60;
namespace RPG::Client { class IChestIcon; }
namespace RPG::Client { class IMapIcon; }
namespace RPG::Client { class IMissionIcon; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class AreaData; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace RPG::Client::NavMap::FiveDim { class SubNavMapDataFiveDim; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD939970)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETCHESTICONS_OFFSET UNITYSDK_OFFSET(0xD93AED0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETFACEPLAYERIN_OFFSET UNITYSDK_OFFSET(0xD93C100)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETFACE_1_OFFSET UNITYSDK_OFFSET(0xD93CCC0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETFACE_OFFSET UNITYSDK_OFFSET(0xD93C8C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETICONS_OFFSET UNITYSDK_OFFSET(0xD93AB70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETLEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0xD93BA10)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETMISSIONICONS_OFFSET UNITYSDK_OFFSET(0xD93B150)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETSURFACEPLAYERIN_OFFSET UNITYSDK_OFFSET(0xD93C1A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_ALLFACES_OFFSET UNITYSDK_OFFSET(0xD93AD90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_ALWAYSSHOWENTRYONMAP_OFFSET UNITYSDK_OFFSET(0xD93D560)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_CARTOGRAPHER_OFFSET UNITYSDK_OFFSET(0xD93D9B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xD93B4E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_CURFACE_OFFSET UNITYSDK_OFFSET(0xD93C180)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_DIFFICULTYLEVEL_OFFSET UNITYSDK_OFFSET(0xD93D4D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xD93D9F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_EXPLORATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xD93CE00)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xD93B330)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_ISEXPLORATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0xD93CD50)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0xD93C0B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_LEVELINSTANCES_OFFSET UNITYSDK_OFFSET(0xD93E230)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_MAPAREALIST_OFFSET UNITYSDK_OFFSET(0xD93E130)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xD93D6D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xD93E120)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xD93D850)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xD93B490)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0xD93C9D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0xD93D670)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xD93DB50)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xD93E190)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_REPORTOPENEDDIALOG_OFFSET UNITYSDK_OFFSET(0xD93CA20)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_RESETDEFAULTFACE_OFFSET UNITYSDK_OFFSET(0xD93BF70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_RPG_CLIENT_NAVMAP_ICARTOGRAPHY_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xD93E140)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_SETCURFACE_OFFSET UNITYSDK_OFFSET(0xD93C420)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_SET_CURFACE_OFFSET UNITYSDK_OFFSET(0xD93C190)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xD93E1D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__COLLECTMISSIONICON_OFFSET UNITYSDK_OFFSET(0xD93A330)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__COLLECTTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0xD93B530)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__CTOR_OFFSET UNITYSDK_OFFSET(0xD939560)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__GETFACEBYID_OFFSET UNITYSDK_OFFSET(0xD93BE40)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__INITCURFACE_OFFSET UNITYSDK_OFFSET(0xD93A810)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__INITEXPLORATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xD939640)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__INITFACEINDEX_OFFSET UNITYSDK_OFFSET(0xD93A240)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__INITLEVELINSTANCES_OFFSET UNITYSDK_OFFSET(0xD939B60)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__INITMAP_OFFSET UNITYSDK_OFFSET(0xD9395D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__REFRESHEXPLORATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xD93A9A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__TRYADDMISSIONGUIDEICON_OFFSET UNITYSDK_OFFSET(0xD93A460)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int CartographyFiveDim_TypeDefinitionIndex = 74519;

	class CartographyFiveDim : public ::System::Object
	{
	public:
		// static const ::System::String* ExplorationCompletedSubMapIconPath; // 0x0
		::RPG::Client::NavMap::FiveDim::SubNavMapDataFiveDim* _SubNavMapDataFiveDim; // 0x10
		::System::Collections::Generic::List_1<::Class_1_A3C62CC0DC4BD2F1*>* _LevelInstances; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1227*>* _ExplorationProgressList; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::AreaData*>* _MapAreaList_k__BackingField; // 0x28
		::RPG::GameCore::LevelNavmapConfig* _NavmapConfig_k__BackingField; // 0x30
		::RPG::Client::NavMap::FiveDim::Face* _CurFace_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::Client::NavMap::FiveDim::SubNavMapDataFiveDim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::SubNavMapDataFiveDim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__CTOR_OFFSET))(this, a1);
		}

		::System::Void _InitExplorationProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__INITEXPLORATIONPROGRESS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__INITMAP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMapIcon*>* GetIcons()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMapIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETICONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IChestIcon*>* GetChestIcons()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IChestIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETCHESTICONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMissionIcon*>* GetMissionIcons()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMissionIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETMISSIONICONS_OFFSET))(this);
		}

		::System::Void _InitLevelInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__INITLEVELINSTANCES_OFFSET))(this);
		}

		::System::Void _InitFaceIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__INITFACEINDEX_OFFSET))(this);
		}

		::System::Void _CollectMissionIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__COLLECTMISSIONICON_OFFSET))(this);
		}

		::System::Void _CollectTrackingMissionIcon(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__COLLECTTRACKINGMISSIONICON_OFFSET))(this, a1);
		}

		::System::Void _TryAddMissionGuideIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__TRYADDMISSIONGUIDEICON_OFFSET))(this);
		}

		::System::Void _InitCurFace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__INITCURFACE_OFFSET))(this);
		}

		::System::Void _RefreshExplorationProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__REFRESHEXPLORATIONPROGRESS_OFFSET))(this);
		}

		::System::Void ResetDefaultFace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_RESETDEFAULTFACE_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::Face* get_CurFace()
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_CURFACE_OFFSET))(this);
		}

		::System::Void set_CurFace(::RPG::Client::NavMap::FiveDim::Face* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::Face*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_SET_CURFACE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::Face*>* get_AllFaces()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::Face*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_ALLFACES_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::Face* GetFacePlayerIn()
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETFACEPLAYERIN_OFFSET))(this);
		}

		::Class_1_E7E7FCFD10613C60* GetSurfacePlayerIn()
		{
			return ((::Class_1_E7E7FCFD10613C60*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETSURFACEPLAYERIN_OFFSET))(this);
		}

		::System::Void SetCurFace(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_SETCURFACE_OFFSET))(this, a1, a2);
		}

		::System::Void ReportOpenedDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_REPORTOPENEDDIALOG_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::Face* GetFace(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETFACE_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::FiveDim::Face* GetFace_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETFACE_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::NavMap::FiveDim::Face* _GetFaceByID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM__GETFACEBYID_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsExplorationCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_ISEXPLORATIONCOMPLETED_OFFSET))(this);
		}

		::System::Single get_ExplorationProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_EXPLORATIONPROGRESS_OFFSET))(this);
		}

		::System::Int32 get_DifficultyLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_DIFFICULTYLEVEL_OFFSET))(this);
		}

		::System::Boolean get_AlwaysShowEntryOnMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_ALWAYSSHOWENTRYONMAP_OFFSET))(this);
		}

		::System::Boolean get_SyncedWithServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_SYNCEDWITHSERVER_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_PLANEID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_ENTRYID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_VERSEPARAM_OFFSET))(this);
		}

		::RPG::Client::NavMap::MapData* get_MapData()
		{
			return ((::RPG::Client::NavMap::MapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_MAPDATA_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavmapConfig* get_NavmapConfig()
		{
			return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_NAVMAPCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::AreaData*>* get_MapAreaList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::AreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_MAPAREALIST_OFFSET))(this);
		}

		::System::UInt32 get_SubMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_SUBMAPID_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartographer* get_Cartographer()
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_CARTOGRAPHER_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* RPG_Client_NavMap_ICartography_get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_RPG_CLIENT_NAVMAP_ICARTOGRAPHY_GET_MAPDATA_OFFSET))(this);
		}

		::System::Void OnMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_ONMAPDATADIRTY_OFFSET))(this);
		}

		::System::Void UpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_UPDATEDATA_OFFSET))(this);
		}

		::Class_1_A3C62CC0DC4BD2F1* GetLevelInstance(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Class_1_A3C62CC0DC4BD2F1*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GETLEVELINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_A3C62CC0DC4BD2F1*>* get_LevelInstances()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_A3C62CC0DC4BD2F1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM_GET_LEVELINSTANCES_OFFSET))(this);
		}
	};
}
