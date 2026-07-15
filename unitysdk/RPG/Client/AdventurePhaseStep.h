#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseStep_TypeDefinitionIndex = 57446;

	enum class AdventurePhaseStep : ::System::Int32
	{
		None = 0,
		Step1 = 1,
		Step2 = 2,
		Step3 = 3,
		BeforeFinishPerformanceStep = 4,
		FinalStep = 5,
		Inited = 6,
		LeaveStep1 = 7,
		Disposing = 8,
		LeaveStep2 = 9,
		LeaveFinalStep = 10,
	};
}
