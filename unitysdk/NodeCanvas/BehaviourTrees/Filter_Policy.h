#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Filter_Policy_TypeDefinitionIndex = 27119;

	enum class Filter_Policy : ::System::Int32
	{
		SuccessOnly = 1,
		SuccessOrFailure = 0,
		FailureOnly = 2,
	};
}
