#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1991FE90)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_1__EXCHANGESONYSTOREITEMINFO_B__1_OFFSET UNITYSDK_OFFSET(0x1991FEA0)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int ThirdpartyStore___c__DisplayClass16_1_TypeDefinitionIndex = 19436;

	class ThirdpartyStore___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* good; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _ExchangeSonyStoreItemInfo_b__1(::MiHoYo::SDK::Console::ConsoleProduct t)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleProduct))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_1__EXCHANGESONYSTOREITEMINFO_B__1_OFFSET))(this, t);
		}
	};
}
