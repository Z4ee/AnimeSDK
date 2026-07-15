#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UpdatePreloadTypeMethod_TypeDefinitionIndex = 57051;

	enum class UpdatePreloadTypeMethod : ::System::Int32
	{
		Set = 0,
		Upward = 1,
		Downward = 2,
	};
}
