#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/IconCollectorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class MapMissionData; }
namespace RPG::Client { class MapTrackMonsterData; }
namespace RPG::Client::NavMap { class AreaData; }
namespace RPG::Client::NavMap { class ICartography3D; }
namespace RPG::Client::NavMap { class NavMap3DIconData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xAB52DA0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_MAP3DICONLIST_OFFSET UNITYSDK_OFFSET(0xAB53F10)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_MAP3DPLAYERICON_OFFSET UNITYSDK_OFFSET(0xAB53F20)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_NAVMAPAREADATA_OFFSET UNITYSDK_OFFSET(0xAB53F60)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_OUTCONTROLTEAMLEADER3DICON_OFFSET UNITYSDK_OFFSET(0xAB53F30)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET__CARTOGRAPHY3D_OFFSET UNITYSDK_OFFSET(0xAB515E0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET__MAP3DICONS_OFFSET UNITYSDK_OFFSET(0xAB53F40)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_INIT_OFFSET UNITYSDK_OFFSET(0xAB502B0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_SET__MAP3DICONS_OFFSET UNITYSDK_OFFSET(0xAB53F50)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_UPDATEOUTCONTROLTEAMLEADER3DICON_OFFSET UNITYSDK_OFFSET(0xAB530C0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_UPDATEPLAYER3DICON_OFFSET UNITYSDK_OFFSET(0xAB51050)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__ADDICON_1_OFFSET UNITYSDK_OFFSET(0xAB52FA0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__ADDICON_OFFSET UNITYSDK_OFFSET(0xAB52EB0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__BUILDMISSIONGUIDEICON_OFFSET UNITYSDK_OFFSET(0xAB503A0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTMAPPINGINFO3DICON_OFFSET UNITYSDK_OFFSET(0xAB52460)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTMISSION3DICON_OFFSET UNITYSDK_OFFSET(0xAB50850)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTTEMPSHOW3DICON_OFFSET UNITYSDK_OFFSET(0xAB50EA0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTTRACKMONSTER3DICON_OFFSET UNITYSDK_OFFSET(0xAB50D50)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB50FF0)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__TRYADDMONSTER3DICON_OFFSET UNITYSDK_OFFSET(0xAB53450)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__TRYADDTEMPSHOW3DICON_OFFSET UNITYSDK_OFFSET(0xAB53660)
#define RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAB54100)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int IconCollector3DBase_TypeDefinitionIndex = 68762;

	class IconCollector3DBase : public ::RPG::Client::NavMap::IconCollectorBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::NavMap3DIconData*>* __Map3DIcons_k__BackingField; // 0x50
		::RPG::Client::NavMap::NavMap3DIconData* _OutControlTeamLeader3DIcon; // 0x58
		::RPG::Client::NavMap::NavMap3DIconData* _Map3DPlayerIcon; // 0x60

		::System::Void _ctor(::RPG::Client::NavMap::ICartography3D* cartography)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography3D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__CTOR_OFFSET))(this, cartography);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_INIT_OFFSET))(this);
		}

		::System::Void UpdatePlayer3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_UPDATEPLAYER3DICON_OFFSET))(this);
		}

		::System::Void _BuildMissionGuideIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__BUILDMISSIONGUIDEICON_OFFSET))(this);
		}

		::System::Void _CollectMappingInfo3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTMAPPINGINFO3DICON_OFFSET))(this);
		}

		::System::Void _CollectMission3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTMISSION3DICON_OFFSET))(this);
		}

		::System::Void UpdateOutControlTeamLeader3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_UPDATEOUTCONTROLTEAMLEADER3DICON_OFFSET))(this);
		}

		::System::Void _CollectTrackMonster3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTTRACKMONSTER3DICON_OFFSET))(this);
		}

		::System::Void _TryAddMonster3DIcon(::RPG::Client::MapTrackMonsterData* mapTrackMonsterData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapTrackMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__TRYADDMONSTER3DICON_OFFSET))(this, mapTrackMonsterData);
		}

		::System::Void _CollectTempShow3DIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__COLLECTTEMPSHOW3DICON_OFFSET))(this);
		}

		::System::Void _TryAddTempShow3DIcon(::RPG::Client::IBigMapIcon* iconData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBigMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__TRYADDTEMPSHOW3DICON_OFFSET))(this, iconData);
		}

		::System::Void _AddIcon(::RPG::Client::IBigMapIcon* bigMapIcon, ::System::Collections::Generic::List_1<::System::UInt32>* poseIDs, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBigMapIcon*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__ADDICON_OFFSET))(this, bigMapIcon, poseIDs, rotation);
		}

		::System::Void _AddIcon_1(::RPG::Client::MapMissionData* mapMissionData, ::System::Collections::Generic::List_1<::System::UInt32>* poseIDs, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMissionData*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE__ADDICON_1_OFFSET))(this, mapMissionData, poseIDs, rotation);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::NavMap3DIconData*>* get_Map3DIconList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::NavMap::NavMap3DIconData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_MAP3DICONLIST_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavMap3DIconData* get_Map3DPlayerIcon()
		{
			return ((::RPG::Client::NavMap::NavMap3DIconData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_MAP3DPLAYERICON_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavMap3DIconData* get_OutControlTeamLeader3DIcon()
		{
			return ((::RPG::Client::NavMap::NavMap3DIconData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_OUTCONTROLTEAMLEADER3DICON_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartography3D* get__Cartography3D()
		{
			return ((::RPG::Client::NavMap::ICartography3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET__CARTOGRAPHY3D_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::NavMap3DIconData*>* get__Map3DIcons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::NavMap3DIconData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET__MAP3DICONS_OFFSET))(this);
		}

		::System::Void set__Map3DIcons(::System::Collections::Generic::List_1<::RPG::Client::NavMap::NavMap3DIconData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::NavMap3DIconData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_SET__MAP3DICONS_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_AREAID_OFFSET))(this);
		}

		::RPG::Client::NavMap::AreaData* get_NavMapAreaData()
		{
			return ((::RPG::Client::NavMap::AreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE_GET_NAVMAPAREADATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_ICONCOLLECTOR3DBASE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}
	};
}
