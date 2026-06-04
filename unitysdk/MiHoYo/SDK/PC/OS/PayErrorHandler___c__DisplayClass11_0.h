#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class PayErrorHandler; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1839BDE0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS11_0__HANDLEAGEGATEERRORS_G__CANCELCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x1839BE30)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS11_0__HANDLEAGEGATEERRORS_G__FAILEDCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1839BE70)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int PayErrorHandler___c__DisplayClass11_0_TypeDefinitionIndex = 8485;

	class PayErrorHandler___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkResponseModelEx* response; // 0x10
		::MiHoYo::SDK::PC::OS::PayErrorHandler* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleAgeGateErrors_g__cancelCallback_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS11_0__HANDLEAGEGATEERRORS_G__CANCELCALLBACK_0_OFFSET))(this, a1);
		}

		::System::Void _HandleAgeGateErrors_g__failedCallback_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS11_0__HANDLEAGEGATEERRORS_G__FAILEDCALLBACK_1_OFFSET))(this);
		}
	};
}
