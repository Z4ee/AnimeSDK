#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFeatureEvent_TypeDefinitionIndex = 54394;

	enum class EViewObjectComponentFeatureEvent : ::System::Int32
	{
		OnPostReady = 1,
		OnEntityReady = 2,
		OnEntityAndGraphReady = 3,
		None = 0,
	};
}
