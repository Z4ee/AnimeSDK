#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class GooglePCManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177083A0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS26_0__SHOWGOOGLEWEBPAY_B__0_OFFSET UNITYSDK_OFFSET(0x1770B550)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCManager___c__DisplayClass26_0_TypeDefinitionIndex = 8094;

	class GooglePCManager___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::String* payGoodsId; // 0x10
		::MiHoYo::SDK::Win::GooglePCManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGoogleWebPay_b__0(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS26_0__SHOWGOOGLEWEBPAY_B__0_OFFSET))(this, result);
		}
	};
}
