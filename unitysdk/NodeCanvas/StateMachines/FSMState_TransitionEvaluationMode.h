#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSMState_TransitionEvaluationMode_TypeDefinitionIndex = 29417;

	enum class FSMState_TransitionEvaluationMode : ::System::Int32
	{
		CheckAfterStateFinished = 1,
		CheckManually = 2,
		CheckContinuously = 0,
	};
}
