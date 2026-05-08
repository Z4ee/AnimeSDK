#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetsUnloadType_TypeDefinitionIndex = 7873;

	enum class AssetsUnloadType : ::System::Int32
	{
		NeverUnload = 2,
		Normal = 0,
		UnloadOnNextRestart = 1,
	};
}
