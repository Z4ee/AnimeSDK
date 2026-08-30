#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Win { class OverseaPayManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1877D690)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__REQUESTADYENCREATEORDER_B__0_OFFSET UNITYSDK_OFFSET(0x1877F930)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__REQUESTADYENCREATEORDER_G__CANCELCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x187814F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass66_0_TypeDefinitionIndex = 9288;

	class OverseaPayManager___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::OverseaPayManager* __4__this; // 0x10
		::System::Boolean isJsCall; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestAdyenCreateOrder_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__REQUESTADYENCREATEORDER_B__0_OFFSET))(this, a1);
		}

		::System::Void _RequestAdyenCreateOrder_g__cancelCallback_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__REQUESTADYENCREATEORDER_G__CANCELCALLBACK_1_OFFSET))(this, a1);
		}
	};
}
