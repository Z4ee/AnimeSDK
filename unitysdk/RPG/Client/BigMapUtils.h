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

#define RPG_CLIENT_BIGMAPUTILS_GETAREAID_OFFSET UNITYSDK_OFFSET(0xC8792E0)
#define RPG_CLIENT_BIGMAPUTILS_GETBASEFLOORID_OFFSET UNITYSDK_OFFSET(0xC87CC30)
#define RPG_CLIENT_BIGMAPUTILS_GETCOCOONICONTYPEANDCOLORBYMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xC878460)
#define RPG_CLIENT_BIGMAPUTILS_GETCOMMONICONTYPEANDCOLORBYMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xC878830)
#define RPG_CLIENT_BIGMAPUTILS_GETCURPLAYERWORLDID_OFFSET UNITYSDK_OFFSET(0xC878070)
#define RPG_CLIENT_BIGMAPUTILS_GETCURSHOWENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC876B20)
#define RPG_CLIENT_BIGMAPUTILS_GETCURWORLDID_OFFSET UNITYSDK_OFFSET(0xC863960)
#define RPG_CLIENT_BIGMAPUTILS_GETENTITYBAKEDINFO_OFFSET UNITYSDK_OFFSET(0xC87A8F0)
#define RPG_CLIENT_BIGMAPUTILS_GETENTRANCEIDBYFLOORID_OFFSET UNITYSDK_OFFSET(0xC87CAC0)
#define RPG_CLIENT_BIGMAPUTILS_GETFLOORCONNECTIVITYROWBYTOENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC87CE80)
#define RPG_CLIENT_BIGMAPUTILS_GETFLOORIDBYENTRANCE_OFFSET UNITYSDK_OFFSET(0xC87CA40)
#define RPG_CLIENT_BIGMAPUTILS_GETFROMENTRANCEIDBYTOENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC87CCB0)
#define RPG_CLIENT_BIGMAPUTILS_GETICONPOSITIONINMAP_OFFSET UNITYSDK_OFFSET(0xC87C2A0)
#define RPG_CLIENT_BIGMAPUTILS_GETICONTYPEANDCOLORBYMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xC878260)
#define RPG_CLIENT_BIGMAPUTILS_GETISENTRANCEIDINTRAINWORLD_OFFSET UNITYSDK_OFFSET(0xC877CA0)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPENTRYROW_OFFSET UNITYSDK_OFFSET(0xC876C60)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPICONAREADATABYAREAID_OFFSET UNITYSDK_OFFSET(0xC87A5A0)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPICONPOSITIONINMAP_OFFSET UNITYSDK_OFFSET(0xC878D50)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPICONROTATION_OFFSET UNITYSDK_OFFSET(0xC878FB0)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPPINGINFOROWBYID_OFFSET UNITYSDK_OFFSET(0xC87A250)
#define RPG_CLIENT_BIGMAPUTILS_GETMAPTARGETAREAID_OFFSET UNITYSDK_OFFSET(0xC87D4B0)
#define RPG_CLIENT_BIGMAPUTILS_GETNEWREDDOTWORLDIDLIST_OFFSET UNITYSDK_OFFSET(0xC87A380)
#define RPG_CLIENT_BIGMAPUTILS_GETPLANETYPEBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC876BC0)
#define RPG_CLIENT_BIGMAPUTILS_GETPLAYERAREADATA_OFFSET UNITYSDK_OFFSET(0xC87AA10)
#define RPG_CLIENT_BIGMAPUTILS_GETPLAYERAREAID_OFFSET UNITYSDK_OFFSET(0xC879170)
#define RPG_CLIENT_BIGMAPUTILS_GETPLAYERPOSITIONINMAP_OFFSET UNITYSDK_OFFSET(0xC87BD00)
#define RPG_CLIENT_BIGMAPUTILS_GETPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0xC879220)
#define RPG_CLIENT_BIGMAPUTILS_GETPROPCONFIGMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xC87C820)
#define RPG_CLIENT_BIGMAPUTILS_GETSECTIONBOUNDS_OFFSET UNITYSDK_OFFSET(0xC878C20)
#define RPG_CLIENT_BIGMAPUTILS_GETSECTIONROADSPRITEPATH_OFFSET UNITYSDK_OFFSET(0xC879060)
#define RPG_CLIENT_BIGMAPUTILS_GETSECTIONVERTICESBYAREAID_OFFSET UNITYSDK_OFFSET(0xC87DC30)
#define RPG_CLIENT_BIGMAPUTILS_GETSHOWTRACKINGSUBMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0xC877830)
#define RPG_CLIENT_BIGMAPUTILS_GETSUBMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0xC877260)
#define RPG_CLIENT_BIGMAPUTILS_GETTRACESUBMISSIONBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC877D30)
#define RPG_CLIENT_BIGMAPUTILS_GETWORLDIDBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC875880)
#define RPG_CLIENT_BIGMAPUTILS_GETWORLDIDBYPLANEID_OFFSET UNITYSDK_OFFSET(0xC877C20)
#define RPG_CLIENT_BIGMAPUTILS_GET_ICONDEFAULTCOLOR_OFFSET UNITYSDK_OFFSET(0xC876520)
#define RPG_CLIENT_BIGMAPUTILS_GET_TRAINPLANEID_OFFSET UNITYSDK_OFFSET(0xC8765A0)
#define RPG_CLIENT_BIGMAPUTILS_GET_TRAINWORLDID_OFFSET UNITYSDK_OFFSET(0xC875970)
#define RPG_CLIENT_BIGMAPUTILS_GET_WORLDIDLIST_OFFSET UNITYSDK_OFFSET(0xC8765E0)
#define RPG_CLIENT_BIGMAPUTILS_ISCANLOADMAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xC871CB0)
#define RPG_CLIENT_BIGMAPUTILS_ISCURRENTTRACEMISSIONSCENE_1_OFFSET UNITYSDK_OFFSET(0xC879C80)
#define RPG_CLIENT_BIGMAPUTILS_ISCURRENTTRACEMISSIONSCENE_OFFSET UNITYSDK_OFFSET(0xC877FC0)
#define RPG_CLIENT_BIGMAPUTILS_ISCURTRAINMAP_OFFSET UNITYSDK_OFFSET(0xC872E60)
#define RPG_CLIENT_BIGMAPUTILS_ISENTRYUNLOCKEDEXTEND_OFFSET UNITYSDK_OFFSET(0xC879830)
#define RPG_CLIENT_BIGMAPUTILS_ISENTRYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC877180)
#define RPG_CLIENT_BIGMAPUTILS_ISINROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0xC87D020)
#define RPG_CLIENT_BIGMAPUTILS_ISINSPECIFICMAP_OFFSET UNITYSDK_OFFSET(0xC876960)
#define RPG_CLIENT_BIGMAPUTILS_ISMAPAREAHIDE_OFFSET UNITYSDK_OFFSET(0xC87D0D0)
#define RPG_CLIENT_BIGMAPUTILS_ISPAMINFLOOR_OFFSET UNITYSDK_OFFSET(0xC876850)
#define RPG_CLIENT_BIGMAPUTILS_ISPLAYERINHIDEAREA_OFFSET UNITYSDK_OFFSET(0xC87BA80)
#define RPG_CLIENT_BIGMAPUTILS_ISROTATIONBRIDGE_OFFSET UNITYSDK_OFFSET(0xC87D460)
#define RPG_CLIENT_BIGMAPUTILS_ISSHOWAREAMAP_OFFSET UNITYSDK_OFFSET(0xC877000)
#define RPG_CLIENT_BIGMAPUTILS_ISSHOWSUBMISSIONINMAP_1_OFFSET UNITYSDK_OFFSET(0xC879F70)
#define RPG_CLIENT_BIGMAPUTILS_ISSHOWSUBMISSIONINMAP_OFFSET UNITYSDK_OFFSET(0xC879EC0)
#define RPG_CLIENT_BIGMAPUTILS_ISTRACESUBMISSION_1_OFFSET UNITYSDK_OFFSET(0xC879B10)
#define RPG_CLIENT_BIGMAPUTILS_ISTRACESUBMISSION_OFFSET UNITYSDK_OFFSET(0xC879940)
#define RPG_CLIENT_BIGMAPUTILS_OVERRIDEMINIMAPICONTYPEBYMAPROTATION_OFFSET UNITYSDK_OFFSET(0xC87D150)
#define RPG_CLIENT_BIGMAPUTILS_PAMINFLOORIDNOW_OFFSET UNITYSDK_OFFSET(0xC8768C0)
#define RPG_CLIENT_BIGMAPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC87DD80)
#define RPG_CLIENT_BIGMAPUTILS__GETINLEFTVALUE_OFFSET UNITYSDK_OFFSET(0xC87DCE0)
#define RPG_CLIENT_BIGMAPUTILS__GETLEVELNAVMAPAREABYAREAID_OFFSET UNITYSDK_OFFSET(0xC87A850)
#define RPG_CLIENT_BIGMAPUTILS__GETPLAYERREGIONID_OFFSET UNITYSDK_OFFSET(0xC87B9D0)
#define RPG_CLIENT_BIGMAPUTILS__GETREGIONID_OFFSET UNITYSDK_OFFSET(0xC879690)
#define RPG_CLIENT_BIGMAPUTILS__ISMAPICONINPOLYGON_OFFSET UNITYSDK_OFFSET(0xC87D850)
#define RPG_CLIENT_BIGMAPUTILS__ISMAPICONINRECT_OFFSET UNITYSDK_OFFSET(0xC87D780)
#define RPG_CLIENT_BIGMAPUTILS__ISMAPICONINSECTION_OFFSET UNITYSDK_OFFSET(0xC87D660)
#define RPG_CLIENT_BIGMAPUTILS__OBSOLETEGETPLAYERAREADATA_OFFSET UNITYSDK_OFFSET(0xC87B080)

