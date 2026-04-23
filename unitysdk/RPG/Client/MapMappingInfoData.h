#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MappingInfoShowType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_683;
class Class_1_656B4378A6148CC6;
namespace RPG::Client { class FindChestData; }
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class MapEntryRow; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace System { class String; }

#define RPG_CLIENT_MAPMAPPINGINFODATA_CREATECHEST_OFFSET UNITYSDK_OFFSET(0xA7F6FB0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA7F6600)
#define RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0xA7F6B50)
#define RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA7F59D0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GETTRACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA7F8100)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0xA7F8830)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA7F87B0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_CANTELEPORT_OFFSET UNITYSDK_OFFSET(0xA7F8240)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xA7F8810)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA7F85A0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xA7F7D50)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_FINDCHESTDATA_OFFSET UNITYSDK_OFFSET(0xA7F86F0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA7F7D90)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA7F8790)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0xA7F7DD0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7F87A0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xA7F7DB0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISTELEPORT_OFFSET UNITYSDK_OFFSET(0xA7F81F0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISTRACKING_OFFSET UNITYSDK_OFFSET(0xA7F7DE0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xA7F7E80)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xA7F7F20)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0xA7F8000)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xA7F8010)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0xA7F7F90)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0xA7F86E0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xA7F8710)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xA7F81E0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xA7F8150)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xA7F86D0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0xA7F8170)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xA7F8190)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA7F8470)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xA7F8700)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xA7F7D70)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0xA7F87D0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_PROPSTATE_OFFSET UNITYSDK_OFFSET(0xA7F81B0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_PROPTYPE_OFFSET UNITYSDK_OFFSET(0xA7F81C0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xA7F87C0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0xA7F81D0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xA7F87F0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0xA7F87E0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_SET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xA7F80F0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_SET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xA7F8720)
#define RPG_CLIENT_MAPMAPPINGINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F58B0)
#define RPG_CLIENT_MAPMAPPINGINFODATA__GETANCHORINFO_OFFSET UNITYSDK_OFFSET(0xA7F8A80)
#define RPG_CLIENT_MAPMAPPINGINFODATA__INITCHESTMAPMAPPINGINFODATA_OFFSET UNITYSDK_OFFSET(0xA7F7060)
#define RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_1_OFFSET UNITYSDK_OFFSET(0xA7F6690)
#define RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_2_OFFSET UNITYSDK_OFFSET(0xA7F6BE0)
#define RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_OFFSET UNITYSDK_OFFSET(0xA7F5A60)
#define RPG_CLIENT_MAPMAPPINGINFODATA__INITMODIFIER_OFFSET UNITYSDK_OFFSET(0xA7F79C0)
#define RPG_CLIENT_MAPMAPPINGINFODATA__OVERRIDEBYANCHOR_OFFSET UNITYSDK_OFFSET(0xA7F7860)
#define RPG_CLIENT_MAPMAPPINGINFODATA__SETNPCMAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xA7F7B80)
#define RPG_CLIENT_MAPMAPPINGINFODATA__UPDATEMAPICONAREADATA_1_OFFSET UNITYSDK_OFFSET(0xA7F8950)
#define RPG_CLIENT_MAPMAPPINGINFODATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0xA7F7810)

namespace RPG::Client
{
	inline static constexpr unsigned int MapMappingInfoData_TypeDefinitionIndex = 57952;

