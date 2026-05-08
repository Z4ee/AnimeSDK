#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Iterator_TerminationConditions_TypeDefinitionIndex = 27255;

	enum class Iterator_TerminationConditions : ::System::Int32
	{
		FirstFailure = 2,
		None = 0,
		FirstSuccess = 1,
	};
}
