#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class LoginManager; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184EA420)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__SHOWPHONEMESSAGEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x184FFED0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__SHOWPHONEMESSAGEVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x184FFF10)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__SHOWPHONEMESSAGEVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x184FFF50)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass33_0_TypeDefinitionIndex = 9096;

	class LoginManager___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x10
		::MiHoYo::SDK::AccountModel* model; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPhoneMessageView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__SHOWPHONEMESSAGEVIEW_B__0_OFFSET))(this);
		}

		::System::Void _ShowPhoneMessageView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__SHOWPHONEMESSAGEVIEW_B__1_OFFSET))(this);
		}

		::System::Void _ShowPhoneMessageView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__SHOWPHONEMESSAGEVIEW_B__2_OFFSET))(this);
		}
	};
}
