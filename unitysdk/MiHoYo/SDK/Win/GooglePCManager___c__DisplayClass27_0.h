#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class GooglePCManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS27_0__CHECKOUTENTITLEMENTS_B__0_OFFSET UNITYSDK_OFFSET(0x1D4BEA40)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BEA30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCManager___c__DisplayClass27_0_TypeDefinitionIndex = 21433;

	class GooglePCManager___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::GooglePCManager* __4__this; // 0x10
		::System::String* goods_id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckoutEntitlements_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS27_0__CHECKOUTENTITLEMENTS_B__0_OFFSET))(this, response);
		}
	};
}
