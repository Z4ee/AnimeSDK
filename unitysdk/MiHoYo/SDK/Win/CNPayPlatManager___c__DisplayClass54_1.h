#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::Win { class CNPayPlatManager; }

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS54_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1DE30)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS54_1__ONCREATEORDER_B__4_OFFSET UNITYSDK_OFFSET(0x1DA1DE40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatManager___c__DisplayClass54_1_TypeDefinitionIndex = 21370;

	class CNPayPlatManager___c__DisplayClass54_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::CNPayPlatManager* __4__this; // 0x10
		::MiHoYo::SDK::JSONObject* cBodyJson; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS54_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__4(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS54_1__ONCREATEORDER_B__4_OFFSET))(this, result);
		}
	};
}
