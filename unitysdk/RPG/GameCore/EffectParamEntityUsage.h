#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectParamEntityUsage_TypeDefinitionIndex = 23629;

	enum class EffectParamEntityUsage : ::System::Int32
	{
		None = 0,
		LookAt = 1,
		ModelCapture = 2,
		IconCapture = 3,
		ChildNodeFollow = 4,
		Mutex = 5,
		VertexCollaspe = 6,
		Custom = 7,
	};
}
