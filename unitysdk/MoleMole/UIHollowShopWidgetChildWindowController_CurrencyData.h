#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowShopWidgetChildWindowController_CurrencyCountType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController_CurrencyData_TypeDefinitionIndex = 66351;

	struct alignas(4) UIHollowShopWidgetChildWindowController_CurrencyData
	{
		::System::Int32 currencyCount; // 0x10
		::MoleMole::UIHollowShopWidgetChildWindowController_CurrencyCountType type; // 0x14
	};
}
