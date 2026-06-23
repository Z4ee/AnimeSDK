#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetsUnloadType_TypeDefinitionIndex = 7942;

	enum class AssetsUnloadType : ::System::Int32
	{
		UnloadOnNextRestart = 1,
		Normal = 0,
		NeverUnload = 2,
	};
}
