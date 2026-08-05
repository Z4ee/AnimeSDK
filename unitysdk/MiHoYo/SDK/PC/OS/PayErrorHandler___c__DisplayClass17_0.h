#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class PayErrorHandler; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C908B60)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS17_0__HANDLEAGEGATEERRORS_G__CANCELCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x1C908B70)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS17_0__HANDLEAGEGATEERRORS_G__FAILEDCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1C908BA0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int PayErrorHandler___c__DisplayClass17_0_TypeDefinitionIndex = 20813;

	class PayErrorHandler___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::PayErrorHandler* __4__this; // 0x10
		::MiHoYo::SDK::NetworkResponseModelEx* response; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleAgeGateErrors_g__cancelCallback_0(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS17_0__HANDLEAGEGATEERRORS_G__CANCELCALLBACK_0_OFFSET))(this, message);
		}

		::System::Void _HandleAgeGateErrors_g__failedCallback_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS17_0__HANDLEAGEGATEERRORS_G__FAILEDCALLBACK_1_OFFSET))(this);
		}
	};
}
