#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class MappingInfoRow; }

#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_CREATE_OFFSET UNITYSDK_OFFSET(0xCA12300)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GETTRACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCA12F80)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xCA12CC0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xCA12E30)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCA12F50)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xCA12E70)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCA12E90)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCA12D20)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCA12D40)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xCA12E50)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xCA12B40)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0xCA12F10)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xCA12EB0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0xCA12D00)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xCA12ED0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xCA12EF0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xCA12D80)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0xCA12DB0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xCA12DE0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCA12F20)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0xCA12D60)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xCA12CE0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xCA12E10)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SETAUTOCANCELTRACK_OFFSET UNITYSDK_OFFSET(0xCA12C70)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xCA12CD0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xCA12E40)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xCA12E80)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCA12EA0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCA12D30)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCA12D50)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xCA12E60)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xCA12EC0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0xCA12D10)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xCA12F00)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xCA12DA0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0xCA12DD0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xCA12E00)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0xCA12D70)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xCA12CF0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xCA12E20)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__CTOR_OFFSET UNITYSDK_OFFSET(0xCA12570)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__INITENTITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCA127C0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__INITMAPICONDATA_OFFSET UNITYSDK_OFFSET(0xCA12610)

namespace RPG::Client
{
	inline static constexpr unsigned int TempShowBigMapEntityIcon_TypeDefinitionIndex = 58888;

	class TempShowBigMapEntityIcon : public ::System::Object
	{
	public:
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow_k__BackingField; // 0x10
		::System::Int32 _AreaID_k__BackingField; // 0x18
		::System::UInt32 _InstanceId_k__BackingField; // 0x1C
		::System::UInt32 _GroupID_k__BackingField; // 0x20
		::System::Boolean _IsOnlinePlayRoom_k__BackingField; // 0x24
		::System::Boolean _IsAutoCancelTrack; // 0x25
		::System::UInt32 _ContentID_k__BackingField; // 0x28
		::UnityEngine::Vector3 _MapRawPosition_k__BackingField; // 0x2C
		::System::UInt32 _EntranceID_k__BackingField; // 0x38
		::UnityEngine::Color _MapIconColor_k__BackingField; // 0x3C
		::System::UInt32 _FloorID_k__BackingField; // 0x4C
		::UnityEngine::Vector3 _MapRotation_k__BackingField; // 0x50
		::UnityEngine::Vector2 _PositionInAreaMap_k__BackingField; // 0x5C
		::System::UInt32 _StoryLineID_k__BackingField; // 0x64
		::System::Int32 _MapLayer_k__BackingField; // 0x68
		::UnityEngine::Vector3 _MapPosition_k__BackingField; // 0x6C
		::System::Int32 _SectionID_k__BackingField; // 0x78
		::System::UInt32 _MapIconType_k__BackingField; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TempShowBigMapEntityIcon* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::Boolean a8)
		{
			return ((::RPG::Client::TempShowBigMapEntityIcon*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _InitMapIconData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__INITMAPICONDATA_OFFSET))(this);
		}

		::System::Boolean _InitEntityTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__INITENTITYTRANSFORM_OFFSET))(this);
		}

		::System::Void SetAutoCancelTrack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SETAUTOCANCELTRACK_OFFSET))(this, a1);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_AREAID_OFFSET))(this, a1);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_SECTIONID_OFFSET))(this, a1);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPLAYER_OFFSET))(this);
		}

		::System::Void set_MapLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::System::Void set_PositionInAreaMap(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_POSITIONINAREAMAP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPOSITION_OFFSET))(this);
		}

		::System::Void set_MapPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::System::Void set_MapRawPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPRAWPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPROTATION_OFFSET))(this);
		}

		::System::Void set_MapRotation(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPROTATION_OFFSET))(this, a1);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_STORYLINEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_CONTENTID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void set_IsOnlinePlayRoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_ISONLINEPLAYROOM_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::Void set_EntranceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_ENTRANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPICONTYPE_OFFSET))(this);
		}

		::System::Void set_MapIconType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPICONTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Void set_MappingInfoRow(::RPG::GameCore::MappingInfoRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPPINGINFOROW_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::IMapIconTrackSnapshot* GetTrackSnapshot()
		{
			return ((::RPG::Client::IMapIconTrackSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GETTRACKSNAPSHOT_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPDATA_OFFSET))(this);
		}
	};
}
