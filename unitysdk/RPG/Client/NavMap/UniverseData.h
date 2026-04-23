#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1070;
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

#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_CLEARCARTOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0xAB638E0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_CREATERAIDSUBTAB_OFFSET UNITYSDK_OFFSET(0xAB67130)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAB68750)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETMAINTAB_OFFSET UNITYSDK_OFFSET(0xAB6BB20)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETONLINEPLAYROOMSUBTAB_OFFSET UNITYSDK_OFFSET(0xAB67010)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATABYFLOORID_OFFSET UNITYSDK_OFFSET(0xAB67AD0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATA_1_OFFSET UNITYSDK_OFFSET(0xAB73C40)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0xAB73B60)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTABBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0xAB73A90)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTABBYFLOORID_OFFSET UNITYSDK_OFFSET(0xAB5A7D0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTAB_OFFSET UNITYSDK_OFFSET(0xAB6A210)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDDATA_OFFSET UNITYSDK_OFFSET(0xAB73E50)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDSHOWTABCOUNT_OFFSET UNITYSDK_OFFSET(0xAB741D0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0xAB74840)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xAB72D00)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xAB40920)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_SHOWWORLDS_OFFSET UNITYSDK_OFFSET(0xAB76C40)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xAB72CC0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xAB76C20)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISFLOORUNLOCK_OFFSET UNITYSDK_OFFSET(0xAB4F4C0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISPLAYERINWORLD_OFFSET UNITYSDK_OFFSET(0xAB74410)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_ONMAPDATADIRTY_OFFSET UNITYSDK_OFFSET(0xAB64640)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATEONLINEPLAYROOMSUBTAB_OFFSET UNITYSDK_OFFSET(0xAB767B0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATERAIDSUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0xAB74DA0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBNAVMAPDATAFIVEDIM_OFFSET UNITYSDK_OFFSET(0xAB74930)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0xAB76880)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBTAB_OFFSET UNITYSDK_OFFSET(0xAB75EB0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB732F0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__EXISTFLOOR_OFFSET UNITYSDK_OFFSET(0xAB74E70)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITVERSECHECKER_OFFSET UNITYSDK_OFFSET(0xAB73530)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITWORLDS_OFFSET UNITYSDK_OFFSET(0xAB736C0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITWORLD_OFFSET UNITYSDK_OFFSET(0xAB75000)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int UniverseData_TypeDefinitionIndex = 68869;

	class UniverseData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::WorldData*>* Worlds; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::IMainTab*>* _MainTabDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>*>* _FloorID2SubNavMapDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::ISubNavMap*>* _SubNavMapDatas; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::SubTabData*>* _SubTabDatas; // 0x30
		::Class_0_16E4307DCC419505_1070* _FloorJudgeStrategy; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::SubTabData*>* _OnlinePlayRoomSubTabDatas; // 0x40
		::RPG::Client::VerseParam _VerseParam; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::UniverseData* Create(::RPG::Client::VerseParam verseParam)
		{
			return ((::RPG::Client::NavMap::UniverseData*(*)(::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_CREATE_OFFSET))(verseParam);
		}

		::System::Boolean IsFloorUnlock(::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISFLOORUNLOCK_OFFSET))(this, floorID);
		}

		::System::Void ClearCartographyData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_CLEARCARTOGRAPHYDATA_OFFSET))(this);
		}

		::System::Void OnMapDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_ONMAPDATADIRTY_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByFloorID(::System::UInt32 floorID)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTABBYFLOORID_OFFSET))(this, floorID);
		}

		::RPG::Client::NavMap::IMainTab* GetMainTab(::System::UInt32 mainTabID)
		{
			return ((::RPG::Client::NavMap::IMainTab*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETMAINTAB_OFFSET))(this, mainTabID);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTab(::System::UInt32 floorID)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTAB_OFFSET))(this, floorID);
		}

		::RPG::Client::NavMap::SubTabData* GetOnlinePlayRoomSubTab(::System::UInt32 floorID)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETONLINEPLAYROOMSUBTAB_OFFSET))(this, floorID);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByEntranceID(::System::UInt32 entranceID)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBTABBYENTRANCEID_OFFSET))(this, entranceID);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>* GetSubNavMapDataByFloorID(::System::UInt32 floorID)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ISubNavMap*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATABYFLOORID_OFFSET))(this, floorID);
		}

		::RPG::Client::NavMap::ISubNavMap* GetSubNavMapData(::System::UInt32 subNavMapID)
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATA_OFFSET))(this, subNavMapID);
		}

		::RPG::Client::NavMap::SubNavMapData* GetSubNavMapData_1(::System::UInt32 floorID, ::System::Int32 areaID)
		{
			return ((::RPG::Client::NavMap::SubNavMapData*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETSUBNAVMAPDATA_1_OFFSET))(this, floorID, areaID);
		}

		::RPG::Client::NavMap::WorldData* GetWorldData(::System::UInt32 worldID)
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDDATA_OFFSET))(this, worldID);
		}

		::System::Int32 GetWorldShowTabCount(::System::UInt32 worldID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDSHOWTABCOUNT_OFFSET))(this, worldID);
		}

		::System::Boolean IsPlayerInWorld(::System::UInt32 worldID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_ISPLAYERINWORLD_OFFSET))(this, worldID);
		}

		::RPG::Client::SubMissionData* GetWorldTrackingSubMissionForShow(::System::UInt32 worldID)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_GETWORLDTRACKINGSUBMISSIONFORSHOW_OFFSET))(this, worldID);
		}

		::RPG::Client::NavMap::SubTabData* CreateRaidSubTab(::System::UInt32 worldID, ::System::UInt32 floorID, ::System::UInt32 entranceID)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_CREATERAIDSUBTAB_OFFSET))(this, worldID, floorID, entranceID);
		}

		::System::Boolean _ExistFloor(::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__EXISTFLOOR_OFFSET))(this, floorID);
		}

		::System::Void _InitVerseChecker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITVERSECHECKER_OFFSET))(this);
		}

		::System::Void _InitWorlds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITWORLDS_OFFSET))(this);
		}

		::System::Void _InitWorld(::RPG::Client::NavMap::WorldData* world)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__INITWORLD_OFFSET))(this, world);
		}

		::RPG::Client::NavMap::SubTabData* _CreateSubTab(::RPG::GameCore::NavMapSubTabRow* subTabRow, ::RPG::Client::NavMap::IMainTab* tab)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::RPG::GameCore::NavMapSubTabRow*, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBTAB_OFFSET))(this, subTabRow, tab);
		}

		::RPG::Client::NavMap::SubNavMapData* _CreateSubNavMapData(::System::UInt32 id, ::System::UInt32 floorID, ::System::UInt32 areaID, ::RPG::GameCore::MinimapAreaType areaType, ::System::UInt32 defaultLayer, ::System::UInt32 nearbyTeleportMappingInfoID, ::RPG::Client::NavMap::SubTabData* parent)
		{
			return ((::RPG::Client::NavMap::SubNavMapData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MinimapAreaType, ::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBNAVMAPDATA_OFFSET))(this, id, floorID, areaID, areaType, defaultLayer, nearbyTeleportMappingInfoID, parent);
		}

		::RPG::Client::NavMap::FiveDim::SubNavMapDataFiveDim* _CreateSubNavMapDataFiveDim(::System::UInt32 id, ::System::UInt32 floorID, ::System::UInt32 nearbyTeleportMappingInfoID, ::RPG::Client::NavMap::SubTabData* parent, ::Il2CppArray<::RPG::GameCore::LevelEntityRef*>* containerEntityRefs)
		{
			return ((::RPG::Client::NavMap::FiveDim::SubNavMapDataFiveDim*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::SubTabData*, ::Il2CppArray<::RPG::GameCore::LevelEntityRef*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATESUBNAVMAPDATAFIVEDIM_OFFSET))(this, id, floorID, nearbyTeleportMappingInfoID, parent, containerEntityRefs);
		}

		::RPG::Client::NavMap::SubNavMapData* _CreateRaidSubNavMapData(::System::UInt32 id, ::System::UInt32 floorID, ::System::UInt32 entryID, ::System::UInt32 areaID, ::RPG::GameCore::MinimapAreaType areaType, ::System::UInt32 defaultLayer, ::System::UInt32 nearbyTeleportMappingInfoID, ::RPG::Client::NavMap::SubTabData* parent)
		{
			return ((::RPG::Client::NavMap::SubNavMapData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MinimapAreaType, ::System::UInt32, ::System::UInt32, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATERAIDSUBNAVMAPDATA_OFFSET))(this, id, floorID, entryID, areaID, areaType, defaultLayer, nearbyTeleportMappingInfoID, parent);
		}

		::RPG::Client::NavMap::SubTabData* _CreateOnlinePlayRoomSubTab(::RPG::GameCore::NavMapSubTabRow* subTabRow, ::RPG::Client::NavMap::IMainTab* tab)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::RPG::GameCore::NavMapSubTabRow*, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA__CREATEONLINEPLAYROOMSUBTAB_OFFSET))(this, subTabRow, tab);
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
