#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BlushLockedTransformChannel_TypeDefinitionIndex = 70225;

	enum class BlushLockedTransformChannel : ::System::Int32
	{
		None = 0,
		Position = 1,
		Rotation = 2,
		Scale = 4,
	};
}
