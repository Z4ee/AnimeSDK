#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }

#define RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5E310)
#define RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS20_0__GETITEMNEEDCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x16C5F320)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemCostCalculator___c__DisplayClass20_0_TypeDefinitionIndex = 62777;

	class ItemCostCalculator___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetItemNeedCount_b__0(::Proto::ItemCost* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS20_0__GETITEMNEEDCOUNT_B__0_OFFSET))(this, a1);
		}
	};
}