namespace RPG::Client
{
	inline static constexpr unsigned int BigMapUtils_TypeDefinitionIndex = 62904;

	class BigMapUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__WorldIDList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BigMapUtils_TypeDefinitionIndex)->GetStaticField(0x5CF10);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavmapArea*>** StaticGet__LevelNavmapAreaList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavmapArea*>**)Il2CppClass::FromTypeDefinitionIndex(BigMapUtils_TypeDefinitionIndex)->GetStaticField(0x5CF18);
		}
		static ::RPG::Client::MapIconAreaData** StaticGet__MapIconAreaData()
		{
			return (::RPG::Client::MapIconAreaData**)Il2CppClass::FromTypeDefinitionIndex(BigMapUtils_TypeDefinitionIndex)->GetStaticField(0x5CF20);
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

		static ::System::Boolean IsPamInFloor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISPAMINFLOOR_OFFSET))(a1, a2);
		}

		static ::System::UInt32 PamInFloorIDNow(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_PAMINFLOORIDNOW_OFFSET))(a1);
		}

		static ::System::Boolean IsInSpecificMap(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISINSPECIFICMAP_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetCurShowEntranceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETCURSHOWENTRANCEID_OFFSET))();
		}

		static ::RPG::GameCore::PlaneType GetPlaneTypeByEntranceID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlaneType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPLANETYPEBYENTRANCEID_OFFSET))(a1);
		}

		static ::RPG::GameCore::MapEntryRow* GetMapEntryRow(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MapEntryRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPENTRYROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsShowAreaMap(::RPG::GameCore::MapEntryRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISSHOWAREAMAP_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* GetSubMissionDataList(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETSUBMISSIONDATALIST_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* GetShowTrackingSubMissionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETSHOWTRACKINGSUBMISSIONDATALIST_OFFSET))();
		}

		static ::System::UInt32 GetWorldIDByEntranceID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETWORLDIDBYENTRANCEID_OFFSET))(a1);
		}

		static ::System::UInt32 GetWorldIDByPlaneID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETWORLDIDBYPLANEID_OFFSET))(a1);
		}

		static ::System::Boolean GetIsEntranceIDInTrainWorld(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETISENTRANCEIDINTRAINWORLD_OFFSET))(a1);
		}

		static ::RPG::Client::SubMissionData* GetTraceSubMissionByEntranceID(::System::UInt32 a1)
		{
			return ((::RPG::Client::SubMissionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETTRACESUBMISSIONBYENTRANCEID_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurPlayerWorldID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETCURPLAYERWORLDID_OFFSET))();
		}

		static ::System::UInt32 GetCurWorldID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETCURWORLDID_OFFSET))();
		}

		static ::System::Void GetIconTypeAndColorByMapPropDef(::RPG::Client::MapPropDef* a1, ::RPG::GameCore::PropState a2, ::System::UInt32& a3, ::UnityEngine::Color& a4, ::System::String*& a5)
		{
			return ((::System::Void(*)(::RPG::Client::MapPropDef*, ::RPG::GameCore::PropState, ::System::UInt32&, ::UnityEngine::Color&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETICONTYPEANDCOLORBYMAPPROPDEF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GetCommonIconTypeAndColorByMapPropDef(::RPG::Client::MapPropDef* a1, ::RPG::GameCore::PropState a2, ::System::UInt32& a3, ::UnityEngine::Color& a4, ::System::String*& a5)
		{
			return ((::System::Void(*)(::RPG::Client::MapPropDef*, ::RPG::GameCore::PropState, ::System::UInt32&, ::UnityEngine::Color&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETCOMMONICONTYPEANDCOLORBYMAPPROPDEF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GetCocoonIconTypeAndColorByMapPropDef(::RPG::Client::MapPropDef* a1, ::RPG::GameCore::PropState a2, ::System::UInt32& a3, ::UnityEngine::Color& a4, ::System::String*& a5)
		{
			return ((::System::Void(*)(::RPG::Client::MapPropDef*, ::RPG::GameCore::PropState, ::System::UInt32&, ::UnityEngine::Color&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETCOCOONICONTYPEANDCOLORBYMAPPROPDEF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::NavMap::SectionBoundsParam* GetSectionBounds(::RPG::GameCore::LevelMinimapSection* a1, ::Il2CppArray<::RPG::MVector2>* a2)
		{
			return ((::RPG::Client::NavMap::SectionBoundsParam*(*)(::RPG::GameCore::LevelMinimapSection*, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETSECTIONBOUNDS_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetMapIconPositionInMap(::RPG::GameCore::LevelNavmapConfig* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::GameCore::LevelNavmapConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPICONPOSITIONINMAP_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion GetMapIconRotation(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPICONROTATION_OFFSET))(a1, a2);
		}

		static ::System::String* GetSectionRoadSpritePath(::RPG::GameCore::LevelMinimapSection* a1, ::RPG::Client::FloorSavedData* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::LevelMinimapSection*, ::RPG::Client::FloorSavedData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETSECTIONROADSPRITEPATH_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetPlayerAreaID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPLAYERAREAID_OFFSET))();
		}

		static ::System::Int32 GetAreaID(::UnityEngine::Vector3 a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETAREAID_OFFSET))(a1);
		}

		static ::System::Boolean IsEntryUnlockedExtend(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISENTRYUNLOCKEDEXTEND_OFFSET))(a1);
		}

		static ::System::Boolean IsEntryUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISENTRYUNLOCKED_OFFSET))(a1);
		}

		static ::System::Boolean IsTraceSubMission(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISTRACESUBMISSION_OFFSET))(a1);
		}

		static ::System::Boolean IsTraceSubMission_1(::RPG::GameCore::SubMissionRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISTRACESUBMISSION_1_OFFSET))(a1);
		}

		static ::System::Boolean IsCurrentTraceMissionScene(::System::UInt32 a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISCURRENTTRACEMISSIONSCENE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsCurrentTraceMissionScene_1(::System::UInt32 a1, ::RPG::GameCore::SubMissionRow* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISCURRENTTRACEMISSIONSCENE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsShowSubMissionInMap(::System::UInt32 a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISSHOWSUBMISSIONINMAP_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsShowSubMissionInMap_1(::System::UInt32 a1, ::RPG::GameCore::SubMissionRow* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISSHOWSUBMISSIONINMAP_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::MappingInfoRow* GetMappingInfoRowByID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPPINGINFOROWBYID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetNewRedDotWorldIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETNEWREDDOTWORLDIDLIST_OFFSET))();
		}

		static ::RPG::Client::MapIconAreaData* GetMapIconAreaDataByAreaID(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPICONAREADATABYAREAID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetEntityBakedInfo(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32& a4, ::System::Int32& a5, ::System::Int32& a6, ::System::Int32& a7)
		{
			return ((::System::Void(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::UInt32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETENTITYBAKEDINFO_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::RPG::Client::MapIconAreaData* GetPlayerAreaData(::RPG::Client::MapDef* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::RPG::Client::MapDef*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPLAYERAREADATA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MapIconAreaData* _ObsoleteGetPlayerAreaData(::RPG::Client::MapDef* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::RPG::Client::MapDef*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__OBSOLETEGETPLAYERAREADATA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetPlayerPositionInMap(::RPG::Client::MapDef* a1, ::UnityEngine::Vector3 a2, ::System::Int32& a3)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MapDef*, ::UnityEngine::Vector3, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPLAYERPOSITIONINMAP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetIconPositionInMap(::RPG::Client::MapDef* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::MapDef*, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETICONPOSITIONINMAP_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetPropConfigMappingInfoID(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPROPCONFIGMAPPINGINFOID_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::UInt32 GetEntranceIDByFloorID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETENTRANCEIDBYFLOORID_OFFSET))(a1);
		}

		static ::System::UInt32 GetFloorIDByEntrance(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETFLOORIDBYENTRANCE_OFFSET))(a1);
		}

		static ::System::UInt32 GetBaseFloorID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETBASEFLOORID_OFFSET))(a1);
		}

		static ::System::UInt32 GetFromEntranceIDByToEntranceID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETFROMENTRANCEIDBYTOENTRANCEID_OFFSET))(a1);
		}

		static ::RPG::GameCore::MazeFloorConnectivityRow* GetFloorConnectivityRowByToEntranceID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazeFloorConnectivityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETFLOORCONNECTIVITYROWBYTOENTRANCEID_OFFSET))(a1);
		}

		static ::System::Boolean IsInRotatableRegion(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISINROTATABLEREGION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMapAreaHide(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISMAPAREAHIDE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsCanLoadMapPropDef(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISCANLOADMAPPROPDEF_OFFSET))(a1, a2);
		}

		static ::System::Void OverrideMinimapIconTypeByMapRotation(::RPG::Client::MapMappingInfoData* a1, ::RPG::Client::NavMap::IMapDataSource* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::MapMappingInfoData*, ::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_OVERRIDEMINIMAPICONTYPEBYMAPROTATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsRotationBridge(::RPG::GameCore::PropState a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISROTATIONBRIDGE_OFFSET))(a1);
		}

		static ::System::Boolean IsPlayerInHideArea()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_ISPLAYERINHIDEAREA_OFFSET))();
		}

		static ::System::Int32 GetMapTargetAreaID(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETMAPTARGETAREAID_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::LevelNavmapArea* _GetLevelNavmapAreaByAreaID(::RPG::GameCore::LevelNavmapConfig* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::LevelNavmapArea*(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__GETLEVELNAVMAPAREABYAREAID_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsMapIconInSection(::UnityEngine::Vector3 a1, ::RPG::GameCore::LevelMinimapSection* a2, ::RPG::GameCore::LevelNavmapConfig* a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__ISMAPICONINSECTION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean _IsMapIconInRect(::UnityEngine::Vector3 a1, ::RPG::GameCore::LevelMinimapSection* a2, ::RPG::GameCore::LevelNavmapConfig* a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__ISMAPICONINRECT_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::RPG::MVector2>* GetSectionVerticesByAreaID(::RPG::GameCore::LevelNavmapConfig* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETSECTIONVERTICESBYAREAID_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsMapIconInPolygon(::UnityEngine::Vector3 a1, ::RPG::GameCore::LevelMinimapSection* a2, ::RPG::GameCore::LevelNavmapConfig* a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelNavmapConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__ISMAPICONINPOLYGON_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single _GetInLeftValue(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__GETINLEFTVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 _GetPlayerRegionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__GETPLAYERREGIONID_OFFSET))();
		}

		static ::System::UInt32 _GetRegionID(::UnityEngine::Vector3 a1)
		{
			return ((::System::UInt32(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS__GETREGIONID_OFFSET))(a1);
		}

		static ::System::Nullable_1<::UnityEngine::Vector3> GetPlayerPosition()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPUTILS_GETPLAYERPOSITION_OFFSET))();
		}
	};
}
