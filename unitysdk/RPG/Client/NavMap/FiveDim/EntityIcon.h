#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_99D526797741C2F2;
class Class_1_E7E7FCFD10613C60;
namespace RPG::Client { class FindChestData; }
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace RPG::GameCore { class MiniMapIconRow; }
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GETTRACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9DFE7D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0x9DFE200)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0x9DFDAB0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x9DFDB20)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9DFE270)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9DFE750)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x9DFE4D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x9DFDA50)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTITYROTATION_OFFSET UNITYSDK_OFFSET(0x9DFDF90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTITYSCALE_OFFSET UNITYSDK_OFFSET(0x9DFE010)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9DFE2F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_FACE_OFFSET UNITYSDK_OFFSET(0x9DFDB90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_FINDCHESTDATA_OFFSET UNITYSDK_OFFSET(0x9DFEE60)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9DFE3A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISFOLLOWENTITYROTATION_OFFSET UNITYSDK_OFFSET(0x9DFED10)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISFOLLOWENTITYSCALE_OFFSET UNITYSDK_OFFSET(0x9DFED80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISFOLLOWMAPSCALE_OFFSET UNITYSDK_OFFSET(0x9DFECA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ISSHOWINFOG_OFFSET UNITYSDK_OFFSET(0x9DFEC30)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x9DFE630)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x9DFE590)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9DFE5B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x9DFE5D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x9DFDBE0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9DFE6D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9DFE0B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x9DFEDF0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9DFE180)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET__ICONROW_OFFSET UNITYSDK_OFFSET(0x9DFE120)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET__MAPTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9DFDD40)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_FINDCHESTDATA_OFFSET UNITYSDK_OFFSET(0x9DFEE70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x9DFE5A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9DFE5C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON__CTOR_OFFSET UNITYSDK_OFFSET(0x9DFC0C0)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int EntityIcon_TypeDefinitionIndex = 61376;

	class EntityIcon : public ::System::Object
	{
	public:
		::RPG::Client::FindChestData* _FindChestData_k__BackingField; // 0x10
		::Class_1_E7E7FCFD10613C60* _Surface; // 0x18
		::Class_1_99D526797741C2F2* _CheatSheet; // 0x20
		::System::UInt32 _MappingInfoID_k__BackingField; // 0x28
		::System::UInt32 _MapIconType_k__BackingField; // 0x2C

		::System::Void _ctor(::Class_1_99D526797741C2F2* cheatSheet, ::Class_1_E7E7FCFD10613C60* surface, ::System::UInt32 iconType, ::System::UInt32 mappingInfoID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99D526797741C2F2*, ::Class_1_E7E7FCFD10613C60*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON__CTOR_OFFSET))(this, cheatSheet, surface, iconType, mappingInfoID);
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

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPICONTYPE_OFFSET))(this);
		}

		::System::Void set_MapIconType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_MAPICONTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_MappingInfoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_MAPPINGINFOID_OFFSET))(this, value);
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

		::System::Void set_FindChestData(::RPG::Client::FindChestData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FindChestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_ENTITYICON_SET_FINDCHESTDATA_OFFSET))(this, value);
		}
	};
}
