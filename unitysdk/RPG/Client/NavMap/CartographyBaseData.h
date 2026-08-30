#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IChestIcon; }
namespace RPG::Client { class IMapIcon; }
namespace RPG::Client { class IMissionIcon; }
namespace RPG::Client { class ITeleportableIcon; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client::NavMap { class AreaData; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class IconCollectorBase; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETCHESTICONS_OFFSET UNITYSDK_OFFSET(0xD936BE0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETICONS_OFFSET UNITYSDK_OFFSET(0xD936240)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETMAPPINGINFOICONS_OFFSET UNITYSDK_OFFSET(0xD936A20)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETMISSIONICONS_OFFSET UNITYSDK_OFFSET(0xD936B00)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETTELEPORTABLEICONS_OFFSET UNITYSDK_OFFSET(0xD936650)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_CARTOGRAPHER_OFFSET UNITYSDK_OFFSET(0xD936E20)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xD936DB0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xD936D50)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xD936D30)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0xD933CF0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_MAPAREALIST_OFFSET UNITYSDK_OFFSET(0xD936F70)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xD934DF0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xD930C50)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xD936D10)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xD936D70)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0xD936CC0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xD936DF0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_ISMAPSECTIONLIGHTEN_OFFSET UNITYSDK_OFFSET(0xD936EB0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xD936E60)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xD936D60)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xD936D40)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xD936D20)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xD936E10)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xD936F20)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD930790)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA__GETICONCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xD931770)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int CartographyBaseData_TypeDefinitionIndex = 74382;

	class CartographyBaseData : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::ICartographer* _Cartographer; // 0x10
		::RPG::Client::NavMap::IconCollectorBase* _IconCollector; // 0x18
		::RPG::Client::NavMap::IMapDataSource* _MapData; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::AreaData*>* _MapAreaList; // 0x28
		::System::UInt32 _FloorID_k__BackingField; // 0x30
		::RPG::Client::VerseParam _VerseParam_k__BackingField; // 0x34
		::System::UInt32 _EntryID_k__BackingField; // 0x40
		::System::UInt32 _PlaneID_k__BackingField; // 0x44

		::System::Void _ctor(::RPG::Client::NavMap::ICartographer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMapIcon*>* GetIcons()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMapIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETICONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ITeleportableIcon*>* GetTeleportableIcons()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ITeleportableIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETTELEPORTABLEICONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* GetMappingInfoIcons()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETMAPPINGINFOICONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMissionIcon*>* GetMissionIcons()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMissionIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETMISSIONICONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IChestIcon*>* GetChestIcons()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IChestIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETCHESTICONS_OFFSET))(this);
		}

		::System::Boolean get_SyncedWithServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_SYNCEDWITHSERVER_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_PLANEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_ENTRYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::Void set_VerseParam(::RPG::Client::VerseParam a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_VERSEPARAM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::Void OnMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_ONMAPDATADIRTY_OFFSET))(this);
		}

		::System::Boolean IsMapSectionLighten(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_ISMAPSECTIONLIGHTEN_OFFSET))(this, a1);
		}

		::System::Void UpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_UPDATEDATA_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavmapConfig* get_NavmapConfig()
		{
			return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_NAVMAPCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::AreaData*>* get_MapAreaList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::AreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_MAPAREALIST_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartographer* get_Cartographer()
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_CARTOGRAPHER_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_MAPDATA_OFFSET))(this);
		}

		::RPG::Client::NavMap::IconCollectorBase* _GetIconCollector()
		{
			return ((::RPG::Client::NavMap::IconCollectorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA__GETICONCOLLECTOR_OFFSET))(this);
		}
	};
}
