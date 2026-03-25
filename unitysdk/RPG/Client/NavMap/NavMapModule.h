#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/Struct_2_137AB23E3A00ECA1_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_0AC901BFE4E36FC0;
class Class_1_813743369E0E31B2_2;
class Class_1_813743369E0E31B2_3;
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class UniverseData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class ChestGroupPropertyRow; }
namespace RPG::GameCore { class ChestMonsterRow; }
namespace RPG::GameCore { class LevelFloorBakedSubmapInfo; }
namespace RPG::GameCore { class MazePuzzleOrigamiFDRow; }
namespace RPG::GameCore { class NavMapSubTabRow; }
namespace RPG::GameCore { class NavMapTabRow; }
namespace RPG::GameCore { class SubNavMapRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_CLEARMAPDATA_OFFSET UNITYSDK_OFFSET(0x9E1AAD0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERENTITYIN_OFFSET UNITYSDK_OFFSET(0x9E1D250)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERMAPPINGINFOIDIN_1_OFFSET UNITYSDK_OFFSET(0x9E1EC10)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERMAPPINGINFOIDIN_OFFSET UNITYSDK_OFFSET(0x9E1E000)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERPLAYERIN_OFFSET UNITYSDK_OFFSET(0x9E1BC10)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERSUBMISSIONIN_OFFSET UNITYSDK_OFFSET(0x9E1D090)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETENTRYIDBYFLOORID_OFFSET UNITYSDK_OFFSET(0x9E20540)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCHESTMONSTERLIMAO_OFFSET UNITYSDK_OFFSET(0x9E19F50)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCHEST_OFFSET UNITYSDK_OFFSET(0x9E19E40)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x9E1A060)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETMAPDATASOURCE_OFFSET UNITYSDK_OFFSET(0x9E141B0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLANEIDBYFLOORID_OFFSET UNITYSDK_OFFSET(0x9E160A0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDMAINTAB_OFFSET UNITYSDK_OFFSET(0x9E1EF10)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0x9E1C8E0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDSUBTAB_OFFSET UNITYSDK_OFFSET(0x9E1CEC0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETRAIDSUBTAB_OFFSET UNITYSDK_OFFSET(0x9E1EC90)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETSUBTABFLOORID_OFFSET UNITYSDK_OFFSET(0x9E1F9E0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETSYNCEDMAPDATASOURCE_OFFSET UNITYSDK_OFFSET(0x9E1E300)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETUNIVERSEDATA_OFFSET UNITYSDK_OFFSET(0x9E1DAC0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_CURRENTMAPDATASTRATEGY_OFFSET UNITYSDK_OFFSET(0x9E185A0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9E13C50)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_PLAYERLOCATEDVERSE_OFFSET UNITYSDK_OFFSET(0x9E1ED50)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_SUBTABCONDITIONCHECKERS_OFFSET UNITYSDK_OFFSET(0x9E25890)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_SUBTABCONTAINOTHERFLOORSUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0x9E25870)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_SUBTABCONTAINSAMEFLOORSUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0x9E25880)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_TABCONTAINSUBTABS_OFFSET UNITYSDK_OFFSET(0x9E25860)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_WORLDCONTAINTABS_OFFSET UNITYSDK_OFFSET(0x9E25850)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9E1FA70)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_ISSCENEENTERED_OFFSET UNITYSDK_OFFSET(0x9E1F980)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_MARKALLMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0x9E1C0E0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9E20310)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_PREPAREMAPDATASOURCE_OFFSET UNITYSDK_OFFSET(0x9E13CB0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_PREPAREMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9E203F0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDCHESTMONSTERLIMAO_OFFSET UNITYSDK_OFFSET(0x9E1A5D0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x9E1A8D0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDGPCHEST_OFFSET UNITYSDK_OFFSET(0x9E1A2A0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E20940)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E20820)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__BUILDTABCONDITIONCHECKER_OFFSET UNITYSDK_OFFSET(0x9E200E0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__CLEARRAIDCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0x9E1B960)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__CLEARRAIDSUBTABDATA_OFFSET UNITYSDK_OFFSET(0x9E23510)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E258A0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__GETCARTOGRAPHERENTITYIN_OFFSET UNITYSDK_OFFSET(0x9E1D560)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__HAVEMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9E1E640)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITDEFAULTENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9E1FB80)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCHESTMONSTERLIMAO_OFFSET UNITYSDK_OFFSET(0x9E1A4A0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCHEST_OFFSET UNITYSDK_OFFSET(0x9E1A170)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x9E1A7B0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFLOORID2PLANEID_OFFSET UNITYSDK_OFFSET(0x9E1FEC0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITSAMEFLOORSUBNAVMAPHIERARCHY_OFFSET UNITYSDK_OFFSET(0x9E24DF0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITSUBTABCONTAINOTHERFLOORSUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0x9E24A50)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITTABCONTAINSUBTABS_OFFSET UNITYSDK_OFFSET(0x9E244C0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITTABHIERARCHYINDEX_OFFSET UNITYSDK_OFFSET(0x9E20080)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITWORLDCONTAINTABS_OFFSET UNITYSDK_OFFSET(0x9E241A0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ISREQUESTEDSYNCMAPDATA_OFFSET UNITYSDK_OFFSET(0x9E24FD0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONADDTEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0x9E24100)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x9E233F0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDENTEREDSCENECHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9E22990)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDGETENTEREDSCENESCRSP_OFFSET UNITYSDK_OFFSET(0x9E22640)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDGETSCENEMAPINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9E20BE0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDWORLDUNLOCKSCRSP_OFFSET UNITYSDK_OFFSET(0x9E23370)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x9E23560)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9E23B40)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMAPGROUPDEFREFRESH_OFFSET UNITYSDK_OFFSET(0x9E240B0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMASTERMAINTABUNLOCK_OFFSET UNITYSDK_OFFSET(0x9E22CF0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMISSIONSYNC_OFFSET UNITYSDK_OFFSET(0x9E24060)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONRAIDMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0x9E1C650)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONREMOVETEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0x9E24150)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__REFRESHCURRENTMAPDATASTRATEGY_OFFSET UNITYSDK_OFFSET(0x9E234B0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__SENDGETSCENEMAPINFO_OFFSET UNITYSDK_OFFSET(0x9E25160)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__TRYUPDATERAIDDATA_OFFSET UNITYSDK_OFFSET(0x9E22300)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9E25EA0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9E25F30)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E25FF0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E25F90)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavMapModule_TypeDefinitionIndex = 61353;

