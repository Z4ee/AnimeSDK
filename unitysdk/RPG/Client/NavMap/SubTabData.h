#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/MazeFloorCartographerIdentifier.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChestAndRaidInfoCollector; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class ICartographerIdentifier; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class UniverseData; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class NavMapSubTabRow; }
namespace RPG::GameCore { class SubMissionRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_NAVMAP_SUBTABDATA_CLEARCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xC279BE0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_CREATEONLINEPLAYROOMSUBTAB_OFFSET UNITYSDK_OFFSET(0xC27FFD0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC27FED0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC27FC20)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETALLPREPAREMAPDATAKEYS_OFFSET UNITYSDK_OFFSET(0xC280790)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xC280350)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xC280C20)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETMAPDATA_OFFSET UNITYSDK_OFFSET(0xC280290)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETSUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0xC280D50)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETSYNCEDCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xC2804A0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0xC27D810)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_COMPLETELYUNLOCK_OFFSET UNITYSDK_OFFSET(0xC2813C0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_CONDITIONEXPRESSION_OFFSET UNITYSDK_OFFSET(0xC281680)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xC27E380)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xC281630)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xC279FC0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC2817F0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xC281740)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xC281660)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0xC27DD60)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC27D610)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0xC281650)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISUNLOCKAFTERENTER_OFFSET UNITYSDK_OFFSET(0xC2814E0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xC280330)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC27DB50)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xC281260)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xC281280)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xC27E300)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_SUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0xC2817D0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_UNIVERSE_OFFSET UNITYSDK_OFFSET(0xC27F6C0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC27C160)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xC27E2C0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_GET_WORLD_OFFSET UNITYSDK_OFFSET(0xC281720)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_ISHERE_OFFSET UNITYSDK_OFFSET(0xC2811C0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xC279EE0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_PREPAREMAPDATA_OFFSET UNITYSDK_OFFSET(0xC2803F0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_CONDITIONEXPRESSION_OFFSET UNITYSDK_OFFSET(0xC281690)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xC281640)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC281800)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xC280340)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_PARENT_OFFSET UNITYSDK_OFFSET(0xC281270)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_SUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0xC2817E0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_SET_WORLD_OFFSET UNITYSDK_OFFSET(0xC281730)
#define RPG_CLIENT_NAVMAP_SUBTABDATA_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xC2751E0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC27FEC0)
#define RPG_CLIENT_NAVMAP_SUBTABDATA__GETSYNCEDCARTOGRAPHYDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0xC281810)
#define RPG_CLIENT_NAVMAP_SUBTABDATA__ISSHOWCURRENTTRACEMISSIONIN_OFFSET UNITYSDK_OFFSET(0xC280FD0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int SubTabData_TypeDefinitionIndex = 69680;

	class SubTabData : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::WorldData* _World_k__BackingField; // 0x10
		::RPG::Client::MapDataKey* _MapDataKey_k__BackingField; // 0x18
		::RPG::Client::NavMap::ICartography* _Cartography; // 0x20
		::RPG::Client::NavMap::IMainTab* _Parent_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* _SubNavMaps_k__BackingField; // 0x30
		::System::String* _ConditionExpression_k__BackingField; // 0x38
		::System::UInt32 _EntryID_k__BackingField; // 0x40
		::RPG::Client::NavMap::MazeFloorCartographerIdentifier _Identifier_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::SubTabData* Create(::RPG::GameCore::NavMapSubTabRow* a1, ::RPG::Client::NavMap::IMainTab* a2)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::RPG::GameCore::NavMapSubTabRow*, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::NavMap::SubTabData* Create_1(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::NavMap::WorldData* a3)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_CREATE_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::NavMap::SubTabData* CreateOnlinePlayRoomSubTab(::RPG::GameCore::NavMapSubTabRow* a1, ::RPG::Client::NavMap::IMainTab* a2)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::RPG::GameCore::NavMapSubTabRow*, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_CREATEONLINEPLAYROOMSUBTAB_OFFSET))(a1, a2);
		}

		::RPG::Client::NavMap::IMapDataSource* GetMapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETMAPDATA_OFFSET))(this);
		}

		::System::Void ClearCartographyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_CLEARCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Void OnMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_ONMAPDATADIRTY_OFFSET))(this);
		}

		::System::Void UpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_UPDATEDATA_OFFSET))(this);
		}

		::RPG::Client::MapDataKey* get_MapDataKey()
		{
			return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_MAPDATAKEY_OFFSET))(this);
		}

		::System::Void set_MapDataKey(::RPG::Client::MapDataKey* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_MAPDATAKEY_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ICartography* GetCartographyData()
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETCARTOGRAPHYDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>* GetSyncedCartographyData(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETSYNCEDCARTOGRAPHYDATA_OFFSET))(this, a1);
		}

		::System::Void PrepareMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_PREPAREMAPDATA_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::MapDataKey*>* GetAllPrepareMapDataKeys()
		{
			return ((::Il2CppArray<::RPG::Client::MapDataKey*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETALLPREPAREMAPDATAKEYS_OFFSET))(this);
		}

		::RPG::Client::ChestAndRaidInfoCollector* GetChestAndRaidInfoCollector()
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET))(this);
		}

		::RPG::Client::NavMap::ISubNavMap* GetSubNavMapData(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETSUBNAVMAPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::SubMissionData* GetTrackingSubMissionForShow()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET))(this);
		}

		::System::Boolean _IsShowCurrentTraceMissionIn(::RPG::GameCore::SubMissionRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA__ISSHOWCURRENTTRACEMISSIONIN_OFFSET))(this, a1);
		}

		::System::Boolean IsHere(::RPG::Client::NavMap::ICartographerIdentifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_ISHERE_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::IMainTab* get_Parent()
		{
			return ((::RPG::Client::NavMap::IMainTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::RPG::Client::NavMap::IMainTab* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_PARENT_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::UniverseData* get_Universe()
		{
			return ((::RPG::Client::NavMap::UniverseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_UNIVERSE_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_PLANEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_Unlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_UNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_CompletelyUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_COMPLETELYUNLOCK_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_ENTRYID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSubNavMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISSUBNAVMAP_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::String* get_ConditionExpression()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_CONDITIONEXPRESSION_OFFSET))(this);
		}

		::System::Void set_ConditionExpression(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_CONDITIONEXPRESSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::Client::NavMap::WorldData* get_World()
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_WORLD_OFFSET))(this);
		}

		::System::Void set_World(::RPG::Client::NavMap::WorldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_WORLD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISEARLYACCESS_OFFSET))(this);
		}

		::System::Boolean get_IsUnlockAfterEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_ISUNLOCKAFTERENTER_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* get_SubNavMaps()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_SUBNAVMAPS_OFFSET))(this);
		}

		::System::Void set_SubNavMaps(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_SUBNAVMAPS_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::MazeFloorCartographerIdentifier get_Identifier()
		{
			return ((::RPG::Client::NavMap::MazeFloorCartographerIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::NavMap::MazeFloorCartographerIdentifier a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MazeFloorCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ICartography* _GetSyncedCartographyData_b__12_0(::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>* a1)
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SUBTABDATA__GETSYNCEDCARTOGRAPHYDATA_B__12_0_OFFSET))(this, a1);
		}
	};
}
