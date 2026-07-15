#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/Cartography3DBase.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"

namespace RPG::Client::NavMap { class IconCollectorBase; }
namespace RPG::Client::NavMap { class NavMap3DIconData; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace RPG::GameCore { class EraRegion; }
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETDEFAULTAREAERASTATE_OFFSET UNITYSDK_OFFSET(0x18EB4C30)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETICONSHOWSTATE_1_OFFSET UNITYSDK_OFFSET(0x18EB5590)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETICONSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x18EB5370)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETSCENECURRENTERASTATE_OFFSET UNITYSDK_OFFSET(0x18EB4C90)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_ISDEVICEFOLLOW_OFFSET UNITYSDK_OFFSET(0x18EB6220)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_MAP3DPREFABPATH_OFFSET UNITYSDK_OFFSET(0x18EB6090)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_MODELSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x18EB6110)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18EB60F0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ICONSHOWINONEOFERASTATE_OFFSET UNITYSDK_OFFSET(0x18EB5D60)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ISENTITYSHOWINCURERAFLIPSTATE_OFFSET UNITYSDK_OFFSET(0x18EB4E80)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ISICON3DSHOW_OFFSET UNITYSDK_OFFSET(0x18EB4D90)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_SET_STATE_OFFSET UNITYSDK_OFFSET(0x18EB6100)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB4650)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__GETFLOORDEFAULTAREAERASTATE_OFFSET UNITYSDK_OFFSET(0x18EB4D10)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__GETICONCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x18EB4B50)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__INITROW_OFFSET UNITYSDK_OFFSET(0x18EB4670)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int Cartography3DEraFlip_TypeDefinitionIndex = 71080;

	class Cartography3DEraFlip : public ::RPG::Client::NavMap::Cartography3DBase
	{
	public:
		::RPG::GameCore::EraRegion* _Row; // 0x78
		::RPG::GameCore::EraStateType _State_k__BackingField; // 0x80

		::System::Void _ctor(::RPG::Client::NavMap::SubNavMapData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::IconCollectorBase* _GetIconCollector()
		{
			return ((::RPG::Client::NavMap::IconCollectorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__GETICONCOLLECTOR_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType GetDefaultAreaEraState()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETDEFAULTAREAERASTATE_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType GetSceneCurrentEraState()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETSCENECURRENTERASTATE_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType _GetFloorDefaultAreaEraState()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__GETFLOORDEFAULTAREAERASTATE_OFFSET))(this);
		}

		::System::Boolean IsIcon3DShow(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ISICON3DSHOW_OFFSET))(this, a1);
		}

		::System::Boolean IsEntityShowInCurEraFlipState(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ISENTITYSHOWINCURERAFLIPSTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::EraStateType GetIconShowState(::RPG::Client::NavMap::NavMap3DIconData* a1)
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETICONSHOWSTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::EraStateType GetIconShowState_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETICONSHOWSTATE_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IconShowInOneOfEraState(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ICONSHOWINONEOFERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _InitRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__INITROW_OFFSET))(this);
		}

		::System::String* get_Map3DPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_MAP3DPREFABPATH_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType get_State()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::EraStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::EraStateType get_ModelShowState()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_MODELSHOWSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsDeviceFollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_ISDEVICEFOLLOW_OFFSET))(this);
		}
	};
}
