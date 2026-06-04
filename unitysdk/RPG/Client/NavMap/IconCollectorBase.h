#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissionWaypointInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_656B4378A6148CC6;
namespace RPG::Client { class FindChestData; }
namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class Map; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapMissionData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapOutControlTeamLeaderData; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapTeleportData; }
namespace RPG::Client { class MapTrackMonsterData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class NavMap3DIconData; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_CLEARMAPMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC266410)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_CHESTMAPPINGINFODATALIST_OFFSET UNITYSDK_OFFSET(0xC269B70)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xC2664B0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xC266160)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xC25EE10)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xC260540)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAP3DICONLIST_OFFSET UNITYSDK_OFFSET(0xC269BB0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPMAPPINGINFODATALIST_OFFSET UNITYSDK_OFFSET(0xC269B80)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0xC269B60)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPTELEPORTDATALIST_OFFSET UNITYSDK_OFFSET(0xC269B50)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPTRACKMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xC269C10)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_OUTCONTROLTEAMLEADERICON_OFFSET UNITYSDK_OFFSET(0xC2493A0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xC2699C0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xC265940)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_SUBNAVMAPLINKDATALIST_OFFSET UNITYSDK_OFFSET(0xC269BA0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_TEMPSHOWICONLIST_OFFSET UNITYSDK_OFFSET(0xC269B90)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET__MAPDATA_OFFSET UNITYSDK_OFFSET(0xC25FA70)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_INIT_OFFSET UNITYSDK_OFFSET(0xC25DFD0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKAREADATA_OFFSET UNITYSDK_OFFSET(0xC2648E0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKFLOOR_OFFSET UNITYSDK_OFFSET(0xC265540)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVEMAPPINGINFODATA_OFFSET UNITYSDK_OFFSET(0xC2660F0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVESUBNAVMAPLINKDATA_OFFSET UNITYSDK_OFFSET(0xC266050)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVETELEPORTDATA_OFFSET UNITYSDK_OFFSET(0xC265790)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVETRACKMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xC264780)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKMISSIONHINTDISTANCE_OFFSET UNITYSDK_OFFSET(0xC266AA0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKPROPCANCREATEBYCROSSMAP_OFFSET UNITYSDK_OFFSET(0xC263BF0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTCHESTICON_OFFSET UNITYSDK_OFFSET(0xC262A70)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTENTITYICON_OFFSET UNITYSDK_OFFSET(0xC262220)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTMAINNAVMAPTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0xC266D00)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTMISSIONICON_OFFSET UNITYSDK_OFFSET(0xC262670)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTNOTTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0xC266560)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTSUBNAVMAPTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0xC267290)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTTEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0xC2638F0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0xC266690)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTTRACKMONSTERICON_OFFSET UNITYSDK_OFFSET(0xC2637C0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CREATEMAPMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC266890)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC24E3B0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETCROSSFLOORGUIDEICONMISSIONCTORINFO_OFFSET UNITYSDK_OFFSET(0xC268180)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETMISSIONCTORINFOBYWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0xC25EEC0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETMISSIONCTORINFO_OFFSET UNITYSDK_OFFSET(0xC268820)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETOUTCONTROLTEAMLEADERICON_OFFSET UNITYSDK_OFFSET(0xC266180)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__INSHOWAREAUNLOCKSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0xC264C30)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__INSHOWAREA_OFFSET UNITYSDK_OFFSET(0xC264930)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__ISMAPSECTIONLIGHTEN_OFFSET UNITYSDK_OFFSET(0xC269940)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__ISPAMOCCUPIED_OFFSET UNITYSDK_OFFSET(0xC2659F0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDCHESTDATA_OFFSET UNITYSDK_OFFSET(0xC265DA0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_1_OFFSET UNITYSDK_OFFSET(0xC264250)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_2_OFFSET UNITYSDK_OFFSET(0xC265B60)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xC263F10)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDSUBNAVMAPGUIDEICON_OFFSET UNITYSDK_OFFSET(0xC2679E0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTELEPORT_OFFSET UNITYSDK_OFFSET(0xC263D40)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTEMPICON_OFFSET UNITYSDK_OFFSET(0xC2650B0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTRACKMONSTER_OFFSET UNITYSDK_OFFSET(0xC264680)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETANCHORMISSIONCTORINFO_OFFSET UNITYSDK_OFFSET(0xC268E40)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETCROSSFLOORGUIDEICON_OFFSET UNITYSDK_OFFSET(0xC267F70)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETDISTRICTMISSIONCTORINFO_OFFSET UNITYSDK_OFFSET(0xC269700)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETLEVELOBJECTMISSIONCTORINFO_OFFSET UNITYSDK_OFFSET(0xC269000)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETMAINNAVMAPCROSSFLOORGUIDEICON_OFFSET UNITYSDK_OFFSET(0xC267740)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETSUBNAVMAPGUIDEICON_OFFSET UNITYSDK_OFFSET(0xC267B30)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int IconCollectorBase_TypeDefinitionIndex = 69576;

	class IconCollectorBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MapMappingInfoData*>* _MapMappingInfoDataList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MapMappingInfoData*>* _ChestMappingInfoDataList; // 0x18
		::RPG::Client::NavMap::ICartography* _Cartography; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IBigMapIcon*>* _TempShowIconList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MapTrackMonsterData*>* _MapTrackMonsterDataList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MapMappingInfoData*>* _SubNavMapLinkDataList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MapMissionData*>* _MapMissionDataList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::MapTeleportData*>* _Teleports; // 0x48

		::System::Void _ctor(::RPG::Client::NavMap::ICartography* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_INIT_OFFSET))(this);
		}

		::System::Void _CollectEntityIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTENTITYICON_OFFSET))(this);
		}

		::System::Void _TryAddTrackMonster(::RPG::Client::MapTrackMonsterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTRACKMONSTER_OFFSET))(this, a1);
		}

		::System::Boolean _CheckHaveTrackMonsterData(::RPG::Client::MapTrackMonsterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVETRACKMONSTERDATA_OFFSET))(this, a1);
		}

		::System::Void _TryAddTempIcon(::RPG::Client::IBigMapIcon* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBigMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTEMPICON_OFFSET))(this, a1);
		}

		::System::Void _TryAddTeleport(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTELEPORT_OFFSET))(this, a1);
		}

		::System::Boolean _CheckHaveTeleportData(::RPG::Client::MapTeleportData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapTeleportData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVETELEPORTDATA_OFFSET))(this, a1);
		}

		::System::Void _TryAddMappingInfo(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_OFFSET))(this, a1);
		}

		::System::Boolean _CheckPropCanCreateByCrossMap(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKPROPCANCREATEBYCROSSMAP_OFFSET))(this, a1);
		}

		::System::Void _TryAddChestData(::RPG::Client::MapPropDef* a1, ::RPG::Client::FindChestData* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*, ::RPG::Client::FindChestData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDCHESTDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _TryAddMappingInfo_1(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_1_OFFSET))(this, a1);
		}

		::System::Void _TryAddMappingInfo_2(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_2_OFFSET))(this, a1);
		}

		::System::Boolean _CheckHaveSubNavMapLinkData(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVESUBNAVMAPLINKDATA_OFFSET))(this, a1);
		}

		::System::Boolean _CheckHaveMappingInfoData(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVEMAPPINGINFODATA_OFFSET))(this, a1);
		}

		::System::Boolean _IsPamOccupied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__ISPAMOCCUPIED_OFFSET))(this);
		}

		::System::Void _CollectChestIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTCHESTICON_OFFSET))(this);
		}

		::RPG::Client::MapOutControlTeamLeaderData* _GetOutControlTeamLeaderIcon()
		{
			return ((::RPG::Client::MapOutControlTeamLeaderData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETOUTCONTROLTEAMLEADERICON_OFFSET))(this);
		}

		::System::Void _CollectTrackMonsterIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTTRACKMONSTERICON_OFFSET))(this);
		}

		::System::Void _CollectTempShowIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTTEMPSHOWICON_OFFSET))(this);
		}

		::System::Void _CollectMissionIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTMISSIONICON_OFFSET))(this);
		}

		::System::Void _CollectNotTrackingMissionIcon(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTNOTTRACKINGMISSIONICON_OFFSET))(this, a1);
		}

		::System::Void _CollectTrackingMissionIcon(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTTRACKINGMISSIONICON_OFFSET))(this, a1);
		}

		::System::Void _CollectMainNavMapTrackingMissionIcon(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTMAINNAVMAPTRACKINGMISSIONICON_OFFSET))(this, a1);
		}

		::System::Void _CollectSubNavMapTrackingMissionIcon(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTSUBNAVMAPTRACKINGMISSIONICON_OFFSET))(this, a1);
		}

		::System::Void _TryAddSubNavMapGuideIcon(::RPG::Client::SubMissionData* a1, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDSUBNAVMAPGUIDEICON_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapMissionData* _TryGetSubNavMapGuideIcon(::RPG::Client::SubMissionData* a1)
		{
			return ((::RPG::Client::MapMissionData*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETSUBNAVMAPGUIDEICON_OFFSET))(this, a1);
		}

		::RPG::Client::MapMissionData* _TryGetMainNavMapCrossFloorGuideIcon(::RPG::Client::SubMissionData* a1, ::RPG::GameCore::SubMissionInfoConfig* a2)
		{
			return ((::RPG::Client::MapMissionData*(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETMAINNAVMAPCROSSFLOORGUIDEICON_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MapMissionData* _TryGetCrossFloorGuideIcon(::RPG::Client::SubMissionData* a1)
		{
			return ((::RPG::Client::MapMissionData*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETCROSSFLOORGUIDEICON_OFFSET))(this, a1);
		}

		::System::Void ClearMapMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_CLEARMAPMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean _GetMissionCtorInfoByWaypointInfo(::RPG::Client::MissionWaypointInfo a1, ::RPG::Client::Map* a2, ::Class_1_656B4378A6148CC6*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionWaypointInfo, ::RPG::Client::Map*, ::Class_1_656B4378A6148CC6*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETMISSIONCTORINFOBYWAYPOINTINFO_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MapMissionData* _CreateMapMissionData(::RPG::Client::SubMissionData* a1)
		{
			return ((::RPG::Client::MapMissionData*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CREATEMAPMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _GetMissionCtorInfo(::Class_1_656B4378A6148CC6*& a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_656B4378A6148CC6*&, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETMISSIONCTORINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _TryGetLevelObjectMissionCtorInfo(::Class_1_656B4378A6148CC6*& a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_656B4378A6148CC6*&, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETLEVELOBJECTMISSIONCTORINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetAnchorMissionCtorInfo(::Class_1_656B4378A6148CC6*& a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_656B4378A6148CC6*&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETANCHORMISSIONCTORINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _TryGetDistrictMissionCtorInfo(::Class_1_656B4378A6148CC6*& a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_656B4378A6148CC6*&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETDISTRICTMISSIONCTORINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GetCrossFloorGuideIconMissionCtorInfo(::Class_1_656B4378A6148CC6*& a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_656B4378A6148CC6*&, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETCROSSFLOORGUIDEICONMISSIONCTORINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckAreaData(::RPG::Client::MapIconAreaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapIconAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKAREADATA_OFFSET))(this, a1);
		}

		::System::Boolean _InShowArea(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__INSHOWAREA_OFFSET))(this, a1);
		}

		::System::Boolean _CheckFloor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKFLOOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _CheckMissionHintDistance(::RPG::Client::MapMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKMISSIONHINTDISTANCE_OFFSET))(this, a1);
		}

		::System::Boolean _InShowAreaUnlockSubNavMap(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__INSHOWAREAUNLOCKSUBNAVMAP_OFFSET))(this, a1);
		}

		::System::Boolean _IsMapSectionLighten(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__ISMAPSECTIONLIGHTEN_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_PLANEID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_ENTRYID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTeleportData*>* get_MapTeleportDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTeleportData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPTELEPORTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMissionData*>* get_MapMissionDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPMISSIONDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* get_ChestMappingInfoDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_CHESTMAPPINGINFODATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* get_MapMappingInfoDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPMAPPINGINFODATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IBigMapIcon*>* get_TempShowIconList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IBigMapIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_TEMPSHOWICONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* get_SubNavMapLinkDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_SUBNAVMAPLINKDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::NavMap3DIconData*>* get_Map3DIconList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::NavMap3DIconData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAP3DICONLIST_OFFSET))(this);
		}

		::RPG::Client::MapOutControlTeamLeaderData* get_OutControlTeamLeaderIcon()
		{
			return ((::RPG::Client::MapOutControlTeamLeaderData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_OUTCONTROLTEAMLEADERICON_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTrackMonsterData*>* get_MapTrackMonsterDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTrackMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPTRACKMONSTERDATALIST_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* get__MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET__MAPDATA_OFFSET))(this);
		}
	};
}
