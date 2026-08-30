#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RechargeShopModule___c__DisplayClass33_0; }

#define RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS33_1__BUYGIFT_B__1_OFFSET UNITYSDK_OFFSET(0x1B64CC70)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B64CC60)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule___c__DisplayClass33_1_TypeDefinitionIndex = 66799;

	class RechargeShopModule___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::RPG::Client::RechargeShopModule___c__DisplayClass33_0* CS___8__locals1; // 0x10
		::System::Boolean purchaseSuccess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Void _BuyGift_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS33_1__BUYGIFT_B__1_OFFSET))(this, a1);
		}
	};
}
