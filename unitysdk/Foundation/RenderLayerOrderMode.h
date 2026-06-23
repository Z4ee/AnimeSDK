#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int RenderLayerOrderMode_TypeDefinitionIndex = 89298;

	enum class RenderLayerOrderMode : ::System::Int32
	{
		CompactSort = 0,
		AppendOnly = 1,
		SharedOrder = 2,
	};
}
