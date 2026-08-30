#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }
namespace RPG::GameCore { class ItemConfig; }

#define RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194ED430)
#define RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS18_0__GETFULLREQUIREMENTCOSTS_B__0_OFFSET UNITYSDK_OFFSET(0x194EE5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemCostCalculator___c__DisplayClass18_0_TypeDefinitionIndex = 65761;

	class ItemCostCalculator___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::Proto::ItemCost* cost; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFullRequirementCosts_b__0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOSTCALCULATOR___C__DISPLAYCLASS18_0__GETFULLREQUIREMENTCOSTS_B__0_OFFSET))(this, a1);
		}
	};
}
