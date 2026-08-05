#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Win { class OverseaPayManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C96E8A0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__REQUESTADYENCREATEORDER_B__0_OFFSET UNITYSDK_OFFSET(0x1C96E8B0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__REQUESTADYENCREATEORDER_G__CANCELCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1C970370)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass66_0_TypeDefinitionIndex = 21441;

	class OverseaPayManager___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::OverseaPayManager* __4__this; // 0x10
		::System::Boolean isJsCall; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestAdyenCreateOrder_b__0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__REQUESTADYENCREATEORDER_B__0_OFFSET))(this, response);
		}

		::System::Void _RequestAdyenCreateOrder_g__cancelCallback_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_0__REQUESTADYENCREATEORDER_G__CANCELCALLBACK_1_OFFSET))(this, message);
		}
	};
}
