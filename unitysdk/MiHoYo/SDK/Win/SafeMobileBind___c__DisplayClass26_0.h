#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class SafeMobileBind; }

#define MIHOYO_SDK_WIN_SAFEMOBILEBIND___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182C0060)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND___C__DISPLAYCLASS26_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x182C0590)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafeMobileBind___c__DisplayClass26_0_TypeDefinitionIndex = 9170;

	class SafeMobileBind___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::SafeMobileBind* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::SafeMobileBind*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND___C__DISPLAYCLASS26_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
