#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AssetLoadPriority_TypeDefinitionIndex = 40088;

	enum class AssetLoadPriority : ::System::Int32
	{
		eLow = 0,
		eMiddle = 1,
		eHigh = 2,
	};
}
