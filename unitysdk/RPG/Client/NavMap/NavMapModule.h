#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_0AC901BFE4E36FC0;
class Class_1_CB66E39D32BF42FF_1;
class Class_1_CB66E39D32BF42FF_2;
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client { class MapDataKey; }
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

#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_CLEARMAPDATA_OFFSET UNITYSDK_OFFSET(0xD95F1B0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERENTITYIN_OFFSET UNITYSDK_OFFSET(0xD962040)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERMAPPINGINFOIDIN_1_OFFSET UNITYSDK_OFFSET(0xD9641A0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERMAPPINGINFOIDIN_OFFSET UNITYSDK_OFFSET(0xD963460)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERPLAYERIN_OFFSET UNITYSDK_OFFSET(0xD960630)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERSUBMISSIONIN_OFFSET UNITYSDK_OFFSET(0xD961E70)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETENTRYIDBYFLOORID_OFFSET UNITYSDK_OFFSET(0xD9658F0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCHESTMONSTERLIMAO_OFFSET UNITYSDK_OFFSET(0xD95E5B0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCHEST_OFFSET UNITYSDK_OFFSET(0xD95E4E0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0xD95E680)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETMAPDATASOURCE_1_OFFSET UNITYSDK_OFFSET(0xD96B160)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETMAPDATASOURCE_OFFSET UNITYSDK_OFFSET(0xD958BB0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLANEIDBYFLOORID_OFFSET UNITYSDK_OFFSET(0xD95AF80)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDMAINTAB_OFFSET UNITYSDK_OFFSET(0xD964520)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0xD9618C0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDSUBTAB_OFFSET UNITYSDK_OFFSET(0xD961B30)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETRAIDSUBTAB_OFFSET UNITYSDK_OFFSET(0xD964220)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETSUBTABFLOORID_OFFSET UNITYSDK_OFFSET(0xD964C70)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETSYNCEDMAPDATASOURCE_OFFSET UNITYSDK_OFFSET(0xD963680)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETUNIVERSEDATA_OFFSET UNITYSDK_OFFSET(0xD962CD0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_CURRENTMAPDATASTRATEGY_OFFSET UNITYSDK_OFFSET(0xD95CF20)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD958480)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_PLAYERLOCATEDVERSE_OFFSET UNITYSDK_OFFSET(0xD964340)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_SUBTABCONDITIONCHECKERS_OFFSET UNITYSDK_OFFSET(0xD96BAC0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_SUBTABCONTAINOTHERFLOORSUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0xD96BA40)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_SUBTABCONTAINSAMEFLOORSUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0xD96BA80)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_TABCONTAINSUBTABS_OFFSET UNITYSDK_OFFSET(0xD96BA00)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_WORLDCONTAINTABS_OFFSET UNITYSDK_OFFSET(0xD96B9C0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD964D00)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_ISSCENEENTERED_OFFSET UNITYSDK_OFFSET(0xD964C10)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_MARKALLMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xD960C20)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD965670)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_PREPAREMAPDATASOURCE_OFFSET UNITYSDK_OFFSET(0xD958500)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE_PREPAREMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD965740)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDCHESTMONSTERLIMAO_OFFSET UNITYSDK_OFFSET(0xD95EC60)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0xD95EF90)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDGPCHEST_OFFSET UNITYSDK_OFFSET(0xD95E8C0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD965CD0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD965A10)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__BUILDTABCONDITIONCHECKER_OFFSET UNITYSDK_OFFSET(0xD965420)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__CLEARRAIDCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xD960260)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__CLEARRAIDSUBTABDATA_OFFSET UNITYSDK_OFFSET(0xD9694D0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD96BB00)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__GETCARTOGRAPHERENTITYIN_OFFSET UNITYSDK_OFFSET(0xD962380)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__GETDEEPESTPLAYERLOCATEDSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0xD964600)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__HAVEMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xD9639A0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITDEFAULTENTRANCEID_OFFSET UNITYSDK_OFFSET(0xD964DC0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCHESTMONSTERLIMAO_OFFSET UNITYSDK_OFFSET(0xD95EAF0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCHEST_OFFSET UNITYSDK_OFFSET(0xD95E750)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0xD95EE30)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFLOORID2PLANEID_OFFSET UNITYSDK_OFFSET(0xD965170)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITSAMEFLOORSUBNAVMAPHIERARCHY_OFFSET UNITYSDK_OFFSET(0xD96AF90)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITSUBTABCONTAINOTHERFLOORSUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0xD96ABC0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITTABCONTAINSUBTABS_OFFSET UNITYSDK_OFFSET(0xD96A540)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITTABHIERARCHYINDEX_OFFSET UNITYSDK_OFFSET(0xD9653C0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITWORLDCONTAINTABS_OFFSET UNITYSDK_OFFSET(0xD96A1E0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ISREQUESTEDSYNCMAPDATA_OFFSET UNITYSDK_OFFSET(0xD96B290)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONADDTEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0xD96A140)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xD9693C0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDENTEREDSCENECHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD968780)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDGETENTEREDSCENESCRSP_OFFSET UNITYSDK_OFFSET(0xD9682E0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDGETSCENEMAPINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xD965FF0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDWORLDUNLOCKSCRSP_OFFSET UNITYSDK_OFFSET(0xD969340)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xD969520)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xD969B30)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMAPGROUPDEFREFRESH_OFFSET UNITYSDK_OFFSET(0xD96A0F0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMASTERMAINTABUNLOCK_OFFSET UNITYSDK_OFFSET(0xD968C00)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMISSIONSYNC_OFFSET UNITYSDK_OFFSET(0xD96A0A0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONRAIDMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xD961510)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONREMOVETEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0xD96A190)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__REFRESHCURRENTMAPDATASTRATEGY_OFFSET UNITYSDK_OFFSET(0xD969480)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__SENDGETSCENEMAPINFO_OFFSET UNITYSDK_OFFSET(0xD96B3C0)
#define RPG_CLIENT_NAVMAP_NAVMAPMODULE__TRYUPDATERAIDDATA_OFFSET UNITYSDK_OFFSET(0xD967DE0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavMapModule_TypeDefinitionIndex = 74494;

	class NavMapModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::NavMapTabRow*>*>* _WorldContainTabs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelFloorBakedSubmapInfo*>*>* _SubTabContainSameFloorSubNavMaps; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MapDataKey*, ::RPG::Client::NavMap::IMapDataSource*>* _CacheMapDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::Class_1_CB66E39D32BF42FF_1*>*>* _FiveDimInstanceContainsGPChestDatas; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::System::UInt32>*>* _FiveDimInstanceContainsChestMonsterLimaoIDs; // 0x30
		::Class_1_0AC901BFE4E36FC0* _CurrentMapDataStrategy; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _EnteredFloors; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::Client::VerseParam, ::RPG::Client::NavMap::UniverseData*>* _UniverseDatas; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::NavMapSubTabRow*>*>* _TabContainSubTabs; // 0x50
		::RPG::Client::NavMap::SubTabData* _RaidSubTabData; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _FloorID2DefaultEntranceID; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SubNavMapRow*>*>* _SubTabContainOtherFloorSubNavMaps; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::Class_1_CB66E39D32BF42FF_2*>*>* _FiveDimInstanceContainsCollectionDatas; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ConditionChecker*>* _SubTabConditionCheckers; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _FloorID2PlaneID; // 0x80
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MapDataKey*, ::RPG::Client::Promises::Promise_1<::RPG::Client::NavMap::IMapDataSource*>*>* _SyncMapDataPromises; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _OtherFloorSubNavMapIDs; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_CB66E39D32BF42FF_1*>* GetFiveDimInstanceContainsChest(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_CB66E39D32BF42FF_1*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCHEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFiveDimInstanceContainsChestMonsterLimao(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCHESTMONSTERLIMAO_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::Class_1_CB66E39D32BF42FF_2*>* GetFiveDimInstanceContainsCollectionData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_CB66E39D32BF42FF_2*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETFIVEDIMINSTANCECONTAINSCOLLECTIONDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitFiveDimInstanceContainsChest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCHEST_OFFSET))(this);
		}

		::System::Void _AddGPChest(::RPG::GameCore::ChestGroupPropertyRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChestGroupPropertyRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDGPCHEST_OFFSET))(this, a1);
		}

		::System::Void _InitFiveDimInstanceContainsChestMonsterLimao()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCHESTMONSTERLIMAO_OFFSET))(this);
		}

		::System::Void _AddChestMonsterLimao(::RPG::GameCore::ChestMonsterRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChestMonsterRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDCHESTMONSTERLIMAO_OFFSET))(this, a1);
		}

		::System::Void _InitFiveDimInstanceContainsCollectionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__INITFIVEDIMINSTANCECONTAINSCOLLECTIONDATA_OFFSET))(this);
		}

		::System::Void _AddCollectionData(::RPG::GameCore::MazePuzzleOrigamiFDRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiFDRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDCOLLECTIONDATA_OFFSET))(this, a1);
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

		::RPG::Client::NavMap::ICartographer* GetCartographerSubMissionIn(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERSUBMISSIONIN_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ICartographer* GetCartographerEntityIn(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERENTITYIN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::NavMap::ICartographer* _GetCartographerEntityIn(::RPG::Client::NavMap::SubTabData* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__GETCARTOGRAPHERENTITYIN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>* GetCartographerMappingInfoIDIn(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERMAPPINGINFOIDIN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean _HaveMappingInfoID(::RPG::Client::NavMap::ICartographer* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographer*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__HAVEMAPPINGINFOID_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>* GetCartographerMappingInfoIDIn_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETCARTOGRAPHERMAPPINGINFOIDIN_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::NavMap::SubTabData* GetPlayerLocatedSubTab()
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDSUBTAB_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMainTab* GetPlayerLocatedMainTab()
		{
			return ((::RPG::Client::NavMap::IMainTab*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDMAINTAB_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* GetRaidSubTab(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETRAIDSUBTAB_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::NavMap::ISubNavMap* GetPlayerLocatedSubNavMap()
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLAYERLOCATEDSUBNAVMAP_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::ISubNavMap* _GetDeepestPlayerLocatedSubNavMap(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* a1)
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__GETDEEPESTPLAYERLOCATEDSUBNAVMAP_OFFSET))(a1);
		}

		::System::Boolean IsSceneEntered(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_ISSCENEENTERED_OFFSET))(this, a1);
		}

		::System::UInt32 GetSubTabFloorID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETSUBTABFLOORID_OFFSET))(this, a1);
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

		::System::UInt32 GetEntryIDByFloorID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETENTRYIDBYFLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 GetPlaneIDByFloorID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETPLANEIDBYFLOORID_OFFSET))(this, a1);
		}

		::RPG::Client::VerseParam get_PlayerLocatedVerse()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GET_PLAYERLOCATEDVERSE_OFFSET))(this);
		}

		::RPG::Client::NavMap::UniverseData* GetUniverseData(::RPG::Client::VerseParam a1)
		{
			return ((::RPG::Client::NavMap::UniverseData*(*)(::PVOID, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETUNIVERSEDATA_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetSceneMapInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDGETSCENEMAPINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetEnteredSceneScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDGETENTEREDSCENESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnteredSceneChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDENTEREDSCENECHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMasterMainTabUnlock(::System::Collections::Generic::List_1<::RPG::Client::NavMap::IMainTab*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::IMainTab*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMASTERMAINTABUNLOCK_OFFSET))(this, a1);
		}

		::System::Void _OnCmdWorldUnlockScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONCMDWORLDUNLOCKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnMissionSync(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMISSIONSYNC_OFFSET))(this, a1);
		}

		::System::Void _OnMapGroupDefRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONMAPGROUPDEFREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnAddTempShowIcon(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONADDTEMPSHOWICON_OFFSET))(this, a1);
		}

		::System::Void _OnRemoveTempShowIcon(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONREMOVETEMPSHOWICON_OFFSET))(this, a1);
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

		::RPG::Client::NavMap::IMapDataSource* GetMapDataSource(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETMAPDATASOURCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::NavMap::IMapDataSource* GetMapDataSource_1(::RPG::Client::MapDataKey* a1)
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETMAPDATASOURCE_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::IMapDataSource*>*>* GetSyncedMapDataSource(::System::Boolean a1, ::Il2CppArray<::RPG::Client::MapDataKey*>* a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::IMapDataSource*>*>*(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::RPG::Client::MapDataKey*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_GETSYNCEDMAPDATASOURCE_OFFSET))(this, a1, a2);
		}

		::System::Void PrepareMapDataSource(::System::Boolean a1, ::Il2CppArray<::RPG::Client::MapDataKey*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::RPG::Client::MapDataKey*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE_PREPAREMAPDATASOURCE_OFFSET))(this, a1, a2);
		}

		::System::Void _BuildTabConditionChecker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__BUILDTABCONDITIONCHECKER_OFFSET))(this);
		}

		::System::Void _SendGetSceneMapInfo(::System::Boolean a1, ::Il2CppArray<::RPG::Client::MapDataKey*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::RPG::Client::MapDataKey*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__SENDGETSCENEMAPINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsRequestedSyncMapData(::RPG::Client::MapDataKey* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ISREQUESTEDSYNCMAPDATA_OFFSET))(this, a1);
		}

		::System::Void _ClearRaidCartographyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__CLEARRAIDCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Void _OnRaidMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__ONRAIDMAPDATADIRTY_OFFSET))(this);
		}

		::System::Void _TryUpdateRaidData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPMODULE__TRYUPDATERAIDDATA_OFFSET))(this, a1);
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
	};
}
