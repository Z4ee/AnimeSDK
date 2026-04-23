#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1069;
class Class_1_0AC901BFE4E36FC0;
class Class_1_2EAB25208BF9561B;
class Class_1_668FE281FA72D3E8_26;
class Class_1_75A9A573986647BA;
class Class_1_C06752CD2A701BDD;
class Class_1_D1E0AD3915BCCF29_121;
namespace Proto { class SceneMapInfo; }
namespace RPG::Client { class ChestAndRaidInfoCollector; }
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelFloorBakedInfo; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_MAPDATA_CHECKMONSTERAVAILABLE_OFFSET UNITYSDK_OFFSET(0xAB60D00)
#define RPG_CLIENT_NAVMAP_MAPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAB5F920)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETALLENTITYENUMERATOR_OFFSET UNITYSDK_OFFSET(0xAB56680)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xAB4EC50)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETFLOORSTARTANCHORLAYER_OFFSET UNITYSDK_OFFSET(0xAB607C0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETSUBNAVMAPLINKENTITY_OFFSET UNITYSDK_OFFSET(0xAB5C210)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ANCHORDEFS_OFFSET UNITYSDK_OFFSET(0xAB5BFA0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTINFOLIST_OFFSET UNITYSDK_OFFSET(0xAB60F60)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTMONSTERSTATLIST_OFFSET UNITYSDK_OFFSET(0xAB60F00)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xAB5F7B0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xAB5C590)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0xAB60400)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0xAB3CBE0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMNAVGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0xAB604F0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMREQUIRESUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xAB605E0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0xAB5FD90)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0xAB60BB0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xAB5F7D0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0xAB60AC0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ISCURRENTMAP_OFFSET UNITYSDK_OFFSET(0xAB602D0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ISINONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xAB603C0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0xAB602C0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_LAYERNUMBER_OFFSET UNITYSDK_OFFSET(0xAB606D0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_LIGHTENSECTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xAB3EEF0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0xAB3E1B0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xAB3F050)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xAB603A0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xAB5F790)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0xAB603E0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_TAGCONTAINER_OFFSET UNITYSDK_OFFSET(0xAB608E0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_VALIDSUBMAPLIST_OFFSET UNITYSDK_OFFSET(0xAB60E10)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTMAPDATASTRATEGY_OFFSET UNITYSDK_OFFSET(0xAB5FCE0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTSTRATEGY_OFFSET UNITYSDK_OFFSET(0xAB5FBF0)
#define RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_1_OFFSET UNITYSDK_OFFSET(0xAB587C0)
#define RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_OFFSET UNITYSDK_OFFSET(0xAB581D0)
#define RPG_CLIENT_NAVMAP_MAPDATA_ISCHESTMONSTERFINISHED_OFFSET UNITYSDK_OFFSET(0xAB60CA0)
#define RPG_CLIENT_NAVMAP_MAPDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xAB603B0)
#define RPG_CLIENT_NAVMAP_MAPDATA_SET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0xAB603F0)
#define RPG_CLIENT_NAVMAP_MAPDATA_SYNCSERVERDATA_OFFSET UNITYSDK_OFFSET(0xAB5FE80)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETALLENTITYINGROUP_OFFSET UNITYSDK_OFFSET(0xAB609D0)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETENTITY_OFFSET UNITYSDK_OFFSET(0xAB53B80)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETGROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0xAB5FAD0)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETRUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0xAB3D0B0)
#define RPG_CLIENT_NAVMAP_MAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB5FAA0)
#define RPG_CLIENT_NAVMAP_MAPDATA__UPDATEFINISHEDCHESTMONSTER_OFFSET UNITYSDK_OFFSET(0xAB5FF90)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MapData_TypeDefinitionIndex = 68858;

	class MapData : public ::System::Object
	{
	public:
		::Proto::SceneMapInfo* _SceneMapInfo; // 0x10
		::RPG::Client::ChestAndRaidInfoCollector* _ChestAndRaidInfoCollector; // 0x18
		::RPG::Client::MapDataKey* _MapDataKey; // 0x20
		::Class_1_75A9A573986647BA* _CrossMapDataStrategy; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedChestMonsterHashSet; // 0x30
		::System::UInt32 _PlaneID_k__BackingField; // 0x38
		::System::Boolean _SyncedWithServer_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::MapData* Create(::RPG::Client::MapDataKey* mapDataKey)
		{
			return ((::RPG::Client::NavMap::MapData*(*)(::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_CREATE_OFFSET))(mapDataKey);
		}

		::RPG::Client::ChestAndRaidInfoCollector* GetChestAndRaidInfoCollector()
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET))(this);
		}

		::System::Boolean TryGetGroupProperty(::System::UInt32 groupID, ::System::String* propertyName, ::System::Int16& propertyValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETGROUPPROPERTY_OFFSET))(this, groupID, propertyName, propertyValue);
		}

		::Class_0_16E4307DCC419505_1069* get__CurrentStrategy()
		{
			return ((::Class_0_16E4307DCC419505_1069*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTSTRATEGY_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* GetSubNavMapLinkEntity(::System::UInt32 subNavMapID)
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GETSUBNAVMAPLINKENTITY_OFFSET))(this, subNavMapID);
		}

		::System::Void SyncServerData(::Proto::SceneMapInfo* sceneMapInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_SYNCSERVERDATA_OFFSET))(this, sceneMapInfo);
		}

		::RPG::Client::MapDataKey* get_Key()
		{
			return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_KEY_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ISCURRENTMAP_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_SET_PLANEID_OFFSET))(this, value);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsInOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ISINONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Boolean get_SyncedWithServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_SYNCEDWITHSERVER_OFFSET))(this);
		}

		::System::Void set_SyncedWithServer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_SET_SYNCEDWITHSERVER_OFFSET))(this, value);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::String* get_EnvironmentProfilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ENVIRONMENTPROFILEPATH_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavmapConfig* get_NavmapConfig()
		{
			return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_NAVMAPCONFIG_OFFSET))(this);
		}

		::Class_1_2EAB25208BF9561B* get_FiveDimNavGraphConfig()
		{
			return ((::Class_1_2EAB25208BF9561B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMNAVGRAPHCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FiveDimRequireSubMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMREQUIRESUBMISSIONIDS_OFFSET))(this);
		}

		::RPG::GameCore::LevelFloorBakedInfo* get_FloorBakedInfoConfig()
		{
			return ((::RPG::GameCore::LevelFloorBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORBAKEDINFOCONFIG_OFFSET))(this);
		}

		::System::Int32 get_LayerNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_LAYERNUMBER_OFFSET))(this);
		}

		::System::Int32 GetFloorStartAnchorLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GETFLOORSTARTANCHORLAYER_OFFSET))(this);
		}

		::RPG::GameCore::HoyoTagContainer* get_TagContainer()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_TAGCONTAINER_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_LightenSectionIDList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_LIGHTENSECTIONIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* GetAllEntityEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GETALLENTITYENUMERATOR_OFFSET))(this);
		}

		::System::Boolean TryGetEntity(::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::Client::MapEntityDef*& entityDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapEntityDef*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETENTITY_OFFSET))(this, groupID, instanceID, entityDef);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* TryGetAllEntityInGroup(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETALLENTITYINGROUP_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* get_AnchorDefs()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ANCHORDEFS_OFFSET))(this);
		}

		::RPG::GameCore::RuntimeGroupInfo* TryGetRuntimeGroupInfo(::System::UInt32 groupID)
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETRUNTIMEGROUPINFO_OFFSET))(this, groupID);
		}

		::RPG::Client::FloorSavedData* get_FloorSavedValues()
		{
			return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORSAVEDVALUES_OFFSET))(this);
		}

		::Class_1_C06752CD2A701BDD* get_FloorConstValues()
		{
			return ((::Class_1_C06752CD2A701BDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORCONSTVALUES_OFFSET))(this);
		}

		::System::Boolean IsChestMonsterFinished(::System::UInt32 chestMonsterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_ISCHESTMONSTERFINISHED_OFFSET))(this, chestMonsterID);
		}

		::System::Boolean IsCanLoad(::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_OFFSET))(this, mapPropDef);
		}

		::System::Boolean IsCanLoad_1(::RPG::Client::MapNpcDef* mapNpcDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_1_OFFSET))(this, mapNpcDef);
		}

		::System::Boolean CheckMonsterAvailable(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_CHECKMONSTERAVAILABLE_OFFSET))(this, groupID, instanceID);
		}

		::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* get_ValidSubMapList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_VALIDSUBMAPLIST_OFFSET))(this);
		}

		::RPG::GameCore::EraFlipperConfig* get_EraFlipConfig()
		{
			return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ERAFLIPCONFIG_OFFSET))(this);
		}

		::RPG::Client::MapRotationInfo* get_MapRotationInfo()
		{
			return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_MAPROTATIONINFO_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_D1E0AD3915BCCF29_121*>* get_ChestMonsterStatList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_D1E0AD3915BCCF29_121*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTMONSTERSTATLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_668FE281FA72D3E8_26*>* get_ChestInfoList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_668FE281FA72D3E8_26*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTINFOLIST_OFFSET))(this);
		}

		::System::Void _UpdateFinishedChestMonster(::Proto::SceneMapInfo* sceneMapInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA__UPDATEFINISHEDCHESTMONSTER_OFFSET))(this, sceneMapInfo);
		}

		::Class_1_0AC901BFE4E36FC0* get__CurrentMapDataStrategy()
		{
			return ((::Class_1_0AC901BFE4E36FC0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTMAPDATASTRATEGY_OFFSET))(this);
		}
	};
}
