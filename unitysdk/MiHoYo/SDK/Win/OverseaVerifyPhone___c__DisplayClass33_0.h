#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class OverseaVerifyPhone; }

#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18782C20)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE___C__DISPLAYCLASS33_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x18783020)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaVerifyPhone___c__DisplayClass33_0_TypeDefinitionIndex = 9456;

	class OverseaVerifyPhone___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::OverseaVerifyPhone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaVerifyPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE___C__DISPLAYCLASS33_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
