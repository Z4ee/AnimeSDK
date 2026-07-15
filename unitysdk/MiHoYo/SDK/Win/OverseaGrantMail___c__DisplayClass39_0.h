#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class OverseaGrantMail; }

#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17148520)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL___C__DISPLAYCLASS39_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x17148A90)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGrantMail___c__DisplayClass39_0_TypeDefinitionIndex = 9194;

	class OverseaGrantMail___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::OverseaGrantMail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaGrantMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL___C__DISPLAYCLASS39_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