	class MapMappingInfoData : public ::System::Object
	{
	public:
		::System::String* _AnchorKey; // 0x10
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x18
		::RPG::Client::MapNpcDef* _MapNpcDef; // 0x20
		::RPG::GameCore::MapEntryRow* _MapEntryRow; // 0x28
		::RPG::Client::MapPropDef* _MapPropDef; // 0x30
		::Class_0_16E4307DCC419505_683* _Modifier; // 0x38
		::RPG::Client::MapDataKey* _MapDataKey; // 0x40
		::RPG::Client::MapIconAreaData* _AreaData; // 0x48
		::RPG::Client::FindChestData* _FindChestData; // 0x50
		::UnityEngine::Color _MapIconColor; // 0x58
		::System::UInt32 _MappingInfoID; // 0x68
		::System::UInt32 _NearestTeleportMappingInfoID; // 0x6C
		::System::UInt32 _GroupID; // 0x70
		::UnityEngine::Vector3 _MapRotation; // 0x74
		::System::Int32 _SectionID; // 0x80
		::System::UInt32 _IdentificationID; // 0x84
		::System::UInt32 _MapIconType; // 0x88
		::System::UInt32 _InstanceId; // 0x8C
		::UnityEngine::Vector3 _MapRowPosition; // 0x90
		::System::Int32 _MapLayer; // 0x9C
		::UnityEngine::Vector3 _MapPosition; // 0xA0
		::RPG::GameCore::PropType _PropType; // 0xAC
		::UnityEngine::Vector2 _PositionInAreaMap; // 0xB0
		::RPG::GameCore::PropState _PropState; // 0xB8
		::System::UInt32 _SubMapID; // 0xBC
		::RPG::Client::MappingInfoShowType _MappingInfoShowType; // 0xC0
		::System::Int32 _AreaID; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MapMappingInfoData* Create(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::RPG::Client::MapMappingInfoData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_OFFSET))(mapDataKey, entranceID, mapPropDef);
		}

		static ::RPG::Client::MapMappingInfoData* Create_1(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapNpcDef* mapNpcDef)
		{
			return ((::RPG::Client::MapMappingInfoData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_1_OFFSET))(mapDataKey, entranceID, mapNpcDef);
		}

		static ::RPG::Client::MapMappingInfoData* Create_2(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::Class_1_656B4378A6148CC6* mapMissionCtorInfo)
		{
			return ((::RPG::Client::MapMappingInfoData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_2_OFFSET))(mapDataKey, entranceID, mapMissionCtorInfo);
		}

		static ::RPG::Client::MapMappingInfoData* CreateChest(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapPropDef* mapPropDef, ::RPG::Client::FindChestData* findChestData, ::System::UInt32 mappingInfoID)
		{
			return ((::RPG::Client::MapMappingInfoData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*, ::RPG::Client::FindChestData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_CREATECHEST_OFFSET))(mapDataKey, entranceID, mapPropDef, findChestData, mappingInfoID);
		}

		::System::Void _InitMapMappingInfoData(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_OFFSET))(this, mapDataKey, entranceID, mapPropDef);
		}

		::System::Void _InitMapMappingInfoData_1(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapNpcDef* mapNpcDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_1_OFFSET))(this, mapDataKey, entranceID, mapNpcDef);
		}

		::System::Void _InitMapMappingInfoData_2(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::Class_1_656B4378A6148CC6* mapMissionCtorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_2_OFFSET))(this, mapDataKey, entranceID, mapMissionCtorInfo);
		}

		::System::Void _InitChestMapMappingInfoData(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapPropDef* mapPropDef, ::RPG::Client::FindChestData* findChestData, ::System::UInt32 mappingInfoID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*, ::RPG::Client::FindChestData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__INITCHESTMAPMAPPINGINFODATA_OFFSET))(this, mapDataKey, entranceID, mapPropDef, findChestData, mappingInfoID);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_PLANEID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::UInt32 get_IdentificationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_IDENTIFICATIONID_OFFSET))(this);
		}

		::System::Boolean get_IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISTRACKING_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPDATA_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPDEF_OFFSET))(this);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPLAYER_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::System::Void set_MapIconType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_SET_MAPICONTYPE_OFFSET))(this, value);
		}

		::RPG::Client::IMapIconTrackSnapshot* GetTrackSnapshot()
		{
			return ((::RPG::Client::IMapIconTrackSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GETTRACKSNAPSHOT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPROTATION_OFFSET))(this);
		}

		::RPG::GameCore::PropState get_PropState()
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_PROPSTATE_OFFSET))(this);
		}

		::RPG::GameCore::PropType get_PropType()
		{
			return ((::RPG::GameCore::PropType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_PROPTYPE_OFFSET))(this);
		}

		::RPG::Client::MappingInfoShowType get_ShowType()
		{
			return ((::RPG::Client::MappingInfoShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_SHOWTYPE_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Boolean get_IsTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISTELEPORT_OFFSET))(this);
		}

		::System::Boolean get_CanTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_CANTELEPORT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::MapPropDef* get_MapPropDef()
		{
			return ((::RPG::Client::MapPropDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPROPDEF_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* get_MapNpcDef()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPNPCDEF_OFFSET))(this);
		}

		::RPG::Client::FindChestData* get_FindChestData()
		{
			return ((::RPG::Client::FindChestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_FINDCHESTDATA_OFFSET))(this);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_MappingInfoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_SET_MAPPINGINFOID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_AREAID_OFFSET))(this);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_SECTIONID_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::System::UInt32 get_SubMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_SUBMAPID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::Client::MapIconAreaData* get_AreaData()
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_AREADATA_OFFSET))(this);
		}

		::System::Void _SetNPCMapIconType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__SETNPCMAPICONTYPE_OFFSET))(this);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}

		::System::Void _UpdateMapIconAreaData_1(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__UPDATEMAPICONAREADATA_1_OFFSET))(this, groupID, instanceID);
		}

		::System::Void _OverrideByAnchor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__OVERRIDEBYANCHOR_OFFSET))(this);
		}

		::RPG::Client::MapAnchorDef* _GetAnchorInfo()
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__GETANCHORINFO_OFFSET))(this);
		}

		::System::Void _InitModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__INITMODIFIER_OFFSET))(this);
		}
	};
}
