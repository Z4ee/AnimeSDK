#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RechargeShopModule; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS31_0__BUYGIFT_B__0_OFFSET UNITYSDK_OFFSET(0xA28CB70)
#define RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA28C290)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopModule___c__DisplayClass31_0_TypeDefinitionIndex = 54351;

	class RechargeShopModule___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x10
		::RPG::Client::RechargeShopModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuyGift_b__0(::RPG::Client::PayProductResult result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PayProductResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPMODULE___C__DISPLAYCLASS31_0__BUYGIFT_B__0_OFFSET))(this, result);
		}
	};
}
