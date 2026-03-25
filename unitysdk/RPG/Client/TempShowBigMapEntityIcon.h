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

#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_CREATE_OFFSET UNITYSDK_OFFSET(0xA583E10)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GETTRACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA584A20)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA584760)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xA5848D0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA5849F0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xA584910)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xA5848F0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA584930)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA5847C0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA5847E0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xA584670)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0xA5849B0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xA584950)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0xA5847A0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xA584970)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xA584990)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xA584820)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0xA584850)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xA584880)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA5849C0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0xA584800)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xA584780)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xA5848B0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SETAUTOCANCELTRACK_OFFSET UNITYSDK_OFFSET(0xA584710)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xA584770)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xA5848E0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xA584920)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xA584900)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA584940)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA5847D0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA5847F0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xA584960)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0xA5847B0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xA5849A0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xA584840)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0xA584870)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0xA5848A0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0xA584810)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0xA584790)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xA5848C0)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__CTOR_OFFSET UNITYSDK_OFFSET(0xA584060)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__INITENTITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA584320)
#define RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__INITMAPICONDATA_OFFSET UNITYSDK_OFFSET(0xA584100)

namespace RPG::Client
{
	inline static constexpr unsigned int TempShowBigMapEntityIcon_TypeDefinitionIndex = 51087;

	class TempShowBigMapEntityIcon : public ::System::Object
	{
	public:
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow_k__BackingField; // 0x10
		::System::Int32 _AreaID_k__BackingField; // 0x18
		::System::UInt32 _MapIconType_k__BackingField; // 0x1C
		::System::Boolean _IsAutoCancelTrack; // 0x20
		::UnityEngine::Vector3 _MapRawPosition_k__BackingField; // 0x24
		::System::UInt32 _GroupID_k__BackingField; // 0x30
		::UnityEngine::Color _MapIconColor_k__BackingField; // 0x34
		::System::UInt32 _InstanceId_k__BackingField; // 0x44
		::System::Int32 _MapLayer_k__BackingField; // 0x48
		::UnityEngine::Vector2 _PositionInAreaMap_k__BackingField; // 0x4C
		::UnityEngine::Vector3 _MapPosition_k__BackingField; // 0x54
		::System::Int32 _SectionID_k__BackingField; // 0x60
		::System::UInt32 _EntranceID_k__BackingField; // 0x64
		::System::UInt32 _ContentID_k__BackingField; // 0x68
		::System::UInt32 _FloorID_k__BackingField; // 0x6C
		::System::UInt32 _DimensionID_k__BackingField; // 0x70
		::UnityEngine::Vector3 _MapRotation_k__BackingField; // 0x74
		::System::UInt32 _StoryLineID_k__BackingField; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TempShowBigMapEntityIcon* Create(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 instanceId, ::System::UInt32 mapIconType, ::System::UInt32 mappingInfoID)
		{
			return ((::RPG::Client::TempShowBigMapEntityIcon*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_CREATE_OFFSET))(storyLineID, contentID, floorID, groupID, instanceId, mapIconType, mappingInfoID);
		}

		::System::Void _InitMapIconData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__INITMAPICONDATA_OFFSET))(this);
		}

		::System::Boolean _InitEntityTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON__INITENTITYTRANSFORM_OFFSET))(this);
		}

		::System::Void SetAutoCancelTrack(::System::Boolean autoCancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SETAUTOCANCELTRACK_OFFSET))(this, autoCancel);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_AREAID_OFFSET))(this, value);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_SECTIONID_OFFSET))(this, value);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPLAYER_OFFSET))(this);
		}

		::System::Void set_MapLayer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPLAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_GROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_INSTANCEID_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::System::Void set_PositionInAreaMap(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_POSITIONINAREAMAP_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPOSITION_OFFSET))(this);
		}

		::System::Void set_MapPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::System::Void set_MapRawPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPRAWPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPROTATION_OFFSET))(this);
		}

		::System::Void set_MapRotation(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPROTATION_OFFSET))(this, value);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_STORYLINEID_OFFSET))(this, value);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_CONTENTID_OFFSET))(this, value);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::Void set_EntranceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_ENTRANCEID_OFFSET))(this, value);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::Void set_DimensionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_DIMENSIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_FLOORID_OFFSET))(this, value);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPICONTYPE_OFFSET))(this);
		}

		::System::Void set_MapIconType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPICONTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Void set_MappingInfoRow(::RPG::GameCore::MappingInfoRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPSHOWBIGMAPENTITYICON_SET_MAPPINGINFOROW_OFFSET))(this, value);
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
