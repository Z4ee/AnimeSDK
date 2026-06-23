#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3494E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS68_0__SHOWACCOUNTLISTCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x1B3494F0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS68_0__SHOWACCOUNTLISTCONFIRM_B__1_OFFSET UNITYSDK_OFFSET(0x1B349800)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass68_0_TypeDefinitionIndex = 21198;

	class LoginManager___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAccountListConfirm_b__0(::System::Boolean option)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS68_0__SHOWACCOUNTLISTCONFIRM_B__0_OFFSET))(this, option);
		}

		::System::Void _ShowAccountListConfirm_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS68_0__SHOWACCOUNTLISTCONFIRM_B__1_OFFSET))(this);
		}
	};
}
