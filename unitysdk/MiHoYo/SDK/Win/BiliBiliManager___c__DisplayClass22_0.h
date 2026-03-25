#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AlertCompliance_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16052220)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_B__0_OFFSET UNITYSDK_OFFSET(0x16052230)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_B__1_OFFSET UNITYSDK_OFFSET(0x160522B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager___c__DisplayClass22_0_TypeDefinitionIndex = 7933;

	class BiliBiliManager___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkResponseModel* response; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__0(::MiHoYo::SDK::AlertCompliance_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AlertCompliance_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_B__0_OFFSET))(this, result);
		}

		::System::Void _OnCreateOrder_b__1(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS22_0__ONCREATEORDER_B__1_OFFSET))(this, result);
		}
	};
}
