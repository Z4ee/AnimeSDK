#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangBooUAVCardItemCollectPageController_BangbooTabType.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVCardItemCollectPageController_TabData_TypeDefinitionIndex = 52315;

	struct alignas(8) UIBangBooUAVCardItemCollectPageController_TabData
	{
		::MoleMole::UIBangBooUAVCardItemCollectPageController_BangbooTabType type; // 0x10
		::System::String* typeName; // 0x18
		::Share::ENotificationBadgeType badgeType; // 0x20
	};
}
