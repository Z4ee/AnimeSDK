#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FMChannelClientTransformMode_TypeDefinitionIndex = 65720;

	enum class FMChannelClientTransformMode : ::System::Int32
	{
		Scale = 0,
		Rotation = 1,
	};
}
