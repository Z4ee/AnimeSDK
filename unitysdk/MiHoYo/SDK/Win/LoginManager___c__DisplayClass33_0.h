#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class LoginManager; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160C7D20)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__SHOWPHONEMESSAGEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x160DE040)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__SHOWPHONEMESSAGEVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x160DE080)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS33_0__SHOWPHONEMESSAGEVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x160DE0C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass33_0_TypeDefinitionIndex = 8047;

	class LoginManager___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18

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
