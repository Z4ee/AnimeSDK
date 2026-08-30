#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class BindingManagerPSCN; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE47C0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS9_0__GETCAPTCHACODE_B__0_OFFSET UNITYSDK_OFFSET(0x1ABE7A40)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS9_0__GETCAPTCHACODE_B__1_OFFSET UNITYSDK_OFFSET(0x1ABE7C10)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSCN___c__DisplayClass9_0_TypeDefinitionIndex = 8836;

	class BindingManagerPSCN___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnCaptchaResponse; // 0x10
		::System::String* input; // 0x18
		::MiHoYo::SDK::PS::BindingManagerPSCN* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetCaptchaCode_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS9_0__GETCAPTCHACODE_B__0_OFFSET))(this, a1);
		}

		::System::Void _GetCaptchaCode_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS9_0__GETCAPTCHACODE_B__1_OFFSET))(this, a1);
		}
	};
}
