#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EquipmentItemData; }

#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD443320)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS49_0___COLLECTPILEEQUIPMENTS_B__0_OFFSET UNITYSDK_OFFSET(0xD443A30)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator___c__DisplayClass49_0_TypeDefinitionIndex = 65793;

	class LightConeQuickGrowCalculator___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::UInt32 targetConfigID; // 0x10
		::System::UInt32 rarityFilter; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectPileEquipments_b__0(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS49_0___COLLECTPILEEQUIPMENTS_B__0_OFFSET))(this, a1);
		}
	};
}
