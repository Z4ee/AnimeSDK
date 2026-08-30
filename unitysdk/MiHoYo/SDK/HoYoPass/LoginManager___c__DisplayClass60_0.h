#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/AccountListLogoutOption.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE963C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLISTLOGOUTCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x1AE9FCF0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLISTLOGOUTCONFIRM_B__1_OFFSET UNITYSDK_OFFSET(0x1AE9FF10)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass60_0_TypeDefinitionIndex = 8287;

	class LoginManager___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAccountListLogoutConfirm_b__0(::MiHoYo::SDK::UI::OS::AccountListLogoutOption a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::AccountListLogoutOption))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLISTLOGOUTCONFIRM_B__0_OFFSET))(this, a1);
		}

		::System::Void _ShowAccountListLogoutConfirm_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLISTLOGOUTCONFIRM_B__1_OFFSET))(this);
		}
	};
}
