#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_LoadOption_TypeDefinitionIndex = 65349;

	enum class ComponentAssetLoader_LoadOption : ::System::Int32
	{
		LoadOnAwake = 1,
		LoadOnEnable = 2,
		UnloadOnDisable = 4,
		UnloadOnDespawn = 8,
		ResetDefaultOnDespawn = 16,
	};
}
