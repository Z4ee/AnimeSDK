#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController_IconPair_TypeDefinitionIndex = 43613;

	struct alignas(8) UIGeneralNewsBubbleRowWidgetController_IconPair
	{
		::System::String* iconRating; // 0x10
		::System::String* iconRatingSplitFg; // 0x18
		::System::String* iconRatingSplitBg; // 0x20
	};
}
