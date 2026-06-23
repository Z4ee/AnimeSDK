#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int UpdateMode_TypeDefinitionIndex = 73935;

	enum class UpdateMode : ::System::Int32
	{
		MovementCheck = 2,
		FixFrame2D = 10,
		AutoFrame2D = 11,
		AutoFrame = 1,
		FixFrame = 0,
	};
}
