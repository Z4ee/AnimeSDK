#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class BindManagerCX; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A0140)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1D4A0150)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1D4A0540)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManagerCX___c__DisplayClass4_0_TypeDefinitionIndex = 21166;

	class BindManagerCX___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::BindManagerCX* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnLoginResult; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _PerformBindingFlow_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__0_OFFSET))(this, response);
		}

		::System::Void _PerformBindingFlow_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__1_OFFSET))(this, response);
		}
	};
}
