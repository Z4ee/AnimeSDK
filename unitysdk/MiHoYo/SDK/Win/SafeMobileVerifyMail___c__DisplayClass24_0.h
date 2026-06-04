#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class SafeMobileVerifyMail; }

#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182C11E0)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL___C__DISPLAYCLASS24_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x182C15E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafeMobileVerifyMail___c__DisplayClass24_0_TypeDefinitionIndex = 9144;

	class SafeMobileVerifyMail___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::SafeMobileVerifyMail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::SafeMobileVerifyMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL___C__DISPLAYCLASS24_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
