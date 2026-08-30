#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class GooglePCManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS27_0__CHECKOUTENTITLEMENTS_B__0_OFFSET UNITYSDK_OFFSET(0x15D40110)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D3D1E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCManager___c__DisplayClass27_0_TypeDefinitionIndex = 9280;

	class GooglePCManager___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::String* goods_id; // 0x10
		::MiHoYo::SDK::Win::GooglePCManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckoutEntitlements_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS27_0__CHECKOUTENTITLEMENTS_B__0_OFFSET))(this, a1);
		}
	};
}
