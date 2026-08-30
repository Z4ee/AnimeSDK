#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class LightConeQuickGrowCalculator; }

#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD4434F0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS50_0___CALCULATETOTALLIGHTCONECOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xD443AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator___c__DisplayClass50_0_TypeDefinitionIndex = 65794;

	class LightConeQuickGrowCalculator___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::RPG::Client::LightConeQuickGrowCalculator* __4__this; // 0x10
		::System::UInt32 rarityFilter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CalculateTotalLightConeCount_b__0(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS50_0___CALCULATETOTALLIGHTCONECOUNT_B__0_OFFSET))(this, a1);
		}
	};
}
