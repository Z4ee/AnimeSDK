#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IChestIcon; }
namespace RPG::Client { class IMapIcon; }
namespace RPG::Client { class IMissionIcon; }
namespace RPG::Client { class ITeleportableIcon; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class IMainTab; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class ITab; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class LevelNavmapArea; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETAREAID_OFFSET UNITYSDK_OFFSET(0x9E1DE80)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETCHESTICONS_OFFSET UNITYSDK_OFFSET(0x9E27BD0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETDISTRICTDEF_OFFSET UNITYSDK_OFFSET(0x9E26EF0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETFIRSTTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0x9E26690)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETICONS_OFFSET UNITYSDK_OFFSET(0x9E1EAD0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETLAYER_OFFSET UNITYSDK_OFFSET(0x9E17680)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETLEVELNAVMAPAREA_OFFSET UNITYSDK_OFFSET(0x9E272D0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETMAPPINGINFOICONS_OFFSET UNITYSDK_OFFSET(0x9E27CD0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETMISSIONICONS_OFFSET UNITYSDK_OFFSET(0x9E27AD0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETNPCDEF_OFFSET UNITYSDK_OFFSET(0x9E26E40)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETPROPDEF_OFFSET UNITYSDK_OFFSET(0x9E26D90)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETPROPINITIALWORLDPOSITIONSHOWINMAP_OFFSET UNITYSDK_OFFSET(0x9E276F0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETRESOLVEDPROMISE_OFFSET UNITYSDK_OFFSET(0x9E276A0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSECTIONID_OFFSET UNITYSDK_OFFSET(0x9E26CD0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSECTIONSBYAREAID_OFFSET UNITYSDK_OFFSET(0x9E271E0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSPACETYPESORTID_OFFSET UNITYSDK_OFFSET(0x9E26620)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSUBMAPLINKICONLAYER_OFFSET UNITYSDK_OFFSET(0x9E26B20)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETTELEPORTABLEICONS_OFFSET UNITYSDK_OFFSET(0x9E27A40)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISFLOORUNLOCKINTARGETVERSE_1_OFFSET UNITYSDK_OFFSET(0x9E27440)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISFLOORUNLOCKINTARGETVERSE_OFFSET UNITYSDK_OFFSET(0x9E27360)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x9E16390)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISRAIDMAP_OFFSET UNITYSDK_OFFSET(0x9E1D3B0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISTELEPORTMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x9E27600)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISTRAINTAB_OFFSET UNITYSDK_OFFSET(0x9E26450)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISUNLOCKAFTERENTERFLOOR_OFFSET UNITYSDK_OFFSET(0x9E262B0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_MERGEMAINTABS_OFFSET UNITYSDK_OFFSET(0x9E26530)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETDISTRICTDEF_OFFSET UNITYSDK_OFFSET(0x9E27120)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETNPCDEF_OFFSET UNITYSDK_OFFSET(0x9E27060)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETPROPDEF_OFFSET UNITYSDK_OFFSET(0x9E26FA0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavMapUtils_TypeDefinitionIndex = 61356;

	class NavMapUtils : public ::System::Object
	{
	public:
		// static const ::System::Int32 InvalidLayerNum = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 TrainWorldID = 0x64; // 0x0

		static ::System::Boolean IsUnlockAfterEnterFloor(::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISUNLOCKAFTERENTERFLOOR_OFFSET))(floorID);
		}

		static ::System::Boolean IsInCurrentScene(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISINCURRENTSCENE_OFFSET))(storyLineID, contentID, floorID);
		}

		static ::System::Boolean IsTrainTab(::RPG::Client::NavMap::ITab* tab)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::ITab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISTRAINTAB_OFFSET))(tab);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::NavMap::IMainTab*>* MergeMainTabs(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>* list1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>* list2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::IMainTab*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::IMainTab*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_MERGEMAINTABS_OFFSET))(list1, list2);
		}

		static ::System::Int32 GetSpaceTypeSortID(::RPG::GameCore::MapSpaceType mapSpaceType)
		{
			return ((::System::Int32(*)(::RPG::GameCore::MapSpaceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSPACETYPESORTID_OFFSET))(mapSpaceType);
		}

		static ::RPG::Client::SubMissionData* GetFirstTrackingSubMissionForShow(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ITab*>* tabs)
		{
			return ((::RPG::Client::SubMissionData*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::ITab*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETFIRSTTRACKINGSUBMISSIONFORSHOW_OFFSET))(tabs);
		}

		static ::System::Int32 GetSubMapLinkIconLayer(::RPG::Client::NavMap::ICartography* cartography, ::System::UInt32 subNavMapID)
		{
			return ((::System::Int32(*)(::RPG::Client::NavMap::ICartography*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSUBMAPLINKICONLAYER_OFFSET))(cartography, subNavMapID);
		}

		static ::System::Int32 GetLayer(::RPG::Client::NavMap::IMapDataSource* mapDataSource, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Int32(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETLAYER_OFFSET))(mapDataSource, groupID, instanceID);
		}

		static ::System::Int32 GetSectionID(::RPG::Client::NavMap::IMapDataSource* mapDataSource, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Int32(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSECTIONID_OFFSET))(mapDataSource, groupID, instanceID);
		}

		static ::System::Int32 GetAreaID(::RPG::Client::NavMap::IMapDataSource* mapDataSource, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Int32(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETAREAID_OFFSET))(mapDataSource, groupID, instanceID);
		}

		static ::RPG::Client::MapPropDef* GetPropDef(::RPG::Client::NavMap::IMapDataSource* mapDataSource, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapPropDef*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETPROPDEF_OFFSET))(mapDataSource, groupID, instanceID);
		}

