#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int UpdateMode_TypeDefinitionIndex = 77658;

	enum class UpdateMode : ::System::Int32
	{
		AutoFrame = 1,
		FixFrame = 0,
		AutoFrame2D = 11,
		MovementCheck = 2,
		FixFrame2D = 10,
	};
}
