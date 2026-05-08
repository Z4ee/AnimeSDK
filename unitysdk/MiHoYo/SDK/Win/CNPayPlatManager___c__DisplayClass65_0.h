#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class CNPayPlatManager; }
namespace MiHoYo::SDK::Win { class PayPlatInfoModel; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A081E20)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS65_0__REQUESTCHECKOUTV2_B__0_OFFSET UNITYSDK_OFFSET(0x1A081E30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatManager___c__DisplayClass65_0_TypeDefinitionIndex = 19862;

	class CNPayPlatManager___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::CNPayPlatManager* __4__this; // 0x10
		::MiHoYo::SDK::Win::PayPlatInfoModel* payPlatInfo; // 0x18
		::System::String* requestId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestCheckoutV2_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS65_0__REQUESTCHECKOUTV2_B__0_OFFSET))(this, response);
		}
	};
}
