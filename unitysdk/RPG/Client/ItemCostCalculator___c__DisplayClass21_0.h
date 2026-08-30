#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }

#define RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD42FDF0)
#define RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS21_0___GETTARGETNEEDCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xD430D40)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemCostCalculator___c__DisplayClass21_0_TypeDefinitionIndex = 65763;

	class ItemCostCalculator___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetTargetNeedCount_b__0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS21_0___GETTARGETNEEDCOUNT_B__0_OFFSET))(this, a1);
		}
	};
}
