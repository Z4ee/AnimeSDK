#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicMaterialLoader_LoadOption_TypeDefinitionIndex = 65363;

	enum class DynamicMaterialLoader_LoadOption : ::System::Int32
	{
		LoadOnAwake = 1,
		LoadOnEnable = 2,
		UnloadOnDisable = 4,
		UnloadOnDespawn = 8,
	};
}
