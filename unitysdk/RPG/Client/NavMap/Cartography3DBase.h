#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/CartographyBaseData.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::NavMap { class AreaData; }
namespace RPG::Client::NavMap { class IconCollectorBase; }
namespace RPG::Client::NavMap { class NavMap3DIconData; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x9DF4EA0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_INITROTATION_OFFSET UNITYSDK_OFFSET(0x9DF4FC0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_MAP3DICONLIST_OFFSET UNITYSDK_OFFSET(0x9DF5430)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_MAP3DPLAYERICON_OFFSET UNITYSDK_OFFSET(0x9DF52D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_OUTCONTROLTEAMLEADER3DICON_OFFSET UNITYSDK_OFFSET(0x9DF5380)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_ROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x9DF4F70)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_ROOTROTATION_OFFSET UNITYSDK_OFFSET(0x9DF4FA0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_SUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0x9DF4E20)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET__NAVMAPAREADATA_OFFSET UNITYSDK_OFFSET(0x9DF4DB0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_ISICON3DSHOW_OFFSET UNITYSDK_OFFSET(0x9DF4F20)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_SET_ROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x9DF4F90)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_SET_ROOTROTATION_OFFSET UNITYSDK_OFFSET(0x9DF4FB0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_UPDATEOUTCONTROLTEAMLEADER3DICON_OFFSET UNITYSDK_OFFSET(0x9DF4A20)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_UPDATEPLAYER3DICON_OFFSET UNITYSDK_OFFSET(0x9DF43D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF3E40)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE__GETICONCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9DF4250)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE__INITCAMERAORIGINROTATION_OFFSET UNITYSDK_OFFSET(0x9DF3F20)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE___IFIXBASEPROXY__GETICONCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9DF5460)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int Cartography3DBase_TypeDefinitionIndex = 61236;

	class Cartography3DBase : public ::RPG::Client::NavMap::CartographyBaseData
	{
	public:
		::UnityEngine::Vector3 _RootPosition_k__BackingField; // 0x48
		::UnityEngine::Quaternion CameraOriginRotation; // 0x54
		::UnityEngine::Quaternion _RootRotation_k__BackingField; // 0x64

		::System::Void _ctor(::RPG::Client::NavMap::SubNavMapData* subNavMapData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE__CTOR_OFFSET))(this, subNavMapData);
		}

		::System::Void _InitCameraOriginRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE__INITCAMERAORIGINROTATION_OFFSET))(this);
		}

		::RPG::Client::NavMap::IconCollectorBase* _GetIconCollector()
		{
			return ((::RPG::Client::NavMap::IconCollectorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE__GETICONCOLLECTOR_OFFSET))(this);
		}

		::System::Void UpdatePlayer3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_UPDATEPLAYER3DICON_OFFSET))(this);
		}

		::System::Void UpdateOutControlTeamLeader3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_UPDATEOUTCONTROLTEAMLEADER3DICON_OFFSET))(this);
		}

		::RPG::Client::NavMap::AreaData* get__NavMapAreaData()
		{
			return ((::RPG::Client::NavMap::AreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET__NAVMAPAREADATA_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubNavMapData* get_SubNavMapData()
		{
			return ((::RPG::Client::NavMap::SubNavMapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_SUBNAVMAPDATA_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_AreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_AREATYPE_OFFSET))(this);
		}

		::System::Boolean IsIcon3DShow(::RPG::Client::NavMap::NavMap3DIconData* icon3D)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_ISICON3DSHOW_OFFSET))(this, icon3D);
		}

		::UnityEngine::Vector3 get_RootPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_ROOTPOSITION_OFFSET))(this);
		}

		::System::Void set_RootPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_SET_ROOTPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_RootRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_ROOTROTATION_OFFSET))(this);
		}

		::System::Void set_RootRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_SET_ROOTROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_InitRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_INITROTATION_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavMap3DIconData* get_Map3DPlayerIcon()
		{
			return ((::RPG::Client::NavMap::NavMap3DIconData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_MAP3DPLAYERICON_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavMap3DIconData* get_OutControlTeamLeader3DIcon()
		{
			return ((::RPG::Client::NavMap::NavMap3DIconData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_OUTCONTROLTEAMLEADER3DICON_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::NavMap3DIconData*>* get_Map3DIconList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::NavMap3DIconData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_MAP3DICONLIST_OFFSET))(this);
		}

		::RPG::Client::NavMap::IconCollectorBase* __iFixBaseProxy__GetIconCollector()
		{
			return ((::RPG::Client::NavMap::IconCollectorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE___IFIXBASEPROXY__GETICONCOLLECTOR_OFFSET))(this);
		}
	};
}
