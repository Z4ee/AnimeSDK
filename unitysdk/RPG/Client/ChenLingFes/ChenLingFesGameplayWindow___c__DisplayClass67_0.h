#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayWindow; }
namespace RPG::UINavigation { class UINavigationZone; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D77D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___C__DISPLAYCLASS67_0___TRYFOCUSOPERATEITEMNAVIGATION_B__0_OFFSET UNITYSDK_OFFSET(0x1A4D8160)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayWindow___c__DisplayClass67_0_TypeDefinitionIndex = 76373;

	class ChenLingFesGameplayWindow___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingFes::ChenLingFesGameplayWindow* __4__this; // 0x10
		::RPG::UINavigation::UINavigationZone* navigationZone; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryFocusOperateItemNavigation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYWINDOW___C__DISPLAYCLASS67_0___TRYFOCUSOPERATEITEMNAVIGATION_B__0_OFFSET))(this);
		}
	};
}
