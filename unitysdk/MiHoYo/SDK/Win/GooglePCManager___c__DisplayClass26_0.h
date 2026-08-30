#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class GooglePCManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8427A0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS26_0__SHOWGOOGLEWEBPAY_B__0_OFFSET UNITYSDK_OFFSET(0x1B845A30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCManager___c__DisplayClass26_0_TypeDefinitionIndex = 9279;

	class GooglePCManager___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::GooglePCManager* __4__this; // 0x10
		::System::String* payGoodsId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGoogleWebPay_b__0(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER___C__DISPLAYCLASS26_0__SHOWGOOGLEWEBPAY_B__0_OFFSET))(this, a1);
		}
	};
}
