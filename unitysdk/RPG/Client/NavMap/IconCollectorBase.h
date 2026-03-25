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

#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_CLEARMAPMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9E0EEC0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_CHESTMAPPINGINFODATALIST_OFFSET UNITYSDK_OFFSET(0x9E12760)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9E08C40)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x9E12550)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0x9E07F30)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9E09690)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAP3DICONLIST_OFFSET UNITYSDK_OFFSET(0x9E127A0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPMAPPINGINFODATALIST_OFFSET UNITYSDK_OFFSET(0x9E12770)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9E12750)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPTELEPORTDATALIST_OFFSET UNITYSDK_OFFSET(0x9E12740)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_MAPTRACKMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0x9E12810)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_OUTCONTROLTEAMLEADERICON_OFFSET UNITYSDK_OFFSET(0x9E12800)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0x9E12240)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9E08B90)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_SUBNAVMAPLINKDATALIST_OFFSET UNITYSDK_OFFSET(0x9E12790)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET_TEMPSHOWICONLIST_OFFSET UNITYSDK_OFFSET(0x9E12780)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_GET__MAPDATA_OFFSET UNITYSDK_OFFSET(0x9E12570)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_INIT_OFFSET UNITYSDK_OFFSET(0x9E07090)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKAREADATA_OFFSET UNITYSDK_OFFSET(0x9E0D7C0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKFLOOR_OFFSET UNITYSDK_OFFSET(0x9E0E290)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVEMAPPINGINFODATA_OFFSET UNITYSDK_OFFSET(0x9E0EBC0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVESUBNAVMAPLINKDATA_OFFSET UNITYSDK_OFFSET(0x9E0EB20)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVETELEPORTDATA_OFFSET UNITYSDK_OFFSET(0x9E0E4E0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVETRACKMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x9E0D660)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKMISSIONHINTDISTANCE_OFFSET UNITYSDK_OFFSET(0x9E0F510)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKPROPCANCREATEBYCROSSMAP_OFFSET UNITYSDK_OFFSET(0x9E0C830)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTCHESTICON_OFFSET UNITYSDK_OFFSET(0x9E0B540)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTENTITYICON_OFFSET UNITYSDK_OFFSET(0x9E0AD30)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTMAINNAVMAPTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0x9E0F770)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTMISSIONICON_OFFSET UNITYSDK_OFFSET(0x9E0B140)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTNOTTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0x9E0EF30)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTSUBNAVMAPTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0x9E0FC60)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTTEMPSHOWICON_OFFSET UNITYSDK_OFFSET(0x9E0C640)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0x9E0EFE0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTTRACKMONSTERICON_OFFSET UNITYSDK_OFFSET(0x9E0C540)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CREATEMAPMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9E0F1D0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF7BE0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETCROSSFLOORGUIDEICONMISSIONCTORINFO_OFFSET UNITYSDK_OFFSET(0x9E10C60)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETMISSIONCTORINFOBYWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0x9E07FE0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETMISSIONCTORINFO_OFFSET UNITYSDK_OFFSET(0x9E11320)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETOUTCONTROLTEAMLEADERICON_OFFSET UNITYSDK_OFFSET(0x9E0EC30)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__INSHOWAREAUNLOCKSUBNAVMAP_OFFSET UNITYSDK_OFFSET(0x9E0DAC0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__INSHOWAREA_OFFSET UNITYSDK_OFFSET(0x9E0D810)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__ISMAPSECTIONLIGHTEN_OFFSET UNITYSDK_OFFSET(0x9E121C0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__ISPAMOCCUPIED_OFFSET UNITYSDK_OFFSET(0x9E0E590)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDCHESTDATA_OFFSET UNITYSDK_OFFSET(0x9E0E820)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_1_OFFSET UNITYSDK_OFFSET(0x9E0D070)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_2_OFFSET UNITYSDK_OFFSET(0x9E0E700)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x9E0CC20)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDSUBNAVMAPGUIDEICON_OFFSET UNITYSDK_OFFSET(0x9E10330)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTELEPORT_OFFSET UNITYSDK_OFFSET(0x9E0C980)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTEMPICON_OFFSET UNITYSDK_OFFSET(0x9E0DF20)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTRACKMONSTER_OFFSET UNITYSDK_OFFSET(0x9E0D5C0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETANCHORMISSIONCTORINFO_OFFSET UNITYSDK_OFFSET(0x9E11930)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETCROSSFLOORGUIDEICON_OFFSET UNITYSDK_OFFSET(0x9E10920)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETDISTRICTMISSIONCTORINFO_OFFSET UNITYSDK_OFFSET(0x9E12100)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETLEVELOBJECTMISSIONCTORINFO_OFFSET UNITYSDK_OFFSET(0x9E11AF0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETMAINNAVMAPCROSSFLOORGUIDEICON_OFFSET UNITYSDK_OFFSET(0x9E100F0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETSUBNAVMAPGUIDEICON_OFFSET UNITYSDK_OFFSET(0x9E10400)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int IconCollectorBase_TypeDefinitionIndex = 61256;

	class IconCollectorBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IBigMapIcon*>* _TempShowIconList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MapMappingInfoData*>* _ChestMappingInfoDataList; // 0x18
		::RPG::Client::NavMap::ICartography* _Cartography; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MapTrackMonsterData*>* _MapTrackMonsterDataList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MapMappingInfoData*>* _MapMappingInfoDataList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MapMappingInfoData*>* _SubNavMapLinkDataList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MapTeleportData*>* _Teleports; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::MapMissionData*>* _MapMissionDataList; // 0x48

		::System::Void _ctor(::RPG::Client::NavMap::ICartography* cartography)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CTOR_OFFSET))(this, cartography);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_INIT_OFFSET))(this);
		}

		::System::Void _CollectEntityIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTENTITYICON_OFFSET))(this);
		}

		::System::Void _TryAddTrackMonster(::RPG::Client::MapTrackMonsterData* mapTrackMonsterData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTRACKMONSTER_OFFSET))(this, mapTrackMonsterData);
		}

		::System::Boolean _CheckHaveTrackMonsterData(::RPG::Client::MapTrackMonsterData* mapTrackMonsterData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVETRACKMONSTERDATA_OFFSET))(this, mapTrackMonsterData);
		}

		::System::Void _TryAddTempIcon(::RPG::Client::IBigMapIcon* bigMapIcon)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBigMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTEMPICON_OFFSET))(this, bigMapIcon);
		}

		::System::Void _TryAddTeleport(::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDTELEPORT_OFFSET))(this, mapPropDef);
		}

		::System::Boolean _CheckHaveTeleportData(::RPG::Client::MapTeleportData* teleportData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapTeleportData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVETELEPORTDATA_OFFSET))(this, teleportData);
		}

		::System::Void _TryAddMappingInfo(::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_OFFSET))(this, mapPropDef);
		}

		::System::Boolean _CheckPropCanCreateByCrossMap(::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKPROPCANCREATEBYCROSSMAP_OFFSET))(this, mapPropDef);
		}

		::System::Void _TryAddChestData(::RPG::Client::MapPropDef* mapPropDef, ::RPG::Client::FindChestData* findChestData, ::System::UInt32 mappingInfoID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*, ::RPG::Client::FindChestData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDCHESTDATA_OFFSET))(this, mapPropDef, findChestData, mappingInfoID);
		}

		::System::Void _TryAddMappingInfo_1(::RPG::Client::MapNpcDef* mapNpcDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_1_OFFSET))(this, mapNpcDef);
		}

		::System::Void _TryAddMappingInfo_2(::RPG::Client::MapMappingInfoData* mapMappingInfoData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDMAPPINGINFO_2_OFFSET))(this, mapMappingInfoData);
		}

		::System::Boolean _CheckHaveSubNavMapLinkData(::RPG::Client::MapMappingInfoData* subNavMapLinkData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVESUBNAVMAPLINKDATA_OFFSET))(this, subNavMapLinkData);
		}

		::System::Boolean _CheckHaveMappingInfoData(::RPG::Client::MapMappingInfoData* mappingInfoData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKHAVEMAPPINGINFODATA_OFFSET))(this, mappingInfoData);
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

		::System::Void _CollectNotTrackingMissionIcon(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTNOTTRACKINGMISSIONICON_OFFSET))(this, subMissionData);
		}

		::System::Void _CollectTrackingMissionIcon(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* subMissionDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTTRACKINGMISSIONICON_OFFSET))(this, subMissionDatas);
		}

		::System::Void _CollectMainNavMapTrackingMissionIcon(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* subMissionDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTMAINNAVMAPTRACKINGMISSIONICON_OFFSET))(this, subMissionDatas);
		}

		::System::Void _CollectSubNavMapTrackingMissionIcon(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* subMissionDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__COLLECTSUBNAVMAPTRACKINGMISSIONICON_OFFSET))(this, subMissionDatas);
		}

		::System::Void _TryAddSubNavMapGuideIcon(::RPG::Client::SubMissionData* subMissionData, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* addedGuideIcon)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*, ::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYADDSUBNAVMAPGUIDEICON_OFFSET))(this, subMissionData, addedGuideIcon);
		}

		::RPG::Client::MapMissionData* _TryGetSubNavMapGuideIcon(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::RPG::Client::MapMissionData*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETSUBNAVMAPGUIDEICON_OFFSET))(this, subMissionData);
		}

		::RPG::Client::MapMissionData* _TryGetMainNavMapCrossFloorGuideIcon(::RPG::Client::SubMissionData* subMissionData, ::RPG::GameCore::SubMissionInfoConfig* subMissionInfoConfig)
		{
			return ((::RPG::Client::MapMissionData*(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETMAINNAVMAPCROSSFLOORGUIDEICON_OFFSET))(this, subMissionData, subMissionInfoConfig);
		}

		::RPG::Client::MapMissionData* _TryGetCrossFloorGuideIcon(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::RPG::Client::MapMissionData*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETCROSSFLOORGUIDEICON_OFFSET))(this, subMissionData);
		}

		::System::Void ClearMapMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE_CLEARMAPMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean _GetMissionCtorInfoByWaypointInfo(::RPG::Client::MissionWaypointInfo waypointInfo, ::RPG::Client::Map* advMap, ::Class_1_656B4378A6148CC6*& mapMissionCtorInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionWaypointInfo, ::RPG::Client::Map*, ::Class_1_656B4378A6148CC6*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETMISSIONCTORINFOBYWAYPOINTINFO_OFFSET))(this, waypointInfo, advMap, mapMissionCtorInfo);
		}

		::RPG::Client::MapMissionData* _CreateMapMissionData(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::RPG::Client::MapMissionData*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CREATEMAPMISSIONDATA_OFFSET))(this, subMissionData);
		}

		::System::Void _GetMissionCtorInfo(::Class_1_656B4378A6148CC6*& mapMissionCtorInfo, ::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_656B4378A6148CC6*&, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETMISSIONCTORINFO_OFFSET))(this, mapMissionCtorInfo, subMissionData);
		}

		::System::Void _TryGetLevelObjectMissionCtorInfo(::Class_1_656B4378A6148CC6*& mapMissionCtorInfo, ::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_656B4378A6148CC6*&, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETLEVELOBJECTMISSIONCTORINFO_OFFSET))(this, mapMissionCtorInfo, subMissionData);
		}

		::System::Boolean _TryGetAnchorMissionCtorInfo(::Class_1_656B4378A6148CC6*& mapMissionCtorInfo, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_656B4378A6148CC6*&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETANCHORMISSIONCTORINFO_OFFSET))(this, mapMissionCtorInfo, groupID, instanceID);
		}

		::System::Boolean _TryGetDistrictMissionCtorInfo(::Class_1_656B4378A6148CC6*& mapMissionCtorInfo, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_656B4378A6148CC6*&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__TRYGETDISTRICTMISSIONCTORINFO_OFFSET))(this, mapMissionCtorInfo, groupID, instanceID);
		}

		::System::Void _GetCrossFloorGuideIconMissionCtorInfo(::Class_1_656B4378A6148CC6*& mapMissionCtorInfo, ::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_656B4378A6148CC6*&, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__GETCROSSFLOORGUIDEICONMISSIONCTORINFO_OFFSET))(this, mapMissionCtorInfo, subMissionData);
		}

		::System::Boolean _CheckAreaData(::RPG::Client::MapIconAreaData* areaData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapIconAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKAREADATA_OFFSET))(this, areaData);
		}

		::System::Boolean _InShowArea(::System::Int32 areaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__INSHOWAREA_OFFSET))(this, areaID);
		}

		::System::Boolean _CheckFloor(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKFLOOR_OFFSET))(this, storyLineID, contentID, floorID);
		}

		::System::Boolean _CheckMissionHintDistance(::RPG::Client::MapMissionData* mapMissionData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__CHECKMISSIONHINTDISTANCE_OFFSET))(this, mapMissionData);
		}

		::System::Boolean _InShowAreaUnlockSubNavMap(::System::Int32 areaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__INSHOWAREAUNLOCKSUBNAVMAP_OFFSET))(this, areaID);
		}

		::System::Boolean _IsMapSectionLighten(::System::UInt32 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTORBASE__ISMAPSECTIONLIGHTEN_OFFSET))(this, sectionID);
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
