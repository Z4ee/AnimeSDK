#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleCardItemCollectPageController_TabData_TypeDefinitionIndex = 66586;

	struct alignas(8) UITriDiceOracleCardItemCollectPageController_TabData
	{
		::Class_2_B89683A15B3B0C43_Enum_3_55DEA7760B94F1B2 type; // 0x10
		::System::String* typeName; // 0x18
		::Share::ENotificationBadgeType badgeType; // 0x20
	};
}
