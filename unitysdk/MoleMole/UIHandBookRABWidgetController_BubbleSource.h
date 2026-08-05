#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRABWidgetController_BubbleSource_TypeDefinitionIndex = 83165;

	struct alignas(8) UIHandBookRABWidgetController_BubbleSource
	{
		::Share::ENotificationBadgeType NodeType; // 0x10
		::System::String* TipsKey; // 0x18
	};
}
