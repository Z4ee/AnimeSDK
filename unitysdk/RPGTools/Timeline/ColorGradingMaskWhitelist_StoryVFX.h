#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ColorGradingMaskWhitelist_StoryVFX_TypeDefinitionIndex = 46673;

	struct alignas(8) ColorGradingMaskWhitelist_StoryVFX
	{
		::System::String* UniqueName; // 0x10
		::System::Single FadeTime; // 0x18
	};
}
