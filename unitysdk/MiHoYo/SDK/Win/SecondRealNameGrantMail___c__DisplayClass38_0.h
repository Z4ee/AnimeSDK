#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class SecondRealNameGrantMail; }

#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C91F2C0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL___C__DISPLAYCLASS38_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1C91F2D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SecondRealNameGrantMail___c__DisplayClass38_0_TypeDefinitionIndex = 21618;

	class SecondRealNameGrantMail___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10
		::System::Boolean isShowRedirect; // 0x18
		::System::Boolean isShowOtherVerify; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::SecondRealNameGrantMail* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::SecondRealNameGrantMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL___C__DISPLAYCLASS38_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
