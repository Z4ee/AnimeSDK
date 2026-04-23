#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class BindingManagerPSOS; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175BE6C0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS28_0__REQUESTACTIONTICKET_B__0_OFFSET UNITYSDK_OFFSET(0x175C2AF0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindingManagerPSOS___c__DisplayClass28_0_TypeDefinitionIndex = 7661;

	class BindingManagerPSOS___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::String* actionType; // 0x10
		::MiHoYo::SDK::PS::BindingManagerPSOS* __4__this; // 0x18
		::System::String* account; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestActionTicket_b__0(::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS28_0__REQUESTACTIONTICKET_B__0_OFFSET))(this, accessToken);
		}
	};
}
