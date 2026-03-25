#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MappingInfoShowType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class MappingInfoRow; }

#define RPG_CLIENT_MAPTRACKMONSTERDATA_GETTRACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9B0F740)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0x9B0FA40)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9B0F930)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9B0FA60)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9B0F9E0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x9B0F970)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9B0F590)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9B0F5A0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9B0F6E0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x9B0F6D0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x9B0F6F0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTELEPORT_OFFSET UNITYSDK_OFFSET(0x9B0F810)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTRACKING_OFFSET UNITYSDK_OFFSET(0x9B0F860)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPAREATYPE_OFFSET UNITYSDK_OFFSET(0x9B0F950)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x9B0F5C0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0x9B0F660)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x9B0F720)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x9B0F730)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x9B0F710)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0x9B0F920)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9B0F700)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x9B0F800)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x9B0F7A0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0x9B0F7C0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x9B0F7E0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B0F980)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9B0F910)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0x9B0F960)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x9B0F940)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x9B0F790)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9B0FA50)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_INITMAPTRACKMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x9B0EFA0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9B0F5B0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_TRYOVERRIDEMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x9B0F510)
#define RPG_CLIENT_MAPTRACKMONSTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B0EEC0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0x9B0F3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapTrackMonsterData_TypeDefinitionIndex = 51075;

	class MapTrackMonsterData : public ::System::Object
	{
	public:
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x10
		::RPG::Client::MapIconAreaData* _AreaData; // 0x18
		::RPG::Client::MapNpcDef* _MapNpcDef; // 0x20
		::System::UInt32 _IdentificationID; // 0x28
		::System::UInt32 _NearestTeleportMappingInfoID; // 0x2C
		::System::UInt32 _InstanceId; // 0x30
		::System::UInt32 _MappingInfoID; // 0x34
		::UnityEngine::Vector3 _MapRotation; // 0x38
		::RPG::GameCore::MinimapAreaType _MapAreaType; // 0x44
		::System::Int32 _AreaID; // 0x48
		::System::UInt32 _ContentID; // 0x4C
		::System::UInt32 _StoryLineID; // 0x50
		::UnityEngine::Vector3 _MapPosition; // 0x54
		::System::UInt32 _GroupID; // 0x60
		::System::Int32 _SectionID; // 0x64
		::RPG::Client::MappingInfoShowType _MappingInfoShowType; // 0x68
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x6C
		::UnityEngine::Color _MapIconColor; // 0x74
		::System::UInt32 _FloorID_k__BackingField; // 0x84
		::System::UInt32 _OriginMappingInfoID; // 0x88
		::System::UInt32 _MapIconType; // 0x8C
		::System::UInt32 _EntranceID; // 0x90
		::System::Int32 _MapLayer; // 0x94
		::System::UInt32 _DimensionID; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA__CTOR_OFFSET))(this);
		}

		::System::Void InitMapTrackMonsterData(::System::UInt32 entranceID, ::System::UInt32 dimensionID, ::System::UInt32 storyLineID, ::System::UInt32 contentID, ::RPG::Client::MapNpcDef* mapNpcDef)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_INITMAPTRACKMONSTERDATA_OFFSET))(this, entranceID, dimensionID, storyLineID, contentID, mapNpcDef);
		}

		::System::Void TryOverrideMappingInfo(::System::UInt32 mapInfoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_TRYOVERRIDEMAPPINGINFO_OFFSET))(this, mapInfoID);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_SET_FLOORID_OFFSET))(this, value);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDATA_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDEF_OFFSET))(this);
		}

		::System::UInt32 get_IdentificationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_IDENTIFICATIONID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPLAYER_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::RPG::Client::IMapIconTrackSnapshot* GetTrackSnapshot()
		{
			return ((::RPG::Client::IMapIconTrackSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GETTRACKSNAPSHOT_OFFSET))(this);
		}

		::RPG::Client::MappingInfoShowType get_ShowType()
		{
			return ((::RPG::Client::MappingInfoShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SHOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPROTATION_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Boolean get_IsTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTELEPORT_OFFSET))(this);
		}

		::System::Boolean get_IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTRACKING_OFFSET))(this);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* get_MapNpcDef()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPNPCDEF_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SECTIONID_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_MapAreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPAREATYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DIMENSIONID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::MapIconAreaData* get_AreaData()
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREADATA_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}
	};
}
