#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PRODUCTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1761CEB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProductInfo_TypeDefinitionIndex = 6639;

	class ProductInfo : public ::System::Object
	{
	public:
		// static const ::System::String* COUNTRY_CODE; // 0x0
		// static const ::System::String* CURRENCY_CODE; // 0x0
		// static const ::System::String* CURRENCY_SYMBOL; // 0x0
		// static const ::System::String* GOODS_NAME; // 0x0
		// static const ::System::String* GOODS_DESC; // 0x0
		// static const ::System::String* PRODUCT_DESC; // 0x0
		// static const ::System::String* PRODUCT_NAME; // 0x0
		// static const ::System::String* PRICE; // 0x0
		// static const ::System::String* PRICE_TIER; // 0x0
		// static const ::System::String* PRODUCT_ID; // 0x0
		// static const ::System::String* SHOW_PRICE; // 0x0
		// static const ::System::String* EOS_OFFER_ID; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRODUCTINFO__CTOR_OFFSET))(this);
		}
	};
}
