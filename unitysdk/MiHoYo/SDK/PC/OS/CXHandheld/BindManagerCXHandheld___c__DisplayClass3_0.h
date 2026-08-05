#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class BindManagerCXHandheld; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0F4D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__DISPLAYCLASS3_0__PERFORMBINDINGFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1DA0F4E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__DISPLAYCLASS3_0__PERFORMBINDINGFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1DA0F990)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerCXHandheld___c__DisplayClass3_0_TypeDefinitionIndex = 20836;

	class BindManagerCXHandheld___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerCXHandheld* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnLoginResult; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _PerformBindingFlow_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__DISPLAYCLASS3_0__PERFORMBINDINGFLOW_B__0_OFFSET))(this, response);
		}

		::System::Void _PerformBindingFlow_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__DISPLAYCLASS3_0__PERFORMBINDINGFLOW_B__1_OFFSET))(this, response);
		}
	};
}
