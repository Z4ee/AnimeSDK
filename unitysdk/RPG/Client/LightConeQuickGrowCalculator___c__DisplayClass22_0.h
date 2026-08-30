#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E0B808936AD386AC;
namespace RPG::Client { class LightConeQuickGrowCalculator; }

#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194FEE30)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0___FILLREQCOSTLISTS_B__0_OFFSET UNITYSDK_OFFSET(0x19500F40)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0___FILLREQCOSTLISTS_B__1_OFFSET UNITYSDK_OFFSET(0x19500FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator___c__DisplayClass22_0_TypeDefinitionIndex = 65788;

	class LightConeQuickGrowCalculator___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::Class_1_E0B808936AD386AC* actualTotal; // 0x10
		::Class_1_E0B808936AD386AC* actualPromotion; // 0x18
		::RPG::Client::LightConeQuickGrowCalculator* __4__this; // 0x20
		::Class_1_E0B808936AD386AC* nonPileCosts; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void __FillReqCostLists_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0___FILLREQCOSTLISTS_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void __FillReqCostLists_b__1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS22_0___FILLREQCOSTLISTS_B__1_OFFSET))(this, a1, a2);
		}
	};
}
