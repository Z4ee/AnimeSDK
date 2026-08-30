#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/CartographyBaseData.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapMissionData; }
namespace RPG::Client { class MapOutControlTeamLeaderData; }
namespace RPG::Client { class MapTeleportData; }
namespace RPG::Client { class MapTrackMonsterData; }
namespace RPG::Client::NavMap { class AreaData; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GETDEFAULTLAYER_OFFSET UNITYSDK_OFFSET(0x1A323DC0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1A3243B0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_BACKGROUNDMAPSPRITEPATH_OFFSET UNITYSDK_OFFSET(0x1A324B10)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_BACKGROUNDSIZE_OFFSET UNITYSDK_OFFSET(0x1A324120)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_DEFAULTCENTERPOSINMAP_OFFSET UNITYSDK_OFFSET(0x1A324010)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_INPUTSCALEMAX_OFFSET UNITYSDK_OFFSET(0x1A323EF0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_INPUTSCALEMIN_OFFSET UNITYSDK_OFFSET(0x1A323F80)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A323D60)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_LAYERLIST_OFFSET UNITYSDK_OFFSET(0x1A323C60)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_MAPMAPPINGINFODATALIST_OFFSET UNITYSDK_OFFSET(0x1A324890)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_MAPMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0x1A324810)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_MAPSCALE_OFFSET UNITYSDK_OFFSET(0x1A323E30)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_MAPTELEPORTDATALIST_OFFSET UNITYSDK_OFFSET(0x1A3246B0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_MAPTRACKMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0x1A324990)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_OUTCONTROLTEAMLEADERICON_OFFSET UNITYSDK_OFFSET(0x1A324A90)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_SUBNAVMAPLINKDATALIST_OFFSET UNITYSDK_OFFSET(0x1A324A10)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_TEMPSHOWICONLIST_OFFSET UNITYSDK_OFFSET(0x1A324910)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET__NAVMAPAREADATA_OFFSET UNITYSDK_OFFSET(0x1A323CE0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A323590)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int Cartography2DArea_TypeDefinitionIndex = 74375;

	class Cartography2DArea : public ::RPG::Client::NavMap::CartographyBaseData
	{
	public:
		::System::UInt32 _OverrideDefaultLayer; // 0x48

		::System::Void _ctor(::RPG::Client::NavMap::SubNavMapData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA__CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_LayerList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_LAYERLIST_OFFSET))(this);
		}

		::System::Int32 get_LayerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_LAYERCOUNT_OFFSET))(this);
		}

		::System::Int32 GetDefaultLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GETDEFAULTLAYER_OFFSET))(this);
		}

		::System::Single get_MapScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_MAPSCALE_OFFSET))(this);
		}

		::System::Single get_InputScaleMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_INPUTSCALEMAX_OFFSET))(this);
		}

		::System::Single get_InputScaleMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_INPUTSCALEMIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DefaultCenterPosInMap()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_DEFAULTCENTERPOSINMAP_OFFSET))(this);
		}

		::RPG::MVector3 get_BackgroundSize()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_BACKGROUNDSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLocalPosition(::UnityEngine::Vector2 a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GETLOCALPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTeleportData*>* get_MapTeleportDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTeleportData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_MAPTELEPORTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMissionData*>* get_MapMissionDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_MAPMISSIONDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* get_MapMappingInfoDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_MAPMAPPINGINFODATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IBigMapIcon*>* get_TempShowIconList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IBigMapIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_TEMPSHOWICONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTrackMonsterData*>* get_MapTrackMonsterDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTrackMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_MAPTRACKMONSTERDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* get_SubNavMapLinkDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_SUBNAVMAPLINKDATALIST_OFFSET))(this);
		}

		::RPG::Client::MapOutControlTeamLeaderData* get_OutControlTeamLeaderIcon()
		{
			return ((::RPG::Client::MapOutControlTeamLeaderData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_OUTCONTROLTEAMLEADERICON_OFFSET))(this);
		}

		::System::String* get_BackgroundMapSpritePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET_BACKGROUNDMAPSPRITEPATH_OFFSET))(this);
		}

		::RPG::Client::NavMap::AreaData* get__NavMapAreaData()
		{
			return ((::RPG::Client::NavMap::AreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DAREA_GET__NAVMAPAREADATA_OFFSET))(this);
		}
	};
}
