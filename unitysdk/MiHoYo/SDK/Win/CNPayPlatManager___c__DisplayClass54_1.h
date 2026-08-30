#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::Win { class CNPayPlatManager; }

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS54_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B80C410)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS54_1__ONCREATEORDER_B__4_OFFSET UNITYSDK_OFFSET(0x1B810440)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatManager___c__DisplayClass54_1_TypeDefinitionIndex = 9217;

	class CNPayPlatManager___c__DisplayClass54_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* cBodyJson; // 0x10
		::MiHoYo::SDK::Win::CNPayPlatManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS54_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__4(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS54_1__ONCREATEORDER_B__4_OFFSET))(this, a1);
		}
	};
}
