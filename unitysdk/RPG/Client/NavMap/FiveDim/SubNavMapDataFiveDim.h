#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/LittleGameCartographerIdentifier.h"
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
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class SubNavMapNameRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_CLEARCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xAB4DF40)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_CREATE_OFFSET UNITYSDK_OFFSET(0xAB4D8F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GETCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xAB4E0A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xAB4EB60)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GETMAPDATA_OFFSET UNITYSDK_OFFSET(0xAB457E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GETSYNCEDCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xAB4E2B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xAB4F250)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_CONTAINERENTITYREFS_OFFSET UNITYSDK_OFFSET(0xAB4FEE0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xAB4FCA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xAB4FB90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xAB4DD50)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xAB4FEB0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ID_OFFSET UNITYSDK_OFFSET(0xAB4F5D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_IS3DMAP_OFFSET UNITYSDK_OFFSET(0xAB4F240)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xAB4FD90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0xAB45880)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xAB4F260)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ISSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0xAB4FEA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xAB4E080)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAB4F5F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_NEARBYTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xAB4FE80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xAB4F5B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xAB4F9C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xAB4FBB0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_SUBTABFLOORID_OFFSET UNITYSDK_OFFSET(0xAB4F760)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_UNLOCK_OFFSET UNITYSDK_OFFSET(0xAB4F270)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xAB4DC80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_WORLD_OFFSET UNITYSDK_OFFSET(0xAB4F410)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_HAVEMAP_OFFSET UNITYSDK_OFFSET(0xAB4ED10)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_ISHERE_1_OFFSET UNITYSDK_OFFSET(0xAB4EE90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_ISHERE_OFFSET UNITYSDK_OFFSET(0xAB4F120)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xAB4DFA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xAB4FBA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xAB4FED0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_ID_OFFSET UNITYSDK_OFFSET(0xAB4F5E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xAB4E090)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_NEARBYTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xAB4FE90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_PARENT_OFFSET UNITYSDK_OFFSET(0xAB4F5C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xAB4E010)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM__CTOR_OFFSET UNITYSDK_OFFSET(0xAB4DC70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM__GETSYNCEDCARTOGRAPHYDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0xAB4FEF0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM__HASMAP_OFFSET UNITYSDK_OFFSET(0xAB4EDC0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM__PREPAREMAPDATA_OFFSET UNITYSDK_OFFSET(0xAB4E170)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int SubNavMapDataFiveDim_TypeDefinitionIndex = 68907;

	class SubNavMapDataFiveDim : public ::System::Object
	{
	public:
		::RPG::Client::MapDataKey* _MapDataKey_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelEntityRef*>* _ContainerEntityRefs; // 0x18
		::RPG::GameCore::SubNavMapNameRow* _OverrideNameRow; // 0x20
		::RPG::Client::NavMap::ICartographer* _Parent_k__BackingField; // 0x28
		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* _Cartography; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x38
		::RPG::Client::NavMap::LittleGameCartographerIdentifier _Identifier_k__BackingField; // 0x3C
		::System::UInt32 _EntryID_k__BackingField; // 0x50
		::System::UInt32 _NearbyTeleportMappingInfoID_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::FiveDim::SubNavMapDataFiveDim* Create(::System::UInt32 id, ::System::UInt32 floorID, ::System::UInt32 entryID, ::System::UInt32 nearbyTeleportMappingInfoID, ::RPG::Client::NavMap::ICartographer* parent, ::Il2CppArray<::RPG::GameCore::LevelEntityRef*>* containerEntityRefs)
		{
			return ((::RPG::Client::NavMap::FiveDim::SubNavMapDataFiveDim*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::ICartographer*, ::Il2CppArray<::RPG::GameCore::LevelEntityRef*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_CREATE_OFFSET))(id, floorID, entryID, nearbyTeleportMappingInfoID, parent, containerEntityRefs);
		}

		::RPG::Client::NavMap::IMapDataSource* GetMapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GETMAPDATA_OFFSET))(this);
		}

		::System::Void ClearCartographyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_CLEARCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Void OnMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_ONMAPDATADIRTY_OFFSET))(this);
		}

		::System::Void UpdateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_UPDATEDATA_OFFSET))(this);
		}

		::RPG::Client::MapDataKey* get_MapDataKey()
		{
			return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_MAPDATAKEY_OFFSET))(this);
		}

		::System::Void set_MapDataKey(::RPG::Client::MapDataKey* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_MAPDATAKEY_OFFSET))(this, value);
		}

		::RPG::Client::NavMap::ICartography* GetCartographyData()
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GETCARTOGRAPHYDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>* GetSyncedCartographyData(::System::Boolean fullScreenBlock)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GETSYNCEDCARTOGRAPHYDATA_OFFSET))(this, fullScreenBlock);
		}

		::System::Void _PrepareMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM__PREPAREMAPDATA_OFFSET))(this);
		}

		::RPG::Client::ChestAndRaidInfoCollector* GetChestAndRaidInfoCollector()
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET))(this);
		}

		::System::Boolean HaveMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_HAVEMAP_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::Boolean IsHere(::RPG::Client::NavMap::ICartographerIdentifier* cartographerIdentifier)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_ISHERE_OFFSET))(this, cartographerIdentifier);
		}

		::System::Boolean IsHere_1(::RPG::Client::VerseParam verseParam, ::System::UInt32 floorID, ::System::UInt32 containerGroupID, ::System::UInt32 containerInstanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::VerseParam, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_ISHERE_1_OFFSET))(this, verseParam, floorID, containerGroupID, containerInstanceID);
		}

		::System::Boolean get_Is3DMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_IS3DMAP_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_AreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_AREATYPE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_Unlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_UNLOCK_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartographer* get_Parent()
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::RPG::Client::NavMap::ICartographer* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_PARENT_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_SubTabFloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_SUBTABFLOORID_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_PLANEID_OFFSET))(this);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_ENTRYID_OFFSET))(this, value);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::Client::NavMap::WorldData* get_World()
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_WORLD_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ISEARLYACCESS_OFFSET))(this);
		}

		::System::UInt32 get_NearbyTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_NEARBYTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_NearbyTeleportMappingInfoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_NEARBYTELEPORTMAPPINGINFOID_OFFSET))(this, value);
		}

		::System::Boolean get_IsSubNavMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_ISSUBNAVMAP_OFFSET))(this);
		}

		::RPG::Client::NavMap::LittleGameCartographerIdentifier get_Identifier()
		{
			return ((::RPG::Client::NavMap::LittleGameCartographerIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::NavMap::LittleGameCartographerIdentifier value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::LittleGameCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_SET_IDENTIFIER_OFFSET))(this, value);
		}

		::System::Boolean _HasMap(::System::UInt32 containerGroupID, ::System::UInt32 containerInstanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM__HASMAP_OFFSET))(this, containerGroupID, containerInstanceID);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::LevelEntityRef*>* get_ContainerEntityRefs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::LevelEntityRef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM_GET_CONTAINERENTITYREFS_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartography* _GetSyncedCartographyData_b__10_0(::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>* x)
		{
			return ((::RPG::Client::NavMap::ICartography*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::NavMap::IMapDataSource*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SUBNAVMAPDATAFIVEDIM__GETSYNCEDCARTOGRAPHYDATA_B__10_0_OFFSET))(this, x);
		}
	};
}
