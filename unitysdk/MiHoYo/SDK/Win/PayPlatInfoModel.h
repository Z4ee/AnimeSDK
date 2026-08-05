#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/CNPayPlatType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class MerchantInfoModel; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_PAYPLATINFOMODEL_GETPAYPLATTYPE_OFFSET UNITYSDK_OFFSET(0x1D4C8050)
#define MIHOYO_SDK_WIN_PAYPLATINFOMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C8190)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayPlatInfoModel_TypeDefinitionIndex = 21352;

	class PayPlatInfoModel : public ::System::Object
	{
	public:
		::System::Boolean is_recommend; // 0x10
		::System::String* market_word; // 0x18
		::MiHoYo::SDK::Win::MerchantInfoModel* merchant_info; // 0x20
		::System::String* pay_plat; // 0x28
		::System::String* pay_type; // 0x30
		::System::String* pay_type_name; // 0x38
		::System::String* market_id; // 0x40
		::System::Boolean use_market; // 0x48
		::System::Boolean use_official_qrcode; // 0x49
		::System::String* real_cashier_id; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYPLATINFOMODEL__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::CNPayPlatType GetPayPlatType()
		{
			return ((::MiHoYo::SDK::CNPayPlatType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYPLATINFOMODEL_GETPAYPLATTYPE_OFFSET))(this);
		}
	};
}
