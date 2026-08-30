#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class LoginByPhone; }

#define MIHOYO_SDK_WIN_LOGINBYPHONE___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD1B30)
#define MIHOYO_SDK_WIN_LOGINBYPHONE___C__DISPLAYCLASS47_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x18AD27D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByPhone___c__DisplayClass47_0_TypeDefinitionIndex = 9482;

	class LoginByPhone___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::LoginByPhone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LoginByPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE___C__DISPLAYCLASS47_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
