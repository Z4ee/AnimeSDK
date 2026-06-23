#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class BindingManagerPSOS; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS27_0__BINDEMAIL_B__0_OFFSET UNITYSDK_OFFSET(0x1B5C3CD0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS27_0__BINDEMAIL_B__1_OFFSET UNITYSDK_OFFSET(0x1B5C4060)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C3CC0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSOS___c__DisplayClass27_0_TypeDefinitionIndex = 20648;

	class BindingManagerPSOS___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnBindResult; // 0x10
		::MiHoYo::SDK::PS::BindingManagerPSOS* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindEmail_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS27_0__BINDEMAIL_B__0_OFFSET))(this, response);
		}

		::System::Void _BindEmail_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS27_0__BINDEMAIL_B__1_OFFSET))(this, response);
		}
	};
}
