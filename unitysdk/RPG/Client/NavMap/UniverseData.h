#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1120;
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::Client::NavMap::FiveDim { class SubNavMapDataFiveDim; }
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class NavMapSubTabRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_CLEARCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xC282430)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_CREATERAIDSUBTAB_OFFSET UNITYSDK_OFFSET(0xC283DE0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC2735A0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETMAINTAB_OFFSET UNITYSDK_OFFSET(0xC276B50)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETONLINEPLAYROOMSUBTAB_OFFSET UNITYSDK_OFFSET(0xC2752C0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATABYFLOORID_OFFSET UNITYSDK_OFFSET(0xC275350)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATA_1_OFFSET UNITYSDK_OFFSET(0xC283090)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0xC282FE0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTABBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC282F10)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTABBYFLOORID_OFFSET UNITYSDK_OFFSET(0xC27C070)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTAB_OFFSET UNITYSDK_OFFSET(0xC275150)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDDATA_OFFSET UNITYSDK_OFFSET(0xC2832B0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDSHOWTABCOUNT_OFFSET UNITYSDK_OFFSET(0xC283640)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0xC283CF0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xC2816E0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xC27E0D0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_SHOWWORLDS_OFFSET UNITYSDK_OFFSET(0xC286D00)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xC2816A0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xC286CE0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISFLOORUNLOCK_OFFSET UNITYSDK_OFFSET(0xC27F6E0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISPLAYERINWORLD_OFFSET UNITYSDK_OFFSET(0xC2838C0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xC2829D0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATEONLINEPLAYROOMSUBTAB_OFFSET UNITYSDK_OFFSET(0xC286810)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATERAIDSUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0xC284CF0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBNAVMAPDATAFIVEDIM_OFFSET UNITYSDK_OFFSET(0xC284820)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0xC2868E0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBTAB_OFFSET UNITYSDK_OFFSET(0xC285E60)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC281C30)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__EXISTFLOOR_OFFSET UNITYSDK_OFFSET(0xC284DC0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITVERSECHECKER_OFFSET UNITYSDK_OFFSET(0xC281E70)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITWORLDS_OFFSET UNITYSDK_OFFSET(0xC282000)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITWORLD_OFFSET UNITYSDK_OFFSET(0xC284F40)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int UniverseData_TypeDefinitionIndex = 69681;

	class UniverseData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::SubTabData*>* _OnlinePlayRoomSubTabDatas; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::WorldData*>* Worlds; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>*>* _FloorID2SubNavMapDatas; // 0x20
		::Class_0_16E4307DCC419505_1120* _FloorJudgeStrategy; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::SubTabData*>* _SubTabDatas; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::ISubNavMap*>* _SubNavMapDatas; // 0x38
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

		::RPG::Client::NavMap::SubNavMapData* _CreateSubNavMapData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::MinimapAreaType a4, ::System::UInt32 a5, ::System::UInt32 a6, ::RPG::Client::NavMap::SubTabData* a7)
		{
			return ((::RPG::Client::NavMap::SubNavMapData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MinimapAreaType, ::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBNAVMAPDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::Client::NavMap::FiveDim::SubNavMapDataFiveDim* _CreateSubNavMapDataFiveDim(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::NavMap::SubTabData* a4, ::Il2CppArray<::RPG::GameCore::LevelEntityRef*>* a5)
		{
			return ((::RPG::Client::NavMap::FiveDim::SubNavMapDataFiveDim*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::SubTabData*, ::Il2CppArray<::RPG::GameCore::LevelEntityRef*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBNAVMAPDATAFIVEDIM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::NavMap::SubNavMapData* _CreateRaidSubNavMapData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::GameCore::MinimapAreaType a5, ::System::UInt32 a6, ::System::UInt32 a7, ::RPG::Client::NavMap::SubTabData* a8)
		{
			return ((::RPG::Client::NavMap::SubNavMapData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MinimapAreaType, ::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATERAIDSUBNAVMAPDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
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
