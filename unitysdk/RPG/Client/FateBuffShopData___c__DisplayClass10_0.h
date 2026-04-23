#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffShopGoodsItem; }

#define RPG_CLIENT_FATEBUFFSHOPDATA___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3307D0)
#define RPG_CLIENT_FATEBUFFSHOPDATA___C__DISPLAYCLASS10_0__GETSHOPGOODSITEM_B__0_OFFSET UNITYSDK_OFFSET(0xA3318D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffShopData___c__DisplayClass10_0_TypeDefinitionIndex = 58989;

	class FateBuffShopData___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShopGoodsItem_b__0(::RPG::Client::FateBuffShopGoodsItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateBuffShopGoodsItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFSHOPDATA___C__DISPLAYCLASS10_0__GETSHOPGOODSITEM_B__0_OFFSET))(this, x);
		}
	};
}
