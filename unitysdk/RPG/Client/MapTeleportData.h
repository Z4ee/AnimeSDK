#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace System { class String; }

#define RPG_CLIENT_MAPTELEPORTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA8077B0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0xA8080B0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA807F80)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_CANTELEPORT_OFFSET UNITYSDK_OFFSET(0xA807E20)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xA807FD0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA808080)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xA807C80)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA807FF0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA808030)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0xA807DA0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA808040)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA807C70)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xA808010)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ISTELEPORT_OFFSET UNITYSDK_OFFSET(0xA807DD0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPAREATYPE_OFFSET UNITYSDK_OFFSET(0xA807F90)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xA807C90)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xA807D30)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0xA807ED0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xA807EE0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0xA807EC0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xA807DB0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xA807DC0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xA807EF0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xA807F70)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0xA807F10)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xA807F30)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA808050)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0xA807FA0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_PROPSTATE_OFFSET UNITYSDK_OFFSET(0xA807F50)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_PROPTYPE_OFFSET UNITYSDK_OFFSET(0xA807F60)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xA807EB0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xA807FB0)
#define RPG_CLIENT_MAPTELEPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA8076B0)
#define RPG_CLIENT_MAPTELEPORTDATA__INITMAPTELEPORTDATA_OFFSET UNITYSDK_OFFSET(0xA807910)
#define RPG_CLIENT_MAPTELEPORTDATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0xA8080C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapTeleportData_TypeDefinitionIndex = 57956;

	class MapTeleportData : public ::System::Object
	{
	public:
		::RPG::Client::MapDataKey* _MapDataKey; // 0x10
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x18
		::RPG::Client::MapIconAreaData* _AreaData; // 0x20
		::System::String* _AnchorKey; // 0x28
		::RPG::Client::MapPropDef* _MapPropDef; // 0x30
		::System::Int32 _AreaID; // 0x38
		::System::UInt32 _GroupID; // 0x3C
		::RPG::GameCore::MinimapAreaType _MapAreaType; // 0x40
		::UnityEngine::Vector3 _MapPosition; // 0x44
		::RPG::GameCore::PropType _PropType; // 0x50
		::UnityEngine::Color _MapIconColor; // 0x54
		::System::UInt32 _EntranceID; // 0x64
		::System::UInt32 _MappingInfoID; // 0x68
		::UnityEngine::Vector3 _MapRotation; // 0x6C
		::System::UInt32 _MapIconType; // 0x78
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x7C
		::System::UInt32 _IdentificationID; // 0x84
		::System::Int32 _MapLayer; // 0x88
		::System::Int32 _SectionID; // 0x8C
		::System::UInt32 _InstanceId; // 0x90
		::RPG::GameCore::PropState _PropState; // 0x94
		::System::UInt32 _ServerEntityID; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MapTeleportData* Create(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::RPG::Client::MapTeleportData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_CREATE_OFFSET))(mapDataKey, entranceID, mapPropDef);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_ENTRANCEID_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPDATA_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPDEF_OFFSET))(this);
		}

		::System::UInt32 get_IdentificationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_IDENTIFICATIONID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Boolean get_IsTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_ISTELEPORT_OFFSET))(this);
		}

		::System::Boolean get_CanTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_CANTELEPORT_OFFSET))(this);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_SECTIONID_OFFSET))(this);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPLAYER_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPROTATION_OFFSET))(this);
		}

		::RPG::GameCore::PropState get_PropState()
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_PROPSTATE_OFFSET))(this);
		}

		::RPG::GameCore::PropType get_PropType()
		{
			return ((::RPG::GameCore::PropType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_PROPTYPE_OFFSET))(this);
		}

		::RPG::Client::MapPropDef* get_MapPropDef()
		{
			return ((::RPG::Client::MapPropDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPROPDEF_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_AREAID_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_MapAreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPAREATYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_INSTANCEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::MapIconAreaData* get_AreaData()
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_AREADATA_OFFSET))(this);
		}

		::System::Void _InitMapTeleportData(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA__INITMAPTELEPORTDATA_OFFSET))(this, mapDataKey, entranceID, mapPropDef);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}
	};
}
