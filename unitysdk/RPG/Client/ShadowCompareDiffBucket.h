#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ShadowCompareDiffBucket_TypeDefinitionIndex = 59424;

	enum class ShadowCompareDiffBucket : ::System::Int32
	{
		None = 0,
		Expected = 1,
		Unexpected = 2,
		FocusObserveOnly = 3,
	};
}
