#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaPayManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F9980)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS30_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x1B9F9990)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass30_0_TypeDefinitionIndex = 21087;

	class OverseaPayManager___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::String* tips; // 0x10
		::MiHoYo::SDK::Win::OverseaPayManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS30_0__PAY_B__0_OFFSET))(this);
		}
	};
}
