#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Win { class OverseaPayManager___c__DisplayClass66_0; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C970360)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_1__REQUESTADYENCREATEORDER_G__FAILEDCALLBACK_2_OFFSET UNITYSDK_OFFSET(0x1C9703D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass66_1_TypeDefinitionIndex = 21442;

	class OverseaPayManager___c__DisplayClass66_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::OverseaPayManager___c__DisplayClass66_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::NetworkResponseModelEx* response; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_1__CTOR_OFFSET))(this);
		}

		::System::Void _RequestAdyenCreateOrder_g__failedCallback_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_1__REQUESTADYENCREATEORDER_G__FAILEDCALLBACK_2_OFFSET))(this);
		}
	};
}
