#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class CNPayPlatManager___c__DisplayClass37_0; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1606E930)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_1__PAY_B__2_OFFSET UNITYSDK_OFFSET(0x16078530)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatManager___c__DisplayClass37_1_TypeDefinitionIndex = 7884;

	class CNPayPlatManager___c__DisplayClass37_1 : public ::System::Object
	{
	public:
		::System::String* tips; // 0x10
		::MiHoYo::SDK::Win::CNPayPlatManager___c__DisplayClass37_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_1__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS37_1__PAY_B__2_OFFSET))(this);
		}
	};
}
