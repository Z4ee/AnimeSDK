#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::UINavigation { class UINavigationArea; }
namespace RPG::UINavigation { class UINavigationZoneManager; }

#define RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_GETROOTNAVIGATIONAREA_OFFSET UNITYSDK_OFFSET(0xC84AF70)
#define RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xC84AF00)
#define RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_GET_BRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC84AE00)
#define RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_SETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC84AE20)
#define RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_SET_BRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC84AE10)
#define RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_SHOW_OFFSET UNITYSDK_OFFSET(0xC84AE70)
#define RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xC84B000)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingBridgeWindow_TypeDefinitionIndex = 80426;

	class B51RacingBridgeWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::B51Racing::LuaControllerHandle* _BridgeHandle_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW__CTOR_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* get_BridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_GET_BRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void set_BridgeHandle(::RPG::Client::B51Racing::LuaControllerHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::LuaControllerHandle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_SET_BRIDGEHANDLE_OFFSET))(this, a1);
		}

		::System::Void SetBridgeHandle(::RPG::Client::B51Racing::LuaControllerHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::LuaControllerHandle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_SETBRIDGEHANDLE_OFFSET))(this, a1);
		}

		::System::Void Show(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_SHOW_OFFSET))(this, a1);
		}

		::RPG::UINavigation::UINavigationZoneManager* GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationArea* GetRootNavigationArea()
		{
			return ((::RPG::UINavigation::UINavigationArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBRIDGEWINDOW_GETROOTNAVIGATIONAREA_OFFSET))(this);
		}
	};
}
