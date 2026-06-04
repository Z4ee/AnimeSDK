#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class BindManagerCX; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1825C850)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1825D530)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1825DC20)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManagerCX___c__DisplayClass4_0_TypeDefinitionIndex = 8734;

	class BindManagerCX___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnLoginResult; // 0x10
		::MiHoYo::SDK::Console::OS::BindManagerCX* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _PerformBindingFlow_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__0_OFFSET))(this, a1);
		}

		::System::Void _PerformBindingFlow_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__1_OFFSET))(this, a1);
		}
	};
}
