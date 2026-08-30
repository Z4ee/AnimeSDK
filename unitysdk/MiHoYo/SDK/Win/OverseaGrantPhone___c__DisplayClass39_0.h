#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class OverseaGrantPhone; }

#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1876B1A0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE___C__DISPLAYCLASS39_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1876B1B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGrantPhone___c__DisplayClass39_0_TypeDefinitionIndex = 9470;

	class OverseaGrantPhone___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::OverseaGrantPhone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaGrantPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE___C__DISPLAYCLASS39_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
