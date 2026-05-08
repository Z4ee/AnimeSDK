#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class BindingManagerPSCN; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197E75D0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS10_0__PERFORMBINDINGFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x197E75E0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS10_0__PERFORMBINDINGFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x197E7850)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSCN___c__DisplayClass10_0_TypeDefinitionIndex = 19482;

	class BindingManagerPSCN___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PS::BindingManagerPSCN* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnReactivateInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _PerformBindingFlow_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS10_0__PERFORMBINDINGFLOW_B__0_OFFSET))(this, response);
		}

		::System::Void _PerformBindingFlow_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS10_0__PERFORMBINDINGFLOW_B__1_OFFSET))(this, response);
		}
	};
}
