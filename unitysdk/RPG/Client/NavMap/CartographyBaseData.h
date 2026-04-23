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

#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETCHESTICONS_OFFSET UNITYSDK_OFFSET(0xAB3EBE0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETICONS_OFFSET UNITYSDK_OFFSET(0xAB3E610)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETMAPPINGINFOICONS_OFFSET UNITYSDK_OFFSET(0xAB3EB20)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETMISSIONICONS_OFFSET UNITYSDK_OFFSET(0xAB3EB80)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GETTELEPORTABLEICONS_OFFSET UNITYSDK_OFFSET(0xAB3E860)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_CARTOGRAPHER_OFFSET UNITYSDK_OFFSET(0xAB3F150)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xAB3ED00)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xAB3ECA0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xAB3EC80)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0xAB3CA00)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_MAPAREALIST_OFFSET UNITYSDK_OFFSET(0xAB3F140)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xAB3F160)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xAB3F030)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xAB3EC60)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xAB3ECC0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0xAB3EC40)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xAB3ED40)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_ISMAPSECTIONLIGHTEN_OFFSET UNITYSDK_OFFSET(0xAB3EE80)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xAB3EE30)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xAB3ECB0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xAB3EC90)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xAB3EC70)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xAB3ED60)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xAB3EFE0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3E300)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA__GETICONCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xAB3C2F0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int CartographyBaseData_TypeDefinitionIndex = 68747;

	class CartographyBaseData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::AreaData*>* _MapAreaList; // 0x10
		::RPG::Client::NavMap::ICartographer* _Cartographer; // 0x18
		::RPG::Client::NavMap::IMapDataSource* _MapData; // 0x20
		::RPG::Client::NavMap::IconCollectorBase* _IconCollector; // 0x28
		::System::UInt32 _FloorID_k__BackingField; // 0x30
		::System::UInt32 _EntryID_k__BackingField; // 0x34
		::RPG::Client::VerseParam _VerseParam_k__BackingField; // 0x38
		::System::UInt32 _PlaneID_k__BackingField; // 0x44

		::System::Void _ctor(::RPG::Client::NavMap::ICartographer* cartographer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA__CTOR_OFFSET))(this, cartographer);
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

		::System::Void set_PlaneID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_PLANEID_OFFSET))(this, value);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_FLOORID_OFFSET))(this, value);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_ENTRYID_OFFSET))(this, value);
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

		::System::Void set_VerseParam(::RPG::Client::VerseParam value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_SET_VERSEPARAM_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::Void OnMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_ONMAPDATADIRTY_OFFSET))(this);
		}

		::System::Boolean IsMapSectionLighten(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA_ISMAPSECTIONLIGHTEN_OFFSET))(this, sectionID);
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
