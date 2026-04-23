#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/MazeAreaCartographerIdentifier.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChestAndRaidInfoCollector; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ICartographerIdentifier; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class SubNavMapNameRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_CLEARCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xAB70400)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAB701C0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xAB70630)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xAB70CA0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETMAPDATA_OFFSET UNITYSDK_OFFSET(0xAB70360)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETSYNCEDCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xAB70A10)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xAB715B0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xAB71220)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xAB70F40)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xAB715D0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xAB70F60)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xAB71750)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xAB71360)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_IS3DMAP_OFFSET UNITYSDK_OFFSET(0xAB711D0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xAB71660)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISOTHERFLOOR_OFFSET UNITYSDK_OFFSET(0xAB708D0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0xAB70D90)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xAB71240)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0xAB71740)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xAB70610)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAB71380)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_NEARBYTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xAB71720)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_OVERRIDEDEFAULTLAYER_OFFSET UNITYSDK_OFFSET(0xAB71700)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xAB71330)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xAB71460)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xAB70F20)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_SUBTABFLOORID_OFFSET UNITYSDK_OFFSET(0xAB716D0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_UNLOCK_OFFSET UNITYSDK_OFFSET(0xAB712B0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xAB71610)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_WORLD_OFFSET UNITYSDK_OFFSET(0xAB715F0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_HAVEMAP_OFFSET UNITYSDK_OFFSET(0xAB71030)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHERE_1_OFFSET UNITYSDK_OFFSET(0xAB70F80)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHERE_OFFSET UNITYSDK_OFFSET(0xAB66390)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHIDEONMAINMAP_OFFSET UNITYSDK_OFFSET(0xAB70910)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xAB70450)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_RPG_CLIENT_NAVMAP_ISUBNAVMAP_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xAB71350)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xAB715C0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xAB71230)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xAB715E0)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xAB71770)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xAB71370)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xAB70620)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_NEARBYTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xAB71730)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_OVERRIDEDEFAULTLAYER_OFFSET UNITYSDK_OFFSET(0xAB71710)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_PARENT_OFFSET UNITYSDK_OFFSET(0xAB71340)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xAB70530)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB70350)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__GETSYNCEDCARTOGRAPHYDATA_B__11_0_OFFSET UNITYSDK_OFFSET(0xAB71780)
#define RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__PREPAREMAPDATA_OFFSET UNITYSDK_OFFSET(0xAB70790)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int SubNavMapData_TypeDefinitionIndex = 68867;

	class SubNavMapData : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::SubTabData* _Parent_k__BackingField; // 0x10
		::RPG::GameCore::SubNavMapNameRow* _OverrideNameRow; // 0x18
		::RPG::Client::MapDataKey* _MapDataKey_k__BackingField; // 0x20
		::RPG::Client::NavMap::ICartography* _Cartography; // 0x28
		::RPG::Client::NavMap::MazeAreaCartographerIdentifier _Identifier_k__BackingField; // 0x30
		::System::UInt32 _NearbyTeleportMappingInfoID_k__BackingField; // 0x44
		::System::UInt32 _AreaID_k__BackingField; // 0x48
		::System::UInt32 _ID_k__BackingField; // 0x4C
		::System::UInt32 _EntryID_k__BackingField; // 0x50
		::RPG::GameCore::MinimapAreaType _AreaType_k__BackingField; // 0x54
		::System::UInt32 _OverrideDefaultLayer_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::SubNavMapData* Create(::System::UInt32 id, ::System::UInt32 floorID, ::System::UInt32 entryID, ::System::UInt32 areaID, ::RPG::GameCore::MinimapAreaType areaType, ::System::UInt32 defaultLayer, ::System::UInt32 nearbyTeleportMappingInfoID, ::RPG::Client::NavMap::SubTabData* parent)
		{
			return ((::RPG::Client::NavMap::SubNavMapData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MinimapAreaType, ::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_CREATE_OFFSET))(id, floorID, entryID, areaID, areaType, defaultLayer, nearbyTeleportMappingInfoID, parent);
		}

		::RPG::Client::NavMap::IMapDataSource* GetMapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETMAPDATA_OFFSET))(this);
		}

		::System::Void ClearCartographyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_CLEARCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Void OnMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ONMAPDATADIRTY_OFFSET))(this);
		}

		::System::Void UpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_UPDATEDATA_OFFSET))(this);
		}

		::RPG::Client::MapDataKey* get_MapDataKey()
		{
			return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_MAPDATAKEY_OFFSET))(this);
		}

		::System::Void set_MapDataKey(::RPG::Client::MapDataKey* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_MAPDATAKEY_OFFSET))(this, value);
		}

		::RPG::Client::NavMap::ICartography* GetCartographyData()
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Boolean IsHideOnMainMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHIDEONMAINMAP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>* GetSyncedCartographyData(::System::Boolean fullScreenBlock)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETSYNCEDCARTOGRAPHYDATA_OFFSET))(this, fullScreenBlock);
		}

		::System::Void _PrepareMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__PREPAREMAPDATA_OFFSET))(this);
		}

		::RPG::Client::ChestAndRaidInfoCollector* GetChestAndRaidInfoCollector()
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::Boolean IsHere(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::UInt32 floorID, ::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHERE_OFFSET))(this, storyLineID, contentID, floorID, areaID);
		}

		::System::Boolean IsHere_1(::RPG::Client::NavMap::ICartographerIdentifier* cartographerIdentifier)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_ISHERE_1_OFFSET))(this, cartographerIdentifier);
		}

		::System::Boolean HaveMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_HAVEMAP_OFFSET))(this);
		}

		::System::Boolean get_Is3DMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_IS3DMAP_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_AreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_AREATYPE_OFFSET))(this);
		}

		::System::Void set_AreaType(::RPG::GameCore::MinimapAreaType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MinimapAreaType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_AREATYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_Unlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_UNLOCK_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* get_Parent()
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::RPG::Client::NavMap::SubTabData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_PARENT_OFFSET))(this, value);
		}

		::RPG::Client::NavMap::ICartographer* RPG_Client_NavMap_ISubNavMap_get_Parent()
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_RPG_CLIENT_NAVMAP_ISUBNAVMAP_GET_PARENT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_FLOORID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_AREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_ENTRYID_OFFSET))(this, value);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::Client::NavMap::WorldData* get_World()
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_WORLD_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISEARLYACCESS_OFFSET))(this);
		}

		::System::UInt32 get_SubTabFloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_SUBTABFLOORID_OFFSET))(this);
		}

		::System::UInt32 get_OverrideDefaultLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_OVERRIDEDEFAULTLAYER_OFFSET))(this);
		}

		::System::Void set_OverrideDefaultLayer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_OVERRIDEDEFAULTLAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_NearbyTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_NEARBYTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_NearbyTeleportMappingInfoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_NEARBYTELEPORTMAPPINGINFOID_OFFSET))(this, value);
		}

		::System::Boolean get_IsOtherFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISOTHERFLOOR_OFFSET))(this);
		}

		::System::Boolean get_IsSubNavMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_ISSUBNAVMAP_OFFSET))(this);
		}

		::RPG::Client::NavMap::MazeAreaCartographerIdentifier get_Identifier()
		{
			return ((::RPG::Client::NavMap::MazeAreaCartographerIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::NavMap::MazeAreaCartographerIdentifier value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MazeAreaCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA_SET_IDENTIFIER_OFFSET))(this, value);
		}

		::RPG::Client::NavMap::ICartography* _GetSyncedCartographyData_b__11_0(::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>* x)
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBNAVMAPDATA__GETSYNCEDCARTOGRAPHYDATA_B__11_0_OFFSET))(this, x);
		}
	};
}
