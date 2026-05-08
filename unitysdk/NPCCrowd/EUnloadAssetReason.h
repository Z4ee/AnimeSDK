#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int EUnloadAssetReason_TypeDefinitionIndex = 81884;

	enum class EUnloadAssetReason : ::System::Int32
	{
		OnDestroy = 1,
		OptimizeMemory = 2,
		None = 0,
	};
}
