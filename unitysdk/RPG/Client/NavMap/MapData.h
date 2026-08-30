#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1223;
class Class_1_0AC901BFE4E36FC0;
class Class_1_1CBA230307F9C289_93;
class Class_1_301C5A497102AC7F;
class Class_1_5C14DC370981C80E;
class Class_1_A139A18477C7681A;
class Class_1_B27A28B5F94F6BD2;
class Class_1_D17272E82AE804C2_1082;
class Class_1_E14A0A1A8B1F847C_8;
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
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_MAPDATA_CHECKMONSTERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x18251C70)
#define RPG_CLIENT_NAVMAP_MAPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1824FC90)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETALLENTITYENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18251740)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1824FF40)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETFLOORSTARTANCHORLAYER_OFFSET UNITYSDK_OFFSET(0x182514A0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GETSUBNAVMAPLINKENTITY_OFFSET UNITYSDK_OFFSET(0x1824B3F0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ANCHORDEFS_OFFSET UNITYSDK_OFFSET(0x1824B140)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTINFOLIST_OFFSET UNITYSDK_OFFSET(0x182521B0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTMONSTERSTATLIST_OFFSET UNITYSDK_OFFSET(0x18252150)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1824FB20)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x1824BA40)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x18250EB0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0x18251EF0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMNAVGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0x18251110)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMREQUIRESUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x18251240)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0x18250370)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x18251AE0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1824FB70)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0x182519B0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ISCURRENTMAP_OFFSET UNITYSDK_OFFSET(0x18250BD0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_ISINONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x18250E40)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x18243D90)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_LAYERNUMBER_OFFSET UNITYSDK_OFFSET(0x18251370)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_LIGHTENSECTIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1824B7E0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0x18252020)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x18250FE0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0x18250E20)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1824FAD0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0x18250E90)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_TAGCONTAINER_OFFSET UNITYSDK_OFFSET(0x18251610)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET_VALIDSUBMAPLIST_OFFSET UNITYSDK_OFFSET(0x18251DC0)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTMAPDATASTRATEGY_OFFSET UNITYSDK_OFFSET(0x18250270)
#define RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTSTRATEGY_OFFSET UNITYSDK_OFFSET(0x18250170)
#define RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_1_OFFSET UNITYSDK_OFFSET(0x18245320)
#define RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_OFFSET UNITYSDK_OFFSET(0x18244790)
#define RPG_CLIENT_NAVMAP_MAPDATA_ISCHESTMONSTERFINISHED_OFFSET UNITYSDK_OFFSET(0x18251C10)
#define RPG_CLIENT_NAVMAP_MAPDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0x18250E30)
#define RPG_CLIENT_NAVMAP_MAPDATA_SET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0x18250EA0)
#define RPG_CLIENT_NAVMAP_MAPDATA_SYNCSERVERDATA_OFFSET UNITYSDK_OFFSET(0x18250600)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETALLENTITYINGROUP_OFFSET UNITYSDK_OFFSET(0x18251870)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETENTITY_OFFSET UNITYSDK_OFFSET(0x182504A0)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETGROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x18250000)
#define RPG_CLIENT_NAVMAP_MAPDATA_TRYGETRUNTIMEGROUPINFO_OFFSET UNITYSDK_OFFSET(0x18246330)
#define RPG_CLIENT_NAVMAP_MAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1824FE80)
#define RPG_CLIENT_NAVMAP_MAPDATA__UPDATEFINISHEDCHESTMONSTER_OFFSET UNITYSDK_OFFSET(0x18250760)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MapData_TypeDefinitionIndex = 74492;

	class MapData : public ::System::Object
	{
	public:
		::Class_1_E14A0A1A8B1F847C_8* _SceneMapInfo; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedChestMonsterHashSet; // 0x18
		::RPG::Client::ChestAndRaidInfoCollector* _ChestAndRaidInfoCollector; // 0x20
		::Class_1_5C14DC370981C80E* _CrossMapDataStrategy; // 0x28
		::RPG::Client::MapDataKey* _MapDataKey; // 0x30
		::System::Boolean _SyncedWithServer_k__BackingField; // 0x38
		::System::UInt32 _PlaneID_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::MapData* Create(::RPG::Client::MapDataKey* a1)
		{
			return ((::RPG::Client::NavMap::MapData*(*)(::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::ChestAndRaidInfoCollector* GetChestAndRaidInfoCollector()
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GETCHESTANDRAIDINFOCOLLECTOR_OFFSET))(this);
		}

		::System::Boolean TryGetGroupProperty(::System::UInt32 a1, ::System::String* a2, ::System::Int16& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETGROUPPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_1223* get__CurrentStrategy()
		{
			return ((::Class_0_16E4307DCC419505_1223*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTSTRATEGY_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* GetSubNavMapLinkEntity(::System::UInt32 a1)
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GETSUBNAVMAPLINKENTITY_OFFSET))(this, a1);
		}

		::System::Void SyncServerData(::Class_1_E14A0A1A8B1F847C_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_SYNCSERVERDATA_OFFSET))(this, a1);
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

		::System::Void set_PlaneID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_SET_PLANEID_OFFSET))(this, a1);
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

		::System::Void set_SyncedWithServer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_SET_SYNCEDWITHSERVER_OFFSET))(this, a1);
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

		::Class_1_A139A18477C7681A* get_FiveDimNavGraphConfig()
		{
			return ((::Class_1_A139A18477C7681A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMNAVGRAPHCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FiveDimRequireSubMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FIVEDIMREQUIRESUBMISSIONIDS_OFFSET))(this);
		}

		::Class_1_B27A28B5F94F6BD2* get_FloorBakedInfoConfig()
		{
			return ((::Class_1_B27A28B5F94F6BD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORBAKEDINFOCONFIG_OFFSET))(this);
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

		::System::Boolean TryGetEntity(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MapEntityDef*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapEntityDef*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* TryGetAllEntityInGroup(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETALLENTITYINGROUP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* get_AnchorDefs()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_ANCHORDEFS_OFFSET))(this);
		}

		::RPG::GameCore::RuntimeGroupInfo* TryGetRuntimeGroupInfo(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_TRYGETRUNTIMEGROUPINFO_OFFSET))(this, a1);
		}

		::RPG::Client::FloorSavedData* get_FloorSavedValues()
		{
			return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORSAVEDVALUES_OFFSET))(this);
		}

		::Class_1_301C5A497102AC7F* get_FloorConstValues()
		{
			return ((::Class_1_301C5A497102AC7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_FLOORCONSTVALUES_OFFSET))(this);
		}

		::System::Boolean IsChestMonsterFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_ISCHESTMONSTERFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IsCanLoad(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_OFFSET))(this, a1);
		}

		::System::Boolean IsCanLoad_1(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_ISCANLOAD_1_OFFSET))(this, a1);
		}

		::System::Boolean CheckMonsterAvailable(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_CHECKMONSTERAVAILABLE_OFFSET))(this, a1, a2);
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

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_1082*>* get_ChestMonsterStatList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_1082*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTMONSTERSTATLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_1CBA230307F9C289_93*>* get_ChestInfoList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_1CBA230307F9C289_93*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET_CHESTINFOLIST_OFFSET))(this);
		}

		::System::Void _UpdateFinishedChestMonster(::Class_1_E14A0A1A8B1F847C_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA__UPDATEFINISHEDCHESTMONSTER_OFFSET))(this, a1);
		}

		::Class_1_0AC901BFE4E36FC0* get__CurrentMapDataStrategy()
		{
			return ((::Class_1_0AC901BFE4E36FC0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPDATA_GET__CURRENTMAPDATASTRATEGY_OFFSET))(this);
		}
	};
}
