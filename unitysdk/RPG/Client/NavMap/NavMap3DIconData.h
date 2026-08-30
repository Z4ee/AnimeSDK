#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapMissionData; }
namespace RPG::Client { class MapOutControlTeamLeaderData; }
namespace RPG::Client { class MapTeleportData; }
namespace RPG::Client { class MapTrackMonsterData; }
namespace RPG::Client::NavMap { class ICartography3D; }
namespace RPG::Client::NavMap { class ISubNavMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD95D8E0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0xD95DD80)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_HASMINIMAPICON_OFFSET UNITYSDK_OFFSET(0xD95DAC0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_HASMODELICON_OFFSET UNITYSDK_OFFSET(0xD95E250)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ICON2DPATH_OFFSET UNITYSDK_OFFSET(0xD95E1D0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ICONCOLOR_OFFSET UNITYSDK_OFFSET(0xD95E2B0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xD95DB40)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ISPLAYER_OFFSET UNITYSDK_OFFSET(0xD95DA30)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD95D8F0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ISSUBNAVMAPLINK_OFFSET UNITYSDK_OFFSET(0xD95DA40)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_MODELICONPATH_OFFSET UNITYSDK_OFFSET(0xD95DC40)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_POSEIDS_OFFSET UNITYSDK_OFFSET(0xD95DAA0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xD95D890)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0xD95D8B0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xD95D8D0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_SHOW2DICON_OFFSET UNITYSDK_OFFSET(0xD95E0C0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_SUBNAVMAP_OFFSET UNITYSDK_OFFSET(0xD95DA90)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_SET_POSEIDS_OFFSET UNITYSDK_OFFSET(0xD95DAB0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD94D8D0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0xD9499A0)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0xD94C580)
#define RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD94DBC0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int NavMap3DIconData_TypeDefinitionIndex = 74378;

	class NavMap3DIconData : public ::System::Object
	{
	public:
		::RPG::Client::MapOutControlTeamLeaderData* OutControlTeamLeaderData; // 0x10
		::RPG::Client::MapMissionData* MissionData; // 0x18
		::RPG::Client::MapMappingInfoData* MappingInfoData; // 0x20
		::RPG::Client::MapTeleportData* TeleportData; // 0x28
		::RPG::Client::IBigMapIcon* BigMapIconData; // 0x30
		::RPG::Client::NavMap::ISubNavMap* _SubNavMap_k__BackingField; // 0x38
		::RPG::Client::MapTrackMonsterData* TrackMonsterData; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _PoseIDs_k__BackingField; // 0x48
		::RPG::Client::NavMap::ICartography3D* _Cartography_k__BackingField; // 0x50
		::System::Boolean _IsPlayer_k__BackingField; // 0x58
		::UnityEngine::Vector3 _RawPosition_k__BackingField; // 0x5C
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x68
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x78

		::System::Void _ctor(::RPG::Client::NavMap::ICartography3D* a1, ::RPG::Client::MapMissionData* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography3D*, ::RPG::Client::MapMissionData*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::RPG::Client::NavMap::ICartography3D* a1, ::RPG::Client::IBigMapIcon* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::UnityEngine::Quaternion a4, ::RPG::Client::NavMap::ISubNavMap* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography3D*, ::RPG::Client::IBigMapIcon*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::UnityEngine::Quaternion, ::RPG::Client::NavMap::ISubNavMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_2(::RPG::Client::NavMap::ICartography3D* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography3D*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_3(::RPG::Client::NavMap::ICartography3D* a1, ::RPG::Client::MapOutControlTeamLeaderData* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartography3D*, ::RPG::Client::MapOutControlTeamLeaderData*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_RAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ROTATION_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartography3D* get_Cartography()
		{
			return ((::RPG::Client::NavMap::ICartography3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_CARTOGRAPHY_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ISPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsSubNavMapLink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ISSUBNAVMAPLINK_OFFSET))(this);
		}

		::RPG::Client::NavMap::ISubNavMap* get_SubNavMap()
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_SUBNAVMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PoseIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_POSEIDS_OFFSET))(this);
		}

		::System::Void set_PoseIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_SET_POSEIDS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasMiniMapIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_HASMINIMAPICON_OFFSET))(this);
		}

		::System::String* get_ModelIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_MODELICONPATH_OFFSET))(this);
		}

		::System::Boolean get_Show2DIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_SHOW2DICON_OFFSET))(this);
		}

		::System::String* get_FriendlyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_FRIENDLYNAME_OFFSET))(this);
		}

		::System::Boolean get_HasModelIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_HASMODELICON_OFFSET))(this);
		}

		::System::String* get_Icon2DPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ICON2DPATH_OFFSET))(this);
		}

		::System::UInt32 get_IconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ICONTYPE_OFFSET))(this);
		}

		::UnityEngine::Color get_IconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_NAVMAP3DICONDATA_GET_ICONCOLOR_OFFSET))(this);
		}
	};
}
