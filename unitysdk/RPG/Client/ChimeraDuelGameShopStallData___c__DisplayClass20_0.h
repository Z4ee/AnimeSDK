#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA014B20)
#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C__DISPLAYCLASS20_0__REMOVEITEM_B__0_OFFSET UNITYSDK_OFFSET(0xA014EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameShopStallData___c__DisplayClass20_0_TypeDefinitionIndex = 58341;

	class ChimeraDuelGameShopStallData___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::UInt32 uniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveItem_b__0(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLDATA___C__DISPLAYCLASS20_0__REMOVEITEM_B__0_OFFSET))(this, uid);
		}
	};
}
