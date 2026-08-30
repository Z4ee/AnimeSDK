#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_SegmentType_TypeDefinitionIndex = 70879;

	enum class LoopGenerateBehavior_SegmentType : ::System::Int32
	{
		Middle = 0,
		Endpoint = 1,
	};
}
