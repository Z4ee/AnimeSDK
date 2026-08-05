#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFeatureEvent_TypeDefinitionIndex = 41159;

	enum class EViewObjectComponentFeatureEvent : ::System::Int32
	{
		OnPostReady = 1,
		OnEntityAndGraphReady = 4,
		None = 0,
		OnEntityReset = 5,
		OnEntityPreReady = 2,
		OnAfterPostReady = 6,
		OnEntityReady = 3,
	};
}
