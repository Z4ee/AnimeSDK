#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Parallel_ParallelPolicy_TypeDefinitionIndex = 30645;

	enum class Parallel_ParallelPolicy : ::System::Int32
	{
		FirstFailure = 0,
		FirstSuccessOrFailure = 2,
		FirstSuccess = 1,
	};
}
