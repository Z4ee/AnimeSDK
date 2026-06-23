#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS13_0__CREATETHIRDPARTYBINDMOBILEACTIONTICKET_B__0_OFFSET UNITYSDK_OFFSET(0x1B338270)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B338260)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSCN___c__DisplayClass13_0_TypeDefinitionIndex = 20644;

	class BindingManagerPSCN___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateThirdpartyBindMobileActionTicket_b__0(::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSCN___C__DISPLAYCLASS13_0__CREATETHIRDPARTYBINDMOBILEACTIONTICKET_B__0_OFFSET))(this, accessToken);
		}
	};
}
