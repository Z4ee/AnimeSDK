#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class BindManagerPS; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1745D460)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1745DEA0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1745E630)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManagerPS___c__DisplayClass4_0_TypeDefinitionIndex = 7828;

	class BindManagerPS___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnLoginResult; // 0x10
		::MiHoYo::SDK::Console::OS::BindManagerPS* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _PerformBindingFlow_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__0_OFFSET))(this, response);
		}

		::System::Void _PerformBindingFlow_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS___C__DISPLAYCLASS4_0__PERFORMBINDINGFLOW_B__1_OFFSET))(this, response);
		}
	};
}
