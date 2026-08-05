#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSMState_TransitionEvaluationMode_TypeDefinitionIndex = 30270;

	enum class FSMState_TransitionEvaluationMode : ::System::Int32
	{
		CheckManually = 2,
		CheckContinuously = 0,
		CheckAfterStateFinished = 1,
	};
}
