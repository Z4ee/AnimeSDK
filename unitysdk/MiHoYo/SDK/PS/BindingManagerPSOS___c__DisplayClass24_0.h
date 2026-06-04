#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class BindingManagerPSOS; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183A2E70)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0__PERFORMBINDINGFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x183A5F30)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0__PERFORMBINDINGFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x183A6570)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSOS___c__DisplayClass24_0_TypeDefinitionIndex = 8561;

	class BindingManagerPSOS___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnLoginResult; // 0x10
		::MiHoYo::SDK::PS::BindingManagerPSOS* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _PerformBindingFlow_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0__PERFORMBINDINGFLOW_B__0_OFFSET))(this, a1);
		}

		::System::Void _PerformBindingFlow_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0__PERFORMBINDINGFLOW_B__1_OFFSET))(this, a1);
		}
	};
}
