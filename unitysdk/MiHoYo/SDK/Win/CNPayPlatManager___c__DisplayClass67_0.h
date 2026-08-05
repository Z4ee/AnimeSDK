#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::Win { class CNPayPlatManager; }

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1DFB0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS67_0__SHOWPAYPLATOVERDUE_B__0_OFFSET UNITYSDK_OFFSET(0x1DA1DFC0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatManager___c__DisplayClass67_0_TypeDefinitionIndex = 21374;

	class CNPayPlatManager___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* cBodyJson; // 0x10
		::MiHoYo::SDK::Win::CNPayPlatManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPayPlatOverdue_b__0(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS67_0__SHOWPAYPLATOVERDUE_B__0_OFFSET))(this, result);
		}
	};
}
