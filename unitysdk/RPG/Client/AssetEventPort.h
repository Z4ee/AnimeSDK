#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AssetEventPort_TypeDefinitionIndex = 39226;

	enum class AssetEventPort : ::System::Int32
	{
		Done = 0,
		Before = 1,
		After = 2,
		Count = 3,
	};
}
