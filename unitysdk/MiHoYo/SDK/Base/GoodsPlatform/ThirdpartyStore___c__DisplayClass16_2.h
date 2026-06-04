#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_2__CTOR_OFFSET UNITYSDK_OFFSET(0x181EDA20)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_2__EXCHANGESONYSTOREITEMINFO_B__2_OFFSET UNITYSDK_OFFSET(0x181EDAF0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int ThirdpartyStore___c__DisplayClass16_2_TypeDefinitionIndex = 8513;

	class ThirdpartyStore___c__DisplayClass16_2 : public ::System::Object
	{
	public:
		::System::String* originPriceId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _ExchangeSonyStoreItemInfo_b__2(::MiHoYo::SDK::Console::ConsoleProduct a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_2__EXCHANGESONYSTOREITEMINFO_B__2_OFFSET))(this, a1);
		}
	};
}
