#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class CNPayPlatManager; }
namespace MiHoYo::SDK::Win { class PayPlatInfoModel; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18499300)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS63_0__REQUESTQRCODETOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1849B110)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatManager___c__DisplayClass63_0_TypeDefinitionIndex = 8937;

	class CNPayPlatManager___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::String* requestId; // 0x10
		::MiHoYo::SDK::Win::CNPayPlatManager* __4__this; // 0x18
		::MiHoYo::SDK::Win::PayPlatInfoModel* payPlatInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestQRCodeToken_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__DISPLAYCLASS63_0__REQUESTQRCODETOKEN_B__0_OFFSET))(this, a1);
		}
	};
}