	class NavMapModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::VerseParam, ::RPG::Client::NavMap::UniverseData*>* _UniverseDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _OtherFloorSubNavMapIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::Struct_2_137AB23E3A00ECA1_2, ::RPG::Client::Promises::Promise_1<::RPG::Client::NavMap::IMapDataSource*>*>* _SyncMapDataPromises; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _FloorID2DefaultEntranceID; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::System::UInt32>*>* _FiveDimInstanceContainsChestMonsterLimaoIDs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ConditionChecker*>* _SubTabConditionCheckers; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::NavMapTabRow*>*>* _WorldContainTabs; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SubNavMapRow*>*>* _SubTabContainOtherFloorSubNavMaps; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::Class_1_813743369E0E31B2_2*>*>* _FiveDimInstanceContainsCollectionDatas; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::NavMapSubTabRow*>*>* _TabContainSubTabs; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelFloorBakedSubmapInfo*>*>* _SubTabContainSameFloorSubNavMaps; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _FloorID2PlaneID; // 0x68
		::RPG::Client::NavMap::SubTabData* _RaidSubTabData; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::Class_1_813743369E0E31B2_3*>*>* _FiveDimInstanceContainsGPChestDatas; // 0x78
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _EnteredFloors; // 0x80
		::Class_1_0AC901BFE4E36FC0* _CurrentMapDataStrategy; // 0x88
		::System::Collections::Generic::Dictionary_2<::Struct_2_137AB23E3A00ECA1_2, ::RPG::Client::NavMap::IMapDataSource*>* _CacheMapDatas; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_813743369E0E31B2_3*>* GetFiveDimInstanceContainsChest(::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_813743369E0E31B2_3*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCHEST_OFFSET))(this, floorID, groupID, instanceID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFiveDimInstanceContainsChestMonsterLimao(::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCHESTMONSTERLIMAO_OFFSET))(this, floorID, groupID, instanceID);
		}

		::System::Collections::Generic::List_1<::Class_1_813743369E0E31B2_2*>* GetFiveDimInstanceContainsCollectionData(::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_813743369E0E31B2_2*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCOLLECTIONDATA_OFFSET))(this, floorID, groupID, instanceID);
		}

		::System::Void _InitFiveDimInstanceContainsChest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCHEST_OFFSET))(this);
		}

		::System::Void _AddGPChest(::RPG::GameCore::ChestGroupPropertyRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChestGroupPropertyRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDGPCHEST_OFFSET))(this, row);
		}

		::System::Void _InitFiveDimInstanceContainsChestMonsterLimao()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCHESTMONSTERLIMAO_OFFSET))(this);
		}

		::System::Void _AddChestMonsterLimao(::RPG::GameCore::ChestMonsterRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChestMonsterRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDCHESTMONSTERLIMAO_OFFSET))(this, row);
		}

		::System::Void _InitFiveDimInstanceContainsCollectionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCOLLECTIONDATA_OFFSET))(this);
		}

		::System::Void _AddCollectionData(::RPG::GameCore::MazePuzzleOrigamiFDRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiFDRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDCOLLECTIONDATA_OFFSET))(this, row);
		}

		static ::RPG::Client::NavMap::NavMapModule* get_Instance()
		{
			return ((::RPG::Client::NavMap::NavMapModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Void ClearMapData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_CLEARMAPDATA_OFFSET))(this);
		}

		::System::Void MarkAllMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_MARKALLMAPDATADIRTY_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartographer* GetCartographerPlayerIn()
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERPLAYERIN_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartographer* GetCartographerSubMissionIn(::System::UInt32 subMissionID)
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERSUBMISSIONIN_OFFSET))(this, subMissionID);
		}

		::RPG::Client::NavMap::ICartographer* GetCartographerEntityIn(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 littleGameEntityID)
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERENTITYIN_OFFSET))(this, storyLineID, contentID, floorID, groupID, instanceID, littleGameEntityID);
		}

		::RPG::Client::NavMap::ICartographer* _GetCartographerEntityIn(::RPG::Client::NavMap::SubTabData* subTabData, ::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32 littleGameEntityID)
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__GETCARTOGRAPHERENTITYIN_OFFSET))(this, subTabData, floorID, groupID, instanceID, littleGameEntityID);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>* GetCartographerMappingInfoIDIn(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 mappingInfoID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERMAPPINGINFOIDIN_OFFSET))(this, storyLineID, contentID, floorID, groupID, mappingInfoID);
		}

		::System::Boolean _HaveMappingInfoID(::RPG::Client::NavMap::ICartographer* cartographer, ::System::UInt32 mappingInfoID, ::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__HAVEMAPPINGINFOID_OFFSET))(this, cartographer, mappingInfoID, groupID);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>* GetCartographerMappingInfoIDIn_1(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::UInt32 floorID, ::System::UInt32 mappingInfoID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERMAPPINGINFOIDIN_1_OFFSET))(this, storyLineID, contentID, floorID, mappingInfoID);
		}

		::RPG::Client::NavMap::SubTabData* GetPlayerLocatedSubTab()
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDSUBTAB_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMainTab* GetPlayerLocatedMainTab()
		{
			return ((::RPG::Client::NavMap::IMainTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDMAINTAB_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* GetRaidSubTab(::System::UInt32 worldID, ::System::UInt32 floorID, ::System::UInt32 entranceID)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETRAIDSUBTAB_OFFSET))(this, worldID, floorID, entranceID);
		}

		::RPG::Client::NavMap::ISubNavMap* GetPlayerLocatedSubNavMap()
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDSUBNAVMAP_OFFSET))(this);
		}

		::System::Boolean IsSceneEntered(::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_ISSCENEENTERED_OFFSET))(this, floorID);
		}

		::System::UInt32 GetSubTabFloorID(::System::UInt32 floorID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETSUBTABFLOORID_OFFSET))(this, floorID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void PrepareMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_PREPAREMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 GetEntryIDByFloorID(::System::UInt32 floorID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETENTRYIDBYFLOORID_OFFSET))(this, floorID);
		}

		::System::UInt32 GetPlaneIDByFloorID(::System::UInt32 floorID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLANEIDBYFLOORID_OFFSET))(this, floorID);
		}

		::RPG::Client::VerseParam get_PlayerLocatedVerse()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_PLAYERLOCATEDVERSE_OFFSET))(this);
		}

		::RPG::Client::NavMap::UniverseData* GetUniverseData(::RPG::Client::VerseParam verseParam)
		{
			return ((::RPG::Client::NavMap::UniverseData*(*)(::PVOID, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETUNIVERSEDATA_OFFSET))(this, verseParam);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetSceneMapInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDGETSCENEMAPINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetEnteredSceneScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDGETENTEREDSCENESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEnteredSceneChangeScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDENTEREDSCENECHANGESCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnMasterMainTabUnlock(::System::Collections::Generic::List_1<::RPG::Client::NavMap::IMainTab*>* mainTabs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::IMainTab*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMASTERMAINTABUNLOCK_OFFSET))(this, mainTabs);
		}

		::System::Void _OnCmdWorldUnlockScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDWORLDUNLOCKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnFinishedMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnFinishSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONFINISHSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnMissionSync(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMISSIONSYNC_OFFSET))(this, arg);
		}

		::System::Void _OnMapGroupDefRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMAPGROUPDEFREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnAddTempShowIcon(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONADDTEMPSHOWICON_OFFSET))(this, arg);
		}

		::System::Void _OnRemoveTempShowIcon(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONREMOVETEMPSHOWICON_OFFSET))(this, arg);
		}

		::System::Void _RefreshCurrentMapDataStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__REFRESHCURRENTMAPDATASTRATEGY_OFFSET))(this);
		}

		::System::Void _ClearRaidSubTabData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__CLEARRAIDSUBTABDATA_OFFSET))(this);
		}

		::System::Void _InitDefaultEntranceID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITDEFAULTENTRANCEID_OFFSET))(this);
		}

		::System::Void _InitFloorID2PlaneID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFLOORID2PLANEID_OFFSET))(this);
		}

		::System::Void _InitTabHierarchyIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITTABHIERARCHYINDEX_OFFSET))(this);
		}

		::System::Void _InitWorldContainTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITWORLDCONTAINTABS_OFFSET))(this);
		}

		::System::Void _InitTabContainSubTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITTABCONTAINSUBTABS_OFFSET))(this);
		}

		::System::Void _InitSubTabContainOtherFloorSubNavMaps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITSUBTABCONTAINOTHERFLOORSUBNAVMAPS_OFFSET))(this);
		}

		::System::Void _InitSameFloorSubNavMapHierarchy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITSAMEFLOORSUBNAVMAPHIERARCHY_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* GetMapDataSource(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::UInt32 floorID)
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETMAPDATASOURCE_OFFSET))(this, storyLineID, contentID, floorID);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::IMapDataSource*>*>* GetSyncedMapDataSource(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::Boolean fullScreenBlock, ::Il2CppArray<::System::UInt32>* floorIDs)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::IMapDataSource*>*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETSYNCEDMAPDATASOURCE_OFFSET))(this, storyLineID, contentID, fullScreenBlock, floorIDs);
		}

		::System::Void PrepareMapDataSource(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::Boolean fullScreenBlock, ::Il2CppArray<::System::UInt32>* floorIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_PREPAREMAPDATASOURCE_OFFSET))(this, storyLineID, contentID, fullScreenBlock, floorIDs);
		}

		::System::Void _BuildTabConditionChecker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__BUILDTABCONDITIONCHECKER_OFFSET))(this);
		}

		::System::Void _SendGetSceneMapInfo(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::Collections::Generic::List_1<::System::UInt32>* floorIDs, ::System::Boolean fullScreenBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__SENDGETSCENEMAPINFO_OFFSET))(this, storyLineID, contentID, floorIDs, fullScreenBlock);
		}

		::System::Boolean _IsRequestedSyncMapData(::Struct_2_137AB23E3A00ECA1_2 mapDataKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ISREQUESTEDSYNCMAPDATA_OFFSET))(this, mapDataKey);
		}

		::System::Void _ClearRaidCartographyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__CLEARRAIDCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Void _OnRaidMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONRAIDMAPDATADIRTY_OFFSET))(this);
		}

		::System::Void _TryUpdateRaidData(::System::UInt32 floorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__TRYUPDATERAIDDATA_OFFSET))(this, floorID);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::NavMapTabRow*>*>* get_WorldContainTabs()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::NavMapTabRow*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_WORLDCONTAINTABS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::NavMapSubTabRow*>*>* get_TabContainSubTabs()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::NavMapSubTabRow*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_TABCONTAINSUBTABS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SubNavMapRow*>*>* get_SubTabContainOtherFloorSubNavMaps()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SubNavMapRow*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_SUBTABCONTAINOTHERFLOORSUBNAVMAPS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelFloorBakedSubmapInfo*>*>* get_SubTabContainSameFloorSubNavMaps()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelFloorBakedSubmapInfo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_SUBTABCONTAINSAMEFLOORSUBNAVMAPS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ConditionChecker*>* get_SubTabConditionCheckers()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ConditionChecker*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_SUBTABCONDITIONCHECKERS_OFFSET))(this);
		}

		::Class_1_0AC901BFE4E36FC0* get_CurrentMapDataStrategy()
		{
			return ((::Class_1_0AC901BFE4E36FC0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_CURRENTMAPDATASTRATEGY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
