#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::Client::NavMap { class SectionBoundsParam; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class LevelNavmapArea; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class MapEntryRow; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace RPG::GameCore { class MazeFloorConnectivityRow; }
namespace RPG::GameCore { class SubMissionRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BIGMAPUTILS_GETAREAID_OFFSET UNITYSDK_OFFSET(0x9E91810)
#define RPG_CLIENT_BIGMAPUTILS_GETBASEFLOORID_OFFSET UNITYSDK_OFFSET(0x9E94940)
#define RPG_CLIENT_BIGMAPUTILS_GETCOCOONICONTYPEANDCOLORBYMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0x9E90B20)
#define RPG_CLIENT_BIGMAPUTILS_GETCOMMONICONTYPEANDCOLORBYMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0x9E90E00)
#define RPG_CLIENT_BIGMAPUTILS_GETCURPLAYERWORLDID_OFFSET UNITYSDK_OFFSET(0x9E90790)
#define RPG_CLIENT_BIGMAPUTILS_GETCURSHOWENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9E8F590)
#define RPG_CLIENT_BIGMAPUTILS_GETCURWORLDID_OFFSET UNITYSDK_OFFSET(0x9E8E7F0)
#define RPG_CLIENT_BIGMAPUTILS_GETENTITYBAKEDINFO_OFFSET UNITYSDK_OFFSET(0x9E92DD0)
#define RPG_CLIENT_BIGMAPUTILS_GETENTRANCEIDBYFLOORID_OFFSET UNITYSDK_OFFSET(0x9E94810)
#define RPG_CLIENT_BIGMAPUTILS_GETFLOORCONNECTIVITYROWBYTOENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9E94B40)
#define RPG_CLIENT_BIGMAPUTILS_GETFLOORIDBYENTRANCE_OFFSET UNITYSDK_OFFSET(0x9E94790)
#define RPG_CLIENT_BIGMAPUTILS_GETFROMENTRANCEIDBYTOENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9E949C0)
#define RPG_CLIENT_BIGMAPUTILS_GETICONPOSITIONINMAP_OFFSET UNITYSDK_OFFSET(0x9E94280)
#define RPG_CLIENT_BIGMAPUTILS_GETICONTYPEANDCOLORBYMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0x9E90960)
#define RPG_CLIENT_BIGMAPUTILS_GETISENTRANCEIDINTRAINWORLD_OFFSET UNITYSDK_OFFSET(0x9E90430)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPENTRYROW_OFFSET UNITYSDK_OFFSET(0x9E8F750)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPICONAREADATABYAREAID_OFFSET UNITYSDK_OFFSET(0x9E92A80)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPICONPOSITIONINMAP_OFFSET UNITYSDK_OFFSET(0x9E91280)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPICONROTATION_OFFSET UNITYSDK_OFFSET(0x9E914E0)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPPINGINFOROWBYID_OFFSET UNITYSDK_OFFSET(0x9E927E0)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPTARGETAREAID_OFFSET UNITYSDK_OFFSET(0x9E95120)
#define RPG_CLIENT_BIGMAPUTILS_GETNEWREDDOTWORLDIDLIST_OFFSET UNITYSDK_OFFSET(0x9E92910)
#define RPG_CLIENT_BIGMAPUTILS_GETPLANETYPEBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9E8F6B0)
#define RPG_CLIENT_BIGMAPUTILS_GETPLAYERAREADATA_OFFSET UNITYSDK_OFFSET(0x9E92F70)
#define RPG_CLIENT_BIGMAPUTILS_GETPLAYERAREAID_OFFSET UNITYSDK_OFFSET(0x9E916A0)
#define RPG_CLIENT_BIGMAPUTILS_GETPLAYERPOSITIONINMAP_OFFSET UNITYSDK_OFFSET(0x9E94050)
#define RPG_CLIENT_BIGMAPUTILS_GETPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x9E91750)
#define RPG_CLIENT_BIGMAPUTILS_GETPROPCONFIGMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9E94570)
#define RPG_CLIENT_BIGMAPUTILS_GETSECTIONBOUNDS_OFFSET UNITYSDK_OFFSET(0x9E91140)
#define RPG_CLIENT_BIGMAPUTILS_GETSECTIONROADSPRITEPATH_OFFSET UNITYSDK_OFFSET(0x9E91590)
#define RPG_CLIENT_BIGMAPUTILS_GETSECTIONVERTICESBYAREAID_OFFSET UNITYSDK_OFFSET(0x9E95930)
#define RPG_CLIENT_BIGMAPUTILS_GETSHOWTRACKINGSUBMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9E900D0)
#define RPG_CLIENT_BIGMAPUTILS_GETSUBMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9E8FC20)
#define RPG_CLIENT_BIGMAPUTILS_GETTRACESUBMISSIONBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9E90490)
#define RPG_CLIENT_BIGMAPUTILS_GETWORLDIDBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9E8E6F0)
#define RPG_CLIENT_BIGMAPUTILS_GETWORLDIDBYPLANEID_OFFSET UNITYSDK_OFFSET(0x9E903B0)
#define RPG_CLIENT_BIGMAPUTILS_GET_ICONDEFAULTCOLOR_OFFSET UNITYSDK_OFFSET(0x9E8F0B0)
#define RPG_CLIENT_BIGMAPUTILS_GET_TRAINPLANEID_OFFSET UNITYSDK_OFFSET(0x9E8F130)
#define RPG_CLIENT_BIGMAPUTILS_GET_TRAINWORLDID_OFFSET UNITYSDK_OFFSET(0x9E8E7E0)
#define RPG_CLIENT_BIGMAPUTILS_GET_WORLDIDLIST_OFFSET UNITYSDK_OFFSET(0x9E8F140)
#define RPG_CLIENT_BIGMAPUTILS_ISCANLOADMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0x9E94D90)
#define RPG_CLIENT_BIGMAPUTILS_ISCURRENTTRACEMISSIONSCENE_1_OFFSET UNITYSDK_OFFSET(0x9E92240)
#define RPG_CLIENT_BIGMAPUTILS_ISCURRENTTRACEMISSIONSCENE_OFFSET UNITYSDK_OFFSET(0x9E90710)
#define RPG_CLIENT_BIGMAPUTILS_ISCURTRAINMAP_OFFSET UNITYSDK_OFFSET(0x9E8C410)
#define RPG_CLIENT_BIGMAPUTILS_ISENTRYUNLOCKEDEXTEND_OFFSET UNITYSDK_OFFSET(0x9E91DF0)
#define RPG_CLIENT_BIGMAPUTILS_ISENTRYUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E8FB80)
#define RPG_CLIENT_BIGMAPUTILS_ISINROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x9E94C90)
#define RPG_CLIENT_BIGMAPUTILS_ISINSPECIFICMAP_OFFSET UNITYSDK_OFFSET(0x9E8F450)
#define RPG_CLIENT_BIGMAPUTILS_ISMAPAREAHIDE_OFFSET UNITYSDK_OFFSET(0x9E94D10)
#define RPG_CLIENT_BIGMAPUTILS_ISPAMINFLOOR_OFFSET UNITYSDK_OFFSET(0x9E8F340)
#define RPG_CLIENT_BIGMAPUTILS_ISPLAYERINHIDEAREA_OFFSET UNITYSDK_OFFSET(0x9E93D60)
#define RPG_CLIENT_BIGMAPUTILS_ISROTATIONBRIDGE_OFFSET UNITYSDK_OFFSET(0x9E950D0)
#define RPG_CLIENT_BIGMAPUTILS_ISSHOWAREAMAP_OFFSET UNITYSDK_OFFSET(0x9E8FA50)
#define RPG_CLIENT_BIGMAPUTILS_ISSHOWSUBMISSIONINMAP_1_OFFSET UNITYSDK_OFFSET(0x9E92500)
#define RPG_CLIENT_BIGMAPUTILS_ISSHOWSUBMISSIONINMAP_OFFSET UNITYSDK_OFFSET(0x9E92480)
#define RPG_CLIENT_BIGMAPUTILS_ISTRACESUBMISSION_1_OFFSET UNITYSDK_OFFSET(0x9E920D0)
#define RPG_CLIENT_BIGMAPUTILS_ISTRACESUBMISSION_OFFSET UNITYSDK_OFFSET(0x9E91F00)
#define RPG_CLIENT_BIGMAPUTILS_OVERRIDEMINIMAPICONTYPEBYMAPROTATION_OFFSET UNITYSDK_OFFSET(0x9E94FA0)
#define RPG_CLIENT_BIGMAPUTILS_PAMINFLOORIDNOW_OFFSET UNITYSDK_OFFSET(0x9E8F3B0)
#define RPG_CLIENT_BIGMAPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E95A80)
#define RPG_CLIENT_BIGMAPUTILS__GETINLEFTVALUE_OFFSET UNITYSDK_OFFSET(0x9E959E0)
#define RPG_CLIENT_BIGMAPUTILS__GETLEVELNAVMAPAREABYAREAID_OFFSET UNITYSDK_OFFSET(0x9E92D30)
#define RPG_CLIENT_BIGMAPUTILS__GETPLAYERREGIONID_OFFSET UNITYSDK_OFFSET(0x9E93CB0)
#define RPG_CLIENT_BIGMAPUTILS__GETREGIONID_OFFSET UNITYSDK_OFFSET(0x9E91C50)
#define RPG_CLIENT_BIGMAPUTILS__ISMAPICONINPOLYGON_OFFSET UNITYSDK_OFFSET(0x9E95550)
#define RPG_CLIENT_BIGMAPUTILS__ISMAPICONINRECT_OFFSET UNITYSDK_OFFSET(0x9E95480)
#define RPG_CLIENT_BIGMAPUTILS__ISMAPICONINSECTION_OFFSET UNITYSDK_OFFSET(0x9E95360)
#define RPG_CLIENT_BIGMAPUTILS__OBSOLETEGETPLAYERAREADATA_OFFSET UNITYSDK_OFFSET(0x9E934D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BigMapUtils_TypeDefinitionIndex = 57938;

