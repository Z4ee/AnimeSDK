#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184E8880)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS24_0__LOGOUTWITHCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x184FF2C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS24_0__LOGOUTWITHCONFIRM_B__1_OFFSET UNITYSDK_OFFSET(0x184FF3C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass24_0_TypeDefinitionIndex = 9093;

	class LoginManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* wrapperCallback; // 0x18
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _LogoutWithConfirm_b__0(::MiHoYo::SDK::CallbackModel_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS24_0__LOGOUTWITHCONFIRM_B__0_OFFSET))(this, a1);
		}

		::System::Void _LogoutWithConfirm_b__1(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS24_0__LOGOUTWITHCONFIRM_B__1_OFFSET))(this, a1);
		}
	};
}
