#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int EUnloadAssetReason_TypeDefinitionIndex = 73780;

	enum class EUnloadAssetReason : ::System::Int32
	{
		OnDestroy = 1,
		None = 0,
		OptimizeMemory = 2,
	};
}