	class BigMapUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__WorldIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BigMapUtils_TypeDefinitionIndex)->GetStaticField(0x414A0);
		}
		static ::RPG::Client::MapIconAreaData** StaticGet__MapIconAreaData()
		{
			return (::RPG::Client::MapIconAreaData**)Il2CppClass::FromTypeDefinitionIndex(BigMapUtils_TypeDefinitionIndex)->GetStaticField(0x414A8);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavmapArea*>** StaticGet__LevelNavmapAreaList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavmapArea*>**)Il2CppClass::FromTypeDefinitionIndex(BigMapUtils_TypeDefinitionIndex)->GetStaticField(0x414B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Color get_IconDefaultColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GET_ICONDEFAULTCOLOR_OFFSET))();
		}

		static ::System::UInt32 get_TrainWorldID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GET_TRAINWORLDID_OFFSET))();
		}

		static ::System::UInt32 get_TrainPlaneID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GET_TRAINPLANEID_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_WorldIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GET_WORLDIDLIST_OFFSET))();
		}

		static ::System::Boolean IsCurTrainMap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISCURTRAINMAP_OFFSET))();
		}

		static ::System::Boolean IsPamInFloor(::System::UInt32 floorID, ::System::UInt32 dimensionID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISPAMINFLOOR_OFFSET))(floorID, dimensionID);
		}

		static ::System::UInt32 PamInFloorIDNow(::System::UInt32 dimensionID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_PAMINFLOORIDNOW_OFFSET))(dimensionID);
		}

		static ::System::Boolean IsInSpecificMap(::System::UInt32 floorID, ::System::UInt32 planeID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISINSPECIFICMAP_OFFSET))(floorID, planeID);
		}

		static ::System::UInt32 GetCurShowEntranceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETCURSHOWENTRANCEID_OFFSET))();
		}

		static ::RPG::GameCore::PlaneType GetPlaneTypeByEntranceID(::System::UInt32 entranceID)
		{
			return ((::RPG::GameCore::PlaneType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPLANETYPEBYENTRANCEID_OFFSET))(entranceID);
		}

		static ::RPG::GameCore::MapEntryRow* GetMapEntryRow(::System::UInt32 planeID, ::System::UInt32 floorID)
		{
			return ((::RPG::GameCore::MapEntryRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPENTRYROW_OFFSET))(planeID, floorID);
		}

		static ::System::Boolean IsShowAreaMap(::RPG::GameCore::MapEntryRow* mapEntryRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISSHOWAREAMAP_OFFSET))(mapEntryRow);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* GetSubMissionDataList(::System::UInt32 floorID, ::System::UInt32 storylineID, ::System::UInt32 contentID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETSUBMISSIONDATALIST_OFFSET))(floorID, storylineID, contentID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* GetShowTrackingSubMissionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETSHOWTRACKINGSUBMISSIONDATALIST_OFFSET))();
		}

		static ::System::UInt32 GetWorldIDByEntranceID(::System::UInt32 entranceID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETWORLDIDBYENTRANCEID_OFFSET))(entranceID);
		}

		static ::System::UInt32 GetWorldIDByPlaneID(::System::UInt32 planeID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETWORLDIDBYPLANEID_OFFSET))(planeID);
		}

		static ::System::Boolean GetIsEntranceIDInTrainWorld(::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETISENTRANCEIDINTRAINWORLD_OFFSET))(entranceID);
		}

		static ::RPG::Client::SubMissionData* GetTraceSubMissionByEntranceID(::System::UInt32 entranceID)
		{
			return ((::RPG::Client::SubMissionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETTRACESUBMISSIONBYENTRANCEID_OFFSET))(entranceID);
		}

		static ::System::UInt32 GetCurPlayerWorldID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETCURPLAYERWORLDID_OFFSET))();
		}

		static ::System::UInt32 GetCurWorldID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETCURWORLDID_OFFSET))();
		}

		static ::System::Void GetIconTypeAndColorByMapPropDef(::RPG::Client::MapPropDef* mapPropDef, ::RPG::GameCore::PropState propState, ::System::UInt32& refIconType, ::UnityEngine::Color& refIconColor, ::System::String*& refAnchorKey)
		{
			return ((::System::Void(*)(::RPG::Client::MapPropDef*, ::RPG::GameCore::PropState, ::System::UInt32&, ::UnityEngine::Color&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETICONTYPEANDCOLORBYMAPPROPDEF_OFFSET))(mapPropDef, propState, refIconType, refIconColor, refAnchorKey);
		}

		static ::System::Void GetCommonIconTypeAndColorByMapPropDef(::RPG::Client::MapPropDef* mapPropDef, ::RPG::GameCore::PropState propState, ::System::UInt32& refIconType, ::UnityEngine::Color& refIconColor, ::System::String*& refAnchorKey)
		{
			return ((::System::Void(*)(::RPG::Client::MapPropDef*, ::RPG::GameCore::PropState, ::System::UInt32&, ::UnityEngine::Color&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETCOMMONICONTYPEANDCOLORBYMAPPROPDEF_OFFSET))(mapPropDef, propState, refIconType, refIconColor, refAnchorKey);
		}

		static ::System::Void GetCocoonIconTypeAndColorByMapPropDef(::RPG::Client::MapPropDef* mapPropDef, ::RPG::GameCore::PropState propState, ::System::UInt32& refIconType, ::UnityEngine::Color& refIconColor, ::System::String*& refAnchorKey)
		{
			return ((::System::Void(*)(::RPG::Client::MapPropDef*, ::RPG::GameCore::PropState, ::System::UInt32&, ::UnityEngine::Color&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETCOCOONICONTYPEANDCOLORBYMAPPROPDEF_OFFSET))(mapPropDef, propState, refIconType, refIconColor, refAnchorKey);
		}

		static ::RPG::Client::NavMap::SectionBoundsParam* GetSectionBounds(::RPG::GameCore::LevelMinimapSection* section, ::Il2CppArray<::RPG::MVector2>* sectionVerticesArray)
		{
			return ((::RPG::Client::NavMap::SectionBoundsParam*(*)(::RPG::GameCore::LevelMinimapSection*, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETSECTIONBOUNDS_OFFSET))(section, sectionVerticesArray);
		}

		static ::UnityEngine::Vector3 GetMapIconPositionInMap(::RPG::GameCore::LevelNavmapConfig* navmapConfig, ::UnityEngine::Vector3 iconPosition)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::GameCore::LevelNavmapConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPICONPOSITIONINMAP_OFFSET))(navmapConfig, iconPosition);
		}

		static ::UnityEngine::Quaternion GetMapIconRotation(::UnityEngine::Vector3 iconRoation, ::System::Single offset)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPICONROTATION_OFFSET))(iconRoation, offset);
		}

		static ::System::String* GetSectionRoadSpritePath(::RPG::GameCore::LevelMinimapSection* section, ::RPG::Client::FloorSavedData* floorSavedValues)
		{
			return ((::System::String*(*)(::RPG::GameCore::LevelMinimapSection*, ::RPG::Client::FloorSavedData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETSECTIONROADSPRITEPATH_OFFSET))(section, floorSavedValues);
		}

		static ::System::Int32 GetPlayerAreaID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPLAYERAREAID_OFFSET))();
		}

		static ::System::Int32 GetAreaID(::UnityEngine::Vector3 position)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETAREAID_OFFSET))(position);
		}

		static ::System::Boolean IsEntryUnlockedExtend(::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISENTRYUNLOCKEDEXTEND_OFFSET))(entranceID);
		}

		static ::System::Boolean IsEntryUnlocked(::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISENTRYUNLOCKED_OFFSET))(entranceID);
		}

		static ::System::Boolean IsTraceSubMission(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Boolean(*)(::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISTRACESUBMISSION_OFFSET))(subMissionData);
		}

		static ::System::Boolean IsTraceSubMission_1(::RPG::GameCore::SubMissionRow* subMissionRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISTRACESUBMISSION_1_OFFSET))(subMissionRow);
		}

		static ::System::Boolean IsCurrentTraceMissionScene(::System::UInt32 entranceID, ::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISCURRENTTRACEMISSIONSCENE_OFFSET))(entranceID, subMissionData);
		}

		static ::System::Boolean IsCurrentTraceMissionScene_1(::System::UInt32 entranceID, ::RPG::GameCore::SubMissionRow* subMissionRow)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISCURRENTTRACEMISSIONSCENE_1_OFFSET))(entranceID, subMissionRow);
		}

		static ::System::Boolean IsShowSubMissionInMap(::System::UInt32 entranceID, ::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISSHOWSUBMISSIONINMAP_OFFSET))(entranceID, subMissionData);
		}

		static ::System::Boolean IsShowSubMissionInMap_1(::System::UInt32 entranceID, ::RPG::GameCore::SubMissionRow* subMissionRow)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISSHOWSUBMISSIONINMAP_1_OFFSET))(entranceID, subMissionRow);
		}

		static ::RPG::GameCore::MappingInfoRow* GetMappingInfoRowByID(::System::UInt32 mappingInfoID)
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPPINGINFOROWBYID_OFFSET))(mappingInfoID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetNewRedDotWorldIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETNEWREDDOTWORLDIDLIST_OFFSET))();
		}

		static ::RPG::Client::MapIconAreaData* GetMapIconAreaDataByAreaID(::RPG::GameCore::LevelNavmapConfig* navmapConfig, ::System::Int32 areaID, ::UnityEngine::Vector3 iconPosition)
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPICONAREADATABYAREAID_OFFSET))(navmapConfig, areaID, iconPosition);
		}

		static ::System::Void GetEntityBakedInfo(::RPG::Client::NavMap::IMapDataSource* mapData, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::System::UInt32& regionID, ::System::Int32& layerID, ::System::Int32& areaID, ::System::Int32& sectionID)
		{
			return ((::System::Void(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::UInt32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETENTITYBAKEDINFO_OFFSET))(mapData, groupID, instanceID, regionID, layerID, areaID, sectionID);
		}

		static ::RPG::Client::MapIconAreaData* GetPlayerAreaData(::RPG::Client::MapDef* mapDef, ::UnityEngine::Vector3 iconPosition)
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::RPG::Client::MapDef*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPLAYERAREADATA_OFFSET))(mapDef, iconPosition);
		}

		static ::RPG::Client::MapIconAreaData* _ObsoleteGetPlayerAreaData(::RPG::Client::MapDef* mapDef, ::UnityEngine::Vector3 iconPosition)
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::RPG::Client::MapDef*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__OBSOLETEGETPLAYERAREADATA_OFFSET))(mapDef, iconPosition);
		}

		static ::UnityEngine::Vector3 GetPlayerPositionInMap(::RPG::Client::MapDef* mapDef, ::UnityEngine::Vector3 iconPosition, ::System::Int32& refAreaID)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MapDef*, ::UnityEngine::Vector3, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPLAYERPOSITIONINMAP_OFFSET))(mapDef, iconPosition, refAreaID);
		}

		static ::UnityEngine::Vector3 GetIconPositionInMap(::RPG::Client::MapDef* mapDef, ::UnityEngine::Vector3 iconPosition, ::System::Int32 areaID)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MapDef*, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETICONPOSITIONINMAP_OFFSET))(mapDef, iconPosition, areaID);
		}

		static ::System::UInt32 GetPropConfigMappingInfoID(::System::UInt32 storylineID, ::System::UInt32 contentID, ::System::UInt32 entranceID, ::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPROPCONFIGMAPPINGINFOID_OFFSET))(storylineID, contentID, entranceID, groupID, instanceID);
		}

		static ::System::UInt32 GetEntranceIDByFloorID(::System::UInt32 floorID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETENTRANCEIDBYFLOORID_OFFSET))(floorID);
		}

		static ::System::UInt32 GetFloorIDByEntrance(::System::UInt32 entranceID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETFLOORIDBYENTRANCE_OFFSET))(entranceID);
		}

		static ::System::UInt32 GetBaseFloorID(::System::UInt32 floorID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETBASEFLOORID_OFFSET))(floorID);
		}

		static ::System::UInt32 GetFromEntranceIDByToEntranceID(::System::UInt32 toEntranceID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETFROMENTRANCEIDBYTOENTRANCEID_OFFSET))(toEntranceID);
		}

		static ::RPG::GameCore::MazeFloorConnectivityRow* GetFloorConnectivityRowByToEntranceID(::System::UInt32 toEntranceID)
		{
			return ((::RPG::GameCore::MazeFloorConnectivityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETFLOORCONNECTIVITYROWBYTOENTRANCEID_OFFSET))(toEntranceID);
		}

		static ::System::Boolean IsInRotatableRegion(::RPG::Client::NavMap::IMapDataSource* mapData, ::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISINROTATABLEREGION_OFFSET))(mapData, groupID);
		}

		static ::System::Boolean IsMapAreaHide(::RPG::GameCore::LevelNavmapConfig* _NavmapConfig, ::System::Int32 areaID)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISMAPAREAHIDE_OFFSET))(_NavmapConfig, areaID);
		}

		static ::System::Boolean IsCanLoadMapPropDef(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISCANLOADMAPPROPDEF_OFFSET))(groupID, instanceID);
		}

		static ::System::Void OverrideMinimapIconTypeByMapRotation(::RPG::Client::MapMappingInfoData* mappingInfoData, ::RPG::Client::NavMap::IMapDataSource* mapData, ::System::UInt32 storyLineID)
		{
			return ((::System::Void(*)(::RPG::Client::MapMappingInfoData*, ::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_OVERRIDEMINIMAPICONTYPEBYMAPROTATION_OFFSET))(mappingInfoData, mapData, storyLineID);
		}

		static ::System::Boolean IsRotationBridge(::RPG::GameCore::PropState state)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISROTATIONBRIDGE_OFFSET))(state);
		}

		static ::System::Boolean IsPlayerInHideArea()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISPLAYERINHIDEAREA_OFFSET))();
		}

		static ::System::Int32 GetMapTargetAreaID(::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPTARGETAREAID_OFFSET))(groupID, instanceID, mapDef);
		}

		static ::RPG::GameCore::LevelNavmapArea* _GetLevelNavmapAreaByAreaID(::RPG::GameCore::LevelNavmapConfig* _NavmapConfig, ::System::Int32 areaID)
		{
			return ((::RPG::GameCore::LevelNavmapArea*(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__GETLEVELNAVMAPAREABYAREAID_OFFSET))(_NavmapConfig, areaID);
		}

		static ::System::Boolean _IsMapIconInSection(::UnityEngine::Vector3 iconPosition, ::RPG::GameCore::LevelMinimapSection* section, ::RPG::GameCore::LevelNavmapConfig* navmapConfig, ::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__ISMAPICONINSECTION_OFFSET))(iconPosition, section, navmapConfig, areaID);
		}

		static ::System::Boolean _IsMapIconInRect(::UnityEngine::Vector3 iconPosition, ::RPG::GameCore::LevelMinimapSection* section, ::RPG::GameCore::LevelNavmapConfig* navmapConfig, ::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__ISMAPICONINRECT_OFFSET))(iconPosition, section, navmapConfig, areaID);
		}

		static ::Il2CppArray<::RPG::MVector2>* GetSectionVerticesByAreaID(::RPG::GameCore::LevelNavmapConfig* navmapConfig, ::System::UInt32 areaID)
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETSECTIONVERTICESBYAREAID_OFFSET))(navmapConfig, areaID);
		}

		static ::System::Boolean _IsMapIconInPolygon(::UnityEngine::Vector3 iconPosition, ::RPG::GameCore::LevelMinimapSection* section, ::RPG::GameCore::LevelNavmapConfig* navmapConfig, ::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__ISMAPICONINPOLYGON_OFFSET))(iconPosition, section, navmapConfig, areaID);
		}

		static ::System::Single _GetInLeftValue(::RPG::MVector2 p0, ::RPG::MVector2 p1, ::UnityEngine::Vector3 iconPosition)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__GETINLEFTVALUE_OFFSET))(p0, p1, iconPosition);
		}

		static ::System::UInt32 _GetPlayerRegionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__GETPLAYERREGIONID_OFFSET))();
		}

		static ::System::UInt32 _GetRegionID(::UnityEngine::Vector3 position)
		{
			return ((::System::UInt32(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__GETREGIONID_OFFSET))(position);
		}

		static ::System::Nullable_1<::UnityEngine::Vector3> GetPlayerPosition()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPLAYERPOSITION_OFFSET))();
		}
	};
}
