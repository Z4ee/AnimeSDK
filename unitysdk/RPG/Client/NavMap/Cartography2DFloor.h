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
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GETDEFAULTLAYER_OFFSET UNITYSDK_OFFSET(0x18EB3200)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x18EB27E0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_BACKGROUNDMAPSPRITEPATH_OFFSET UNITYSDK_OFFSET(0x18EB3170)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_BACKGROUNDSIZE_OFFSET UNITYSDK_OFFSET(0x18EB2C40)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_DEFAULTCENTERPOSINMAP_OFFSET UNITYSDK_OFFSET(0x18EB3060)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_INPUTSCALEMAX_OFFSET UNITYSDK_OFFSET(0x18EB2F40)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_INPUTSCALEMIN_OFFSET UNITYSDK_OFFSET(0x18EB2FD0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x18EB26F0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_LAYERLIST_OFFSET UNITYSDK_OFFSET(0x18EB2750)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPMAPPINGINFODATALIST_OFFSET UNITYSDK_OFFSET(0x18EB3350)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0x18EB32D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPSCALE_OFFSET UNITYSDK_OFFSET(0x18EB2EB0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPTELEPORTDATALIST_OFFSET UNITYSDK_OFFSET(0x18EB3250)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPTRACKMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0x18EB3450)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_OUTCONTROLTEAMLEADERICON_OFFSET UNITYSDK_OFFSET(0x18EB3550)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_SUBNAVMAPLINKDATALIST_OFFSET UNITYSDK_OFFSET(0x18EB34D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_TEMPSHOWICONLIST_OFFSET UNITYSDK_OFFSET(0x18EB33D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18EB2180)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB1F50)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__INITAREA_1_OFFSET UNITYSDK_OFFSET(0x18EB1F80)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__INITAREA_OFFSET UNITYSDK_OFFSET(0x18EB21B0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int Cartography2DFloor_TypeDefinitionIndex = 71077;

	class Cartography2DFloor : public ::RPG::Client::NavMap::CartographyBaseData
	{
	public:
		::System::Void _ctor(::RPG::Client::NavMap::SubNavMapData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _InitArea(::RPG::Client::NavMap::SubTabData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__INITAREA_OFFSET))(this, a1);
		}

		::System::Void _InitArea_1(::RPG::Client::NavMap::SubNavMapData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__INITAREA_1_OFFSET))(this, a1);
		}

		::System::Int32 get_LayerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_LAYERCOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLocalPosition(::UnityEngine::Vector2 a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GETLOCALPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Single get_MapScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPSCALE_OFFSET))(this);
		}

		::System::Single get_InputScaleMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_INPUTSCALEMAX_OFFSET))(this);
		}

		::System::Single get_InputScaleMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_INPUTSCALEMIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DefaultCenterPosInMap()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_DEFAULTCENTERPOSINMAP_OFFSET))(this);
		}

		::RPG::MVector3 get_BackgroundSize()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_BACKGROUNDSIZE_OFFSET))(this);
		}

		::System::String* get_BackgroundMapSpritePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_BACKGROUNDMAPSPRITEPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_LayerList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_LAYERLIST_OFFSET))(this);
		}

		::System::Int32 GetDefaultLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GETDEFAULTLAYER_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTeleportData*>* get_MapTeleportDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTeleportData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPTELEPORTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMissionData*>* get_MapMissionDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPMISSIONDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* get_MapMappingInfoDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPMAPPINGINFODATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IBigMapIcon*>* get_TempShowIconList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IBigMapIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_TEMPSHOWICONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTrackMonsterData*>* get_MapTrackMonsterDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTrackMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPTRACKMONSTERDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* get_SubNavMapLinkDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_SUBNAVMAPLINKDATALIST_OFFSET))(this);
		}

		::RPG::Client::MapOutControlTeamLeaderData* get_OutControlTeamLeaderIcon()
		{
			return ((::RPG::Client::MapOutControlTeamLeaderData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_OUTCONTROLTEAMLEADERICON_OFFSET))(this);
		}
	};
}
