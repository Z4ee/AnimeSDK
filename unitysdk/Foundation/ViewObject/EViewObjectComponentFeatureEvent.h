#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFeatureEvent_TypeDefinitionIndex = 51260;

	enum class EViewObjectComponentFeatureEvent : ::System::Int32
	{
		None = 0,
		OnEntityAndGraphReady = 3,
		OnPostReady = 1,
		OnEntityReady = 2,
	};
}
