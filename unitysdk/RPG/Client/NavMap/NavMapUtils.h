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
namespace RPG::Client { class MapDataKey; }
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

#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETAREAID_OFFSET UNITYSDK_OFFSET(0xAB662D0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETCHESTICONS_OFFSET UNITYSDK_OFFSET(0xAB6F1D0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETDISTRICTDEF_OFFSET UNITYSDK_OFFSET(0xAB5C150)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETFIRSTTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0xAB3FFF0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETICONS_OFFSET UNITYSDK_OFFSET(0xAB66BD0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETLAYER_OFFSET UNITYSDK_OFFSET(0xAB5B650)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETLEVELNAVMAPAREA_OFFSET UNITYSDK_OFFSET(0xAB6E990)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETMAPPINGINFOICONS_OFFSET UNITYSDK_OFFSET(0xAB6F2D0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETMISSIONICONS_OFFSET UNITYSDK_OFFSET(0xAB6F0D0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETNPCDEF_OFFSET UNITYSDK_OFFSET(0xAB6E730)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETPROPDEF_OFFSET UNITYSDK_OFFSET(0xAB6E680)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETPROPINITIALWORLDPOSITIONSHOWINMAP_OFFSET UNITYSDK_OFFSET(0xAB6ECF0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETRESOLVEDPROMISE_OFFSET UNITYSDK_OFFSET(0xAB6ECA0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSECTIONID_OFFSET UNITYSDK_OFFSET(0xAB5C3A0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSECTIONSBYAREAID_OFFSET UNITYSDK_OFFSET(0xAB6E8A0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSPACETYPESORTID_OFFSET UNITYSDK_OFFSET(0xAB6E460)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETSUBMAPLINKICONLAYER_OFFSET UNITYSDK_OFFSET(0xAB6E4D0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_GETTELEPORTABLEICONS_OFFSET UNITYSDK_OFFSET(0xAB6F040)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISFLOORUNLOCKINTARGETVERSE_1_OFFSET UNITYSDK_OFFSET(0xAB6EB00)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISFLOORUNLOCKINTARGETVERSE_OFFSET UNITYSDK_OFFSET(0xAB6EA20)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISINCURRENTSCENE_1_OFFSET UNITYSDK_OFFSET(0xAB5FC90)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0xAB44350)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISRAIDMAP_OFFSET UNITYSDK_OFFSET(0xAB65880)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISTELEPORTMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xAB6EC00)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISTRAINTAB_OFFSET UNITYSDK_OFFSET(0xAB6E290)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISUNLOCKAFTERENTERFLOOR_OFFSET UNITYSDK_OFFSET(0xAB6E0F0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_MERGEMAINTABS_OFFSET UNITYSDK_OFFSET(0xAB6E370)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETDISTRICTDEF_OFFSET UNITYSDK_OFFSET(0xAB6E7E0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETNPCDEF_OFFSET UNITYSDK_OFFSET(0xAB5BEE0)
#define RPG_CLIENT_NAVMAP_NAVMAPUTILS_TRYGETPROPDEF_OFFSET UNITYSDK_OFFSET(0xAB58A00)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavMapUtils_TypeDefinitionIndex = 68862;

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

		static ::System::Boolean IsInCurrentScene_1(::RPG::Client::MapDataKey* mapDataKey)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAPUTILS_ISINCURRENTSCENE_1_OFFSET))(mapDataKey);
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
