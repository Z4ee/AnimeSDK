#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffShopGoodsItem; }

#define RPG_CLIENT_FATEBUFFSHOPDATA___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196F42C0)
#define RPG_CLIENT_FATEBUFFSHOPDATA___C__DISPLAYCLASS11_0__ISCANBUYBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x196F5190)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffShopData___c__DisplayClass11_0_TypeDefinitionIndex = 61205;

	class FateBuffShopData___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 buyIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsCanBuyBuff_b__0(::RPG::Client::FateBuffShopGoodsItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateBuffShopGoodsItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA___C__DISPLAYCLASS11_0__ISCANBUYBUFF_B__0_OFFSET))(this, a1);
		}
	};
}
