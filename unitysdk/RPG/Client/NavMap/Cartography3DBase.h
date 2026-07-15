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

#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x18EB3F50)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_INITROTATION_OFFSET UNITYSDK_OFFSET(0x18EB40A0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_MAP3DICONLIST_OFFSET UNITYSDK_OFFSET(0x18EB4520)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_MAP3DPLAYERICON_OFFSET UNITYSDK_OFFSET(0x18EB42A0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_OUTCONTROLTEAMLEADER3DICON_OFFSET UNITYSDK_OFFSET(0x18EB43E0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_ROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x18EB4050)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_ROOTROTATION_OFFSET UNITYSDK_OFFSET(0x18EB4080)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_SUBNAVMAPDATA_OFFSET UNITYSDK_OFFSET(0x18EB3EC0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET__NAVMAPAREADATA_OFFSET UNITYSDK_OFFSET(0x18EB3E50)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_ISICON3DSHOW_OFFSET UNITYSDK_OFFSET(0x18EB4000)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_SET_ROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x18EB4070)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_SET_ROOTROTATION_OFFSET UNITYSDK_OFFSET(0x18EB4090)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_UPDATEOUTCONTROLTEAMLEADER3DICON_OFFSET UNITYSDK_OFFSET(0x18EB3D40)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_UPDATEPLAYER3DICON_OFFSET UNITYSDK_OFFSET(0x18EB3C30)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB35D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE__GETICONCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x18EB3AA0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE__INITCAMERAORIGINROTATION_OFFSET UNITYSDK_OFFSET(0x18EB3770)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int Cartography3DBase_TypeDefinitionIndex = 71079;

	class Cartography3DBase : public ::RPG::Client::NavMap::CartographyBaseData
	{
	public:
		::UnityEngine::Quaternion _RootRotation_k__BackingField; // 0x48
		::UnityEngine::Quaternion CameraOriginRotation; // 0x58
		::UnityEngine::Vector3 _RootPosition_k__BackingField; // 0x68

		::System::Void _ctor(::RPG::Client::NavMap::SubNavMapData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE__CTOR_OFFSET))(this, a1);
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

		::System::Boolean IsIcon3DShow(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_ISICON3DSHOW_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_RootPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_ROOTPOSITION_OFFSET))(this);
		}

		::System::Void set_RootPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_SET_ROOTPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_RootRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_GET_ROOTROTATION_OFFSET))(this);
		}

		::System::Void set_RootRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DBASE_SET_ROOTROTATION_OFFSET))(this, a1);
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
	};
}
