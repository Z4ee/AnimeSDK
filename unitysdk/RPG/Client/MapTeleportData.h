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

#define RPG_CLIENT_MAPTELEPORTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBEEFC20)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0xBEF0550)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xBEF0420)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_CANTELEPORT_OFFSET UNITYSDK_OFFSET(0xBEF02C0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xBEF0470)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBEF0520)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xBEF0120)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xBEF0490)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBEF04D0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0xBEF0240)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xBEF04E0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBEF0110)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xBEF04B0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ISTELEPORT_OFFSET UNITYSDK_OFFSET(0xBEF0270)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPAREATYPE_OFFSET UNITYSDK_OFFSET(0xBEF0430)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xBEF0130)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0xBEF01D0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0xBEF0370)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xBEF0380)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0xBEF0360)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xBEF0250)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xBEF0260)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xBEF0390)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPROPDEF_OFFSET UNITYSDK_OFFSET(0xBEF0410)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0xBEF03B0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xBEF03D0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBEF04F0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0xBEF0440)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_PROPSTATE_OFFSET UNITYSDK_OFFSET(0xBEF03F0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_PROPTYPE_OFFSET UNITYSDK_OFFSET(0xBEF0400)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xBEF0350)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xBEF0450)
#define RPG_CLIENT_MAPTELEPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBEEFB30)
#define RPG_CLIENT_MAPTELEPORTDATA__INITMAPTELEPORTDATA_OFFSET UNITYSDK_OFFSET(0xBEEFDB0)
#define RPG_CLIENT_MAPTELEPORTDATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0xBEF0560)

namespace RPG::Client
{
	inline static constexpr unsigned int MapTeleportData_TypeDefinitionIndex = 58872;

	class MapTeleportData : public ::System::Object
	{
	public:
		::RPG::Client::MapIconAreaData* _AreaData; // 0x10
		::RPG::Client::MapPropDef* _MapPropDef; // 0x18
		::System::String* _AnchorKey; // 0x20
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x28
		::RPG::Client::MapDataKey* _MapDataKey; // 0x30
		::System::Int32 _SectionID; // 0x38
		::RPG::GameCore::PropType _PropType; // 0x3C
		::UnityEngine::Vector3 _MapPosition; // 0x40
		::System::UInt32 _IdentificationID; // 0x4C
		::RPG::GameCore::PropState _PropState; // 0x50
		::System::UInt32 _GroupID; // 0x54
		::System::UInt32 _MapIconType; // 0x58
		::System::UInt32 _ServerEntityID; // 0x5C
		::RPG::GameCore::MinimapAreaType _MapAreaType; // 0x60
		::System::Int32 _AreaID; // 0x64
		::System::Int32 _MapLayer; // 0x68
		::System::UInt32 _MappingInfoID; // 0x6C
		::System::UInt32 _EntranceID; // 0x70
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x74
		::UnityEngine::Vector3 _MapRotation; // 0x7C
		::System::UInt32 _InstanceId; // 0x88
		::UnityEngine::Color _MapIconColor; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MapTeleportData* Create(::RPG::Client::MapDataKey* a1, ::System::UInt32 a2, ::RPG::Client::MapPropDef* a3)
		{
			return ((::RPG::Client::MapTeleportData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_CREATE_OFFSET))(a1, a2, a3);
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

		::System::Void _InitMapTeleportData(::RPG::Client::MapDataKey* a1, ::System::UInt32 a2, ::RPG::Client::MapPropDef* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA__INITMAPTELEPORTDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}
	};
}
