#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ColorGradingMaskWhitelist_MapEntity_TypeDefinitionIndex = 46675;

	struct alignas(4) ColorGradingMaskWhitelist_MapEntity
	{
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::Single FadeTime; // 0x18
	};
}
