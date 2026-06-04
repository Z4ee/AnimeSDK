#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }
namespace RPG::GameCore { class ItemConfig; }

#define RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBD64380)
#define RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS18_0__GETITEMNEEDCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xBD64F70)
#define RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS18_0__GETITEMNEEDCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0xBD64F50)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemCostCalculator___c__DisplayClass18_0_TypeDefinitionIndex = 61431;

	class ItemCostCalculator___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetItemNeedCount_b__1(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS18_0__GETITEMNEEDCOUNT_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _GetItemNeedCount_b__0(::Proto::ItemCost* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS18_0__GETITEMNEEDCOUNT_B__0_OFFSET))(this, a1);
		}
	};
}
