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
namespace RPG::Client { class FindChestData; }
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace RPG::GameCore { class MiniMapIconRow; }
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GETTRACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD93F220)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD93EC50)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0xD93E4A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xD93E4F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xD93ECA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD93F160)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xD93E420)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTITYROTATION_OFFSET UNITYSDK_OFFSET(0xD93E970)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTITYSCALE_OFFSET UNITYSDK_OFFSET(0xD93E9F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xD93EDA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_FACE_OFFSET UNITYSDK_OFFSET(0xD93E540)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_FINDCHESTDATA_OFFSET UNITYSDK_OFFSET(0xD93FA00)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xD93EE90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISFOLLOWENTITYROTATION_OFFSET UNITYSDK_OFFSET(0xD93F820)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISFOLLOWENTITYSCALE_OFFSET UNITYSDK_OFFSET(0xD93F8C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISFOLLOWMAPSCALE_OFFSET UNITYSDK_OFFSET(0xD93F780)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xD93ED60)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISSHOWINFOG_OFFSET UNITYSDK_OFFSET(0xD93F6E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0xD93EFC0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xD93EF20)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xD93EF40)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xD93EF60)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0xD93E5B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD93F0A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_PATH_OFFSET UNITYSDK_OFFSET(0xD93EA90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xD93F960)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xD93EB90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET__ICONROW_OFFSET UNITYSDK_OFFSET(0xD93EB30)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET__MAPTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD93E710)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_FINDCHESTDATA_OFFSET UNITYSDK_OFFSET(0xD93FA10)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xD93EF30)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xD93EF50)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON__CTOR_OFFSET UNITYSDK_OFFSET(0xD93BBB0)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int EntityIcon_TypeDefinitionIndex = 74524;

	class EntityIcon : public ::System::Object
	{
	public:
		::RPG::Client::FindChestData* _FindChestData_k__BackingField; // 0x10
		::Class_1_A1EDFD8801F68886* _CheatSheet; // 0x18
		::Class_1_E7E7FCFD10613C60* _Surface; // 0x20
		::System::UInt32 _MapIconType_k__BackingField; // 0x28
		::System::UInt32 _MappingInfoID_k__BackingField; // 0x2C

		::System::Void _ctor(::Class_1_A1EDFD8801F68886* a1, ::Class_1_E7E7FCFD10613C60* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A1EDFD8801F68886*, ::Class_1_E7E7FCFD10613C60*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTITYID_OFFSET))(this);
		}

		::System::UInt32 get_ContainerGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CONTAINERGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ContainerInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CONTAINERINSTANCEID_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::Face* get_Face()
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_FACE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_EntityRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTITYROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_EntityScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTITYSCALE_OFFSET))(this);
		}

		::Struct_2_EAC1BB0F093534A5 get__MapTransform()
		{
			return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET__MAPTRANSFORM_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_PATH_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPICONTYPE_OFFSET))(this);
		}

		::System::Void set_MapIconType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_MAPICONTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_MappingInfoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_MAPPINGINFOID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::IMapIconTrackSnapshot* GetTrackSnapshot()
		{
			return ((::RPG::Client::IMapIconTrackSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GETTRACKSNAPSHOT_OFFSET))(this);
		}

		::System::Boolean get_IsShowInFog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISSHOWINFOG_OFFSET))(this);
		}

		::System::Boolean get_IsFollowMapScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISFOLLOWMAPSCALE_OFFSET))(this);
		}

		::System::Boolean get_IsFollowEntityRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISFOLLOWENTITYROTATION_OFFSET))(this);
		}

		::System::Boolean get_IsFollowEntityScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISFOLLOWENTITYSCALE_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* get_Cartography()
		{
			return ((::RPG::Client::NavMap::FiveDim::CartographyFiveDim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CARTOGRAPHY_OFFSET))(this);
		}

		::RPG::GameCore::MiniMapIconRow* get__IconRow()
		{
			return ((::RPG::GameCore::MiniMapIconRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET__ICONROW_OFFSET))(this);
		}

		::RPG::Client::FindChestData* get_FindChestData()
		{
			return ((::RPG::Client::FindChestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_FINDCHESTDATA_OFFSET))(this);
		}

		::System::Void set_FindChestData(::RPG::Client::FindChestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FindChestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_FINDCHESTDATA_OFFSET))(this, a1);
		}
	};
}
