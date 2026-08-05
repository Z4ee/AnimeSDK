#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphShadowOverrideConfig_TypeDefinitionIndex = 53053;

	struct alignas(4) PathGraphShadowOverrideConfig
	{
		::System::Boolean enableOverride; // 0x10
		::System::Boolean shadowFadeWithHeight; // 0x11
		::System::Single fadeStartHeight; // 0x14
		::System::Single fadeEndHeight; // 0x18
		::System::Single fadeStartDistance; // 0x1C
		::System::Single fadeEndDistance; // 0x20
	};
}
