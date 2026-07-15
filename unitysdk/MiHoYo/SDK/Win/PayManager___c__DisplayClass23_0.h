#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class PayManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171674F0)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS23_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x1716F220)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS23_0__PAY_B__1_OFFSET UNITYSDK_OFFSET(0x1716F240)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayManager___c__DisplayClass23_0_TypeDefinitionIndex = 9134;

	class PayManager___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::PayManager* __4__this; // 0x10
		::MiHoYo::SDK::AccountModel* accountModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS23_0__PAY_B__0_OFFSET))(this);
		}

		::System::Void _Pay_b__1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS23_0__PAY_B__1_OFFSET))(this, a1, a2, a3);
		}
	};
}
