#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Filter_Policy_TypeDefinitionIndex = 30991;

	enum class Filter_Policy : ::System::Int32
	{
		SuccessOrFailure = 0,
		SuccessOnly = 1,
		FailureOnly = 2,
	};
}
