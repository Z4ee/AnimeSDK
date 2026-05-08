#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Parallel_ParallelPolicy_TypeDefinitionIndex = 26911;

	enum class Parallel_ParallelPolicy : ::System::Int32
	{
		FirstFailure = 0,
		FirstSuccess = 1,
		FirstSuccessOrFailure = 2,
	};
}