		static ::RPG::Client::MapNpcDef* GetNpcDef(::RPG::Client::NavMap::IMapDataSource* mapDataSource, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapNpcDef*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETNPCDEF_OFFSET))(mapDataSource, groupID, instanceID);
		}

		static ::RPG::Client::MapDistrictDef* GetDistrictDef(::RPG::Client::NavMap::IMapDataSource* mapDataSource, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::RPG::Client::MapDistrictDef*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETDISTRICTDEF_OFFSET))(mapDataSource, groupID, instanceID);
		}

		static ::System::Boolean TryGetPropDef(::RPG::Client::NavMap::IMapDataSource* mapDataSource, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::Client::MapPropDef*& propDef)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapPropDef*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETPROPDEF_OFFSET))(mapDataSource, groupID, instanceID, propDef);
		}

		static ::System::Boolean TryGetNpcDef(::RPG::Client::NavMap::IMapDataSource* mapDataSource, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::Client::MapNpcDef*& npcDef)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapNpcDef*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETNPCDEF_OFFSET))(mapDataSource, groupID, instanceID, npcDef);
		}

		static ::System::Boolean TryGetDistrictDef(::RPG::Client::NavMap::IMapDataSource* mapDataSource, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::Client::MapDistrictDef*& districtDef)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapDistrictDef*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETDISTRICTDEF_OFFSET))(mapDataSource, groupID, instanceID, districtDef);
		}

		static ::Il2CppArray<::RPG::GameCore::LevelMinimapSection*>* GetSectionsByAreaID(::RPG::GameCore::LevelNavmapConfig* navmapConfig, ::System::UInt32 areaID)
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelMinimapSection*>*(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSECTIONSBYAREAID_OFFSET))(navmapConfig, areaID);
		}

		static ::RPG::GameCore::LevelNavmapArea* GetLevelNavmapArea(::RPG::GameCore::LevelNavmapConfig* navmapConfig, ::System::UInt32 areaID)
		{
			return ((::RPG::GameCore::LevelNavmapArea*(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETLEVELNAVMAPAREA_OFFSET))(navmapConfig, areaID);
		}

		static ::System::Boolean IsFloorUnlockInTargetVerse(::System::UInt32 floorID, ::System::UInt32 storyLineID, ::System::UInt32 contentID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISFLOORUNLOCKINTARGETVERSE_OFFSET))(floorID, storyLineID, contentID);
		}

		static ::System::Boolean IsFloorUnlockInTargetVerse_1(::System::UInt32 floorID, ::RPG::Client::VerseParam verse)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::VerseParam))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISFLOORUNLOCKINTARGETVERSE_1_OFFSET))(floorID, verse);
		}

		static ::System::Boolean IsTeleportMappingInfo(::RPG::GameCore::MappingInfoRow* mappingInfoRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISTELEPORTMAPPINGINFO_OFFSET))(mappingInfoRow);
		}

		static ::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>* GetResolvedPromise(::RPG::Client::NavMap::ICartographer* cartographer)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartographer*>*(*)(::RPG::Client::NavMap::ICartographer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETRESOLVEDPROMISE_OFFSET))(cartographer);
		}

		static ::System::Boolean IsRaidMap(::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISRAIDMAP_OFFSET))(floorID);
		}

		static ::UnityEngine::Vector3 GetPropInitialWorldPositionShowInMap(::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETPROPINITIALWORLDPOSITIONSHOWINMAP_OFFSET))(mapPropDef);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMapIcon*>* GetIcons(::RPG::Client::NavMap::ICartography* cartography)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMapIcon*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETICONS_OFFSET))(cartography);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ITeleportableIcon*>* GetTeleportableIcons(::RPG::Client::NavMap::ICartography* cartography)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ITeleportableIcon*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETTELEPORTABLEICONS_OFFSET))(cartography);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMissionIcon*>* GetMissionIcons(::RPG::Client::NavMap::ICartography* cartography)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IMissionIcon*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETMISSIONICONS_OFFSET))(cartography);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IChestIcon*>* GetChestIcons(::RPG::Client::NavMap::ICartography* cartography)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IChestIcon*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETCHESTICONS_OFFSET))(cartography);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* GetMappingInfoIcons(::RPG::Client::NavMap::ICartography* cartography)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::RPG::Client::NavMap::ICartography*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETMAPPINGINFOICONS_OFFSET))(cartography);
		}
	};
}
