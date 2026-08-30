#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A1EDFD8801F68886;
class Class_1_E7E7FCFD10613C60;
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace RPG::GameCore { class MiniMapIconRow; }
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD943360)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0xD942C20)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xD942C70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xD943B80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD9437A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xD942B30)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ENTITYROTATION_OFFSET UNITYSDK_OFFSET(0xD943080)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ENTITYSCALE_OFFSET UNITYSDK_OFFSET(0xD943120)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xD943C80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_FACE_OFFSET UNITYSDK_OFFSET(0xD942BB0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xD9432D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ISCONNECTID_OFFSET UNITYSDK_OFFSET(0xD943510)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xD943C40)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ISTRACKING_OFFSET UNITYSDK_OFFSET(0xD9422E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0xD943D70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xD9433B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xD943490)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xD943550)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xD942CC0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD943620)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_PATH_OFFSET UNITYSDK_OFFSET(0xD9431C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xD943AC0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_SUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD9434F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET__ICONROW_OFFSET UNITYSDK_OFFSET(0xD943260)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET__MAPTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD942E20)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_SET_SUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD943500)
#define RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON__CTOR_OFFSET UNITYSDK_OFFSET(0xD93BBA0)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int MissionIcon_TypeDefinitionIndex = 74547;

	class MissionIcon : public ::System::Object
	{
	public:
		::RPG::Client::SubMissionData* _SubMissionData_k__BackingField; // 0x10
		::Class_1_A1EDFD8801F68886* _CheatSheet; // 0x18
		::Class_1_E7E7FCFD10613C60* _Surface; // 0x20

		::System::Void _ctor(::Class_1_A1EDFD8801F68886* a1, ::Class_1_E7E7FCFD10613C60* a2, ::RPG::Client::SubMissionData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::Class_1_E7E7FCFD10613C60*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ENTITYID_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::Face* get_Face()
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_FACE_OFFSET))(this);
		}

		::System::UInt32 get_ContainerGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_CONTAINERGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ContainerInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_CONTAINERINSTANCEID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_EntityRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ENTITYROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_EntityScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ENTITYSCALE_OFFSET))(this);
		}

		::Struct_2_EAC1BB0F093534A5 get__MapTransform()
		{
			return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET__MAPTRANSFORM_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_PATH_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_MAPICONTYPE_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* get_SubMissionData()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_SUBMISSIONDATA_OFFSET))(this);
		}

		::System::Void set_SubMissionData(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_SET_SUBMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsConnectID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ISCONNECTID_OFFSET))(this);
		}

		::System::Boolean get_IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ISTRACKING_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_ENTRANCEID_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* get_Cartography()
		{
			return ((::RPG::Client::NavMap::FiveDim::CartographyFiveDim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET_CARTOGRAPHY_OFFSET))(this);
		}

		::RPG::GameCore::MiniMapIconRow* get__IconRow()
		{
			return ((::RPG::GameCore::MiniMapIconRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_MISSIONICON_GET__ICONROW_OFFSET))(this);
		}
	};
}
