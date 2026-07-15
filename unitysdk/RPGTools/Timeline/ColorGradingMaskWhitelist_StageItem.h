#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ColorGradingMaskWhitelist_StageItem_TypeDefinitionIndex = 46674;

	struct alignas(8) ColorGradingMaskWhitelist_StageItem
	{
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
		::System::Single FadeTime; // 0x20
	};
}
