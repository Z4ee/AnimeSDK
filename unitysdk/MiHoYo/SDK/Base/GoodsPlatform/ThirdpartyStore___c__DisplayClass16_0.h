#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F2440)
#define MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_0__EXCHANGESONYSTOREITEMINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1A3F2450)

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int ThirdpartyStore___c__DisplayClass16_0_TypeDefinitionIndex = 19435;

	class ThirdpartyStore___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONArray* goods; // 0x10
		::System::Action_4<::MiHoYo::SDK::JSONArray*, ::System::Boolean, ::System::Int32, ::System::Int64>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExchangeSonyStoreItemInfo_b__0(::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>* products, ::System::Boolean fromCache, ::System::Int32 errorCode, ::System::Int64 thirdPartyDuration)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MiHoYo::SDK::Console::ConsoleProduct>*, ::System::Boolean, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_GOODSPLATFORM_THIRDPARTYSTORE___C__DISPLAYCLASS16_0__EXCHANGESONYSTOREITEMINFO_B__0_OFFSET))(this, products, fromCache, errorCode, thirdPartyDuration);
		}
	};
}
