#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialCacheMaterialState_TypeDefinitionIndex = 66697;

	enum class MaterialCacheMaterialState : ::System::Int32
	{
		Shared = 0,
		Instance = 1,
		SharedInstance = 2,
	};
}
