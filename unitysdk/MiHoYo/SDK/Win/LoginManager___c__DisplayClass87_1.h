#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginManager___c__DisplayClass87_0; }
namespace System { class Action; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A18EAD0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1__ONCHECKACCOUNT_B__18_OFFSET UNITYSDK_OFFSET(0x1A18EAE0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1__ONCHECKACCOUNT_B__20_OFFSET UNITYSDK_OFFSET(0x1A18EC40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass87_1_TypeDefinitionIndex = 20035;

	class LoginManager___c__DisplayClass87_1 : public ::System::Object
	{
	public:
		::System::Action* OnBindMail; // 0x10
		::MiHoYo::SDK::Win::LoginManager___c__DisplayClass87_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1__ONCHECKACCOUNT_B__18_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS87_1__ONCHECKACCOUNT_B__20_OFFSET))(this);
		}
	};
}
