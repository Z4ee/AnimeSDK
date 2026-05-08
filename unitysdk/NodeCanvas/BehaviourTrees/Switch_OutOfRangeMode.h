#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Switch_OutOfRangeMode_TypeDefinitionIndex = 26468;

	enum class Switch_OutOfRangeMode : ::System::Int32
	{
		LoopIndex = 1,
		ReturnFailure = 0,
	};
}
