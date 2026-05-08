#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSMState_TransitionEvaluationMode_TypeDefinitionIndex = 28089;

	enum class FSMState_TransitionEvaluationMode : ::System::Int32
	{
		CheckContinuously = 0,
		CheckManually = 2,
		CheckAfterStateFinished = 1,
	};
}
