#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/UniverseData_SubNavMapBuildMode.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1225;
class Class_0_16E4307DCC419505_1226;
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class UniverseData_SameFloorSubNavMapBuildNode; }
namespace RPG::Client::NavMap { class UniverseData_SubNavMapBuildContext; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::GameCore { class LevelFloorBakedSubmapInfo; }
namespace RPG::GameCore { class NavMapSubTabRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_CLEARCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0x18255410)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_CREATERAIDSUBTAB_OFFSET UNITYSDK_OFFSET(0x18259D60)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1825B150)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETMAINTAB_OFFSET UNITYSDK_OFFSET(0x1825F260)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETONLINEPLAYROOMSUBTAB_OFFSET UNITYSDK_OFFSET(0x18259C70)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATABYFLOORID_OFFSET UNITYSDK_OFFSET(0x1825A340)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATA_1_OFFSET UNITYSDK_OFFSET(0x1826A830)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0x1826A780)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTABBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0x1826A6B0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTABBYFLOORID_OFFSET UNITYSDK_OFFSET(0x182499E0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTAB_OFFSET UNITYSDK_OFFSET(0x1825D3E0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDDATA_OFFSET UNITYSDK_OFFSET(0x1826AB10)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDSHOWTABCOUNT_OFFSET UNITYSDK_OFFSET(0x1826B040)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0x1826B710)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x18269580)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0x18265760)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_SHOWWORLDS_OFFSET UNITYSDK_OFFSET(0x1826F660)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x18269540)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0x1826BE50)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISFLOORUNLOCK_OFFSET UNITYSDK_OFFSET(0x182670A0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISPLAYERINWORLD_OFFSET UNITYSDK_OFFSET(0x1826B300)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISSUBTABSHOW_OFFSET UNITYSDK_OFFSET(0x18269100)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0x18256740)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__APPLYSUBNAVMAPHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1826E4F0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__BUILDSUBNAVMAPHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1826B800)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATEONLINEPLAYROOMSUBTAB_OFFSET UNITYSDK_OFFSET(0x1826D720)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATEOTHERFLOORSUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0x1826E110)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESAMEFLOORSUBNAVMAPINSTANCE_OFFSET UNITYSDK_OFFSET(0x1826EA80)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESAMEFLOORSUBNAVMAPS_OFFSET UNITYSDK_OFFSET(0x1826E050)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESAMEFLOORSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0x1826E800)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBTAB_OFFSET UNITYSDK_OFFSET(0x1826D5F0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18269B00)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__EXISTFLOOR_OFFSET UNITYSDK_OFFSET(0x1826BD10)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITVERSECHECKER_OFFSET UNITYSDK_OFFSET(0x18269D40)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITWORLDS_OFFSET UNITYSDK_OFFSET(0x1826A060)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITWORLD_OFFSET UNITYSDK_OFFSET(0x1826BF80)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__REGISTERSUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0x1826EF30)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int UniverseData_TypeDefinitionIndex = 74506;

	class UniverseData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>*>* _FloorID2SubNavMapDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::SubTabData*>* _OnlinePlayRoomSubTabDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::ISubNavMap*>* _SubNavMapDatas; // 0x20
		::Class_0_16E4307DCC419505_1226* _FloorJudgeStrategy; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::WorldData*>* Worlds; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::SubTabData*>* _SubTabDatas; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::IMainTab*>* _MainTabDatas; // 0x40
		::RPG::Client::VerseParam _VerseParam; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::UniverseData* Create(::RPG::Client::VerseParam a1)
		{
			return ((::RPG::Client::NavMap::UniverseData*(*)(::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsFloorUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISFLOORUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsSubTabShow(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISSUBTABSHOW_OFFSET))(this, a1);
		}

		::System::Void ClearCartographyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_CLEARCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Void OnMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_ONMAPDATADIRTY_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByFloorID(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTABBYFLOORID_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::IMainTab* GetMainTab(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::IMainTab*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETMAINTAB_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTab(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTAB_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* GetOnlinePlayRoomSubTab(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETONLINEPLAYROOMSUBTAB_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByEntranceID(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTABBYENTRANCEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* GetSubNavMapDataByFloorID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATABYFLOORID_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ISubNavMap* GetSubNavMapData(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubNavMapData* GetSubNavMapData_1(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::NavMap::SubNavMapData*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATA_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::NavMap::WorldData* GetWorldData(::System::UInt32 a1)
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDDATA_OFFSET))(this, a1);
		}

		::System::Int32 GetWorldShowTabCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDSHOWTABCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean IsPlayerInWorld(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISPLAYERINWORLD_OFFSET))(this, a1);
		}

		::RPG::Client::SubMissionData* GetWorldTrackingSubMissionForShow(::System::UInt32 a1)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDTRACKINGSUBMISSIONFORSHOW_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* CreateRaidSubTab(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_CREATERAIDSUBTAB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _ExistFloor(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__EXISTFLOOR_OFFSET))(this, a1);
		}

		::System::Void _InitVerseChecker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITVERSECHECKER_OFFSET))(this);
		}

		::System::Void _InitWorlds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITWORLDS_OFFSET))(this);
		}

		::System::Void _InitWorld(::RPG::Client::NavMap::WorldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITWORLD_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* _CreateSubTab(::RPG::GameCore::NavMapSubTabRow* a1, ::RPG::Client::NavMap::IMainTab* a2)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::RPG::GameCore::NavMapSubTabRow*, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBTAB_OFFSET))(this, a1, a2);
		}

		::System::Void _BuildSubNavMapHierarchy(::RPG::Client::NavMap::SubTabData* a1, ::RPG::Client::NavMap::UniverseData_SubNavMapBuildMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*, ::RPG::Client::NavMap::UniverseData_SubNavMapBuildMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__BUILDSUBNAVMAPHIERARCHY_OFFSET))(this, a1, a2);
		}

		::System::Void _CreateSameFloorSubNavMaps(::RPG::Client::NavMap::UniverseData_SubNavMapBuildContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::UniverseData_SubNavMapBuildContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESAMEFLOORSUBNAVMAPS_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ISubNavMap* _CreateSameFloorSubNavMap(::RPG::Client::NavMap::UniverseData_SameFloorSubNavMapBuildNode* a1, ::RPG::Client::NavMap::UniverseData_SubNavMapBuildContext* a2)
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID, ::RPG::Client::NavMap::UniverseData_SameFloorSubNavMapBuildNode*, ::RPG::Client::NavMap::UniverseData_SubNavMapBuildContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESAMEFLOORSUBNAVMAP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::NavMap::ISubNavMap* _CreateSameFloorSubNavMapInstance(::RPG::GameCore::LevelFloorBakedSubmapInfo* a1, ::Class_0_16E4307DCC419505_1225* a2, ::RPG::Client::NavMap::UniverseData_SubNavMapBuildContext* a3)
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedSubmapInfo*, ::Class_0_16E4307DCC419505_1225*, ::RPG::Client::NavMap::UniverseData_SubNavMapBuildContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESAMEFLOORSUBNAVMAPINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateOtherFloorSubNavMaps(::RPG::Client::NavMap::UniverseData_SubNavMapBuildContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::UniverseData_SubNavMapBuildContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATEOTHERFLOORSUBNAVMAPS_OFFSET))(this, a1);
		}

		static ::System::Void _ApplySubNavMapHierarchy(::RPG::Client::NavMap::UniverseData_SubNavMapBuildContext* a1)
		{
			return ((::System::Void(*)(::RPG::Client::NavMap::UniverseData_SubNavMapBuildContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__APPLYSUBNAVMAPHIERARCHY_OFFSET))(a1);
		}

		::System::Boolean _RegisterSubNavMapData(::RPG::Client::NavMap::ISubNavMap* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ISubNavMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__REGISTERSUBNAVMAPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::SubTabData* _CreateOnlinePlayRoomSubTab(::RPG::GameCore::NavMapSubTabRow* a1, ::RPG::Client::NavMap::IMainTab* a2)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::RPG::GameCore::NavMapSubTabRow*, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATEONLINEPLAYROOMSUBTAB_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_ISEARLYACCESS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::WorldData*>* get_ShowWorlds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::WorldData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_SHOWWORLDS_OFFSET))(this);
		}
	};
}
