#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int EUnloadAssetReason_TypeDefinitionIndex = 55410;

	enum class EUnloadAssetReason : ::System::Int32
	{
		None = 0,
		OptimizeMemory = 2,
		OnDestroy = 1,
	};
}
