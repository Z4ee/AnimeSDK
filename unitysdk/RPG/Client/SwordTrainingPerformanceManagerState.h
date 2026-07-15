#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingPerformanceManagerState_TypeDefinitionIndex = 59238;

	enum class SwordTrainingPerformanceManagerState : ::System::Int32
	{
		None = 0,
		Empty = 1,
		Ready = 2,
		WaitForLoading = 3,
		Playing = 4,
	};
}
