#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RechargeShopModule___c__DisplayClass31_0; }

#define RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS31_1__BUYGIFT_B__1_OFFSET UNITYSDK_OFFSET(0xA28CC50)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS31_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA28CC40)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule___c__DisplayClass31_1_TypeDefinitionIndex = 54352;

	class RechargeShopModule___c__DisplayClass31_1 : public ::System::Object
	{
	public:
		::RPG::Client::RechargeShopModule___c__DisplayClass31_0* CS___8__locals1; // 0x10
		::System::Boolean purchaseSuccess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS31_1__CTOR_OFFSET))(this);
		}

		::System::Void _BuyGift_b__1(::System::Boolean refreshSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS31_1__BUYGIFT_B__1_OFFSET))(this, refreshSuccess);
		}
	};
}
