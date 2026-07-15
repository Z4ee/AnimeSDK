#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EquipmentItemData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_EXPITEMPLAN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C70BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator_ExpItemPlan_TypeDefinitionIndex = 62801;

	class LightConeQuickGrowCalculator_ExpItemPlan : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* ItemCosts; // 0x10
		::RPG::Client::EquipmentItemData* FirstSelectedEquip; // 0x18
		::System::UInt32 CoinCost; // 0x20
		::System::UInt32 LeftExp; // 0x24
		::System::UInt32 ProvidedExp; // 0x28
		::System::UInt32 PiledLightConeCount; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_EXPITEMPLAN__CTOR_OFFSET))(this);
		}
	};
}
