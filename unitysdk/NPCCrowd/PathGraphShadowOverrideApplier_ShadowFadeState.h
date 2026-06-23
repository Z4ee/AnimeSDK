#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int PathGraphShadowOverrideApplier_ShadowFadeState_TypeDefinitionIndex = 80509;

	struct alignas(4) PathGraphShadowOverrideApplier_ShadowFadeState
	{
		::System::Boolean shadowFadeWithHeight; // 0x10
		::System::Single fadeStartHeight; // 0x14
		::System::Single fadeEndHeight; // 0x18
		::System::Single fadeStartDistance; // 0x1C
		::System::Single fadeEndDistance; // 0x20
		::System::Boolean needResetShadowCasting; // 0x24
	};
}
