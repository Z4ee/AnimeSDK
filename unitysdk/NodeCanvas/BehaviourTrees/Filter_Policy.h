#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Filter_Policy_TypeDefinitionIndex = 30641;

	enum class Filter_Policy : ::System::Int32
	{
		SuccessOrFailure = 0,
		SuccessOnly = 1,
		FailureOnly = 2,
	};
}
