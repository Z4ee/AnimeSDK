#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int UpdateMode_TypeDefinitionIndex = 56179;

	enum class UpdateMode : ::System::Int32
	{
		FixFrame2D = 10,
		AutoFrame2D = 11,
		AutoFrame = 1,
		FixFrame = 0,
		MovementCheck = 2,
	};
}
