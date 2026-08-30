#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }
namespace RPG::Client { class LightConeQuickGrowCalculator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194FF530)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS27_0___BUILDPROMOTIONCOSTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x19501240)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator___c__DisplayClass27_0_TypeDefinitionIndex = 65792;

	class LightConeQuickGrowCalculator___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::LightConeQuickGrowCalculator* __4__this; // 0x10
		::System::Collections::Generic::List_1<::Proto::ItemCost*>* result; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void __BuildPromotionCostList_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS27_0___BUILDPROMOTIONCOSTLIST_B__0_OFFSET))(this, a1, a2);
		}
	};
}
