#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingPerformanceType_TypeDefinitionIndex = 62069;

	enum class SwordTrainingPerformanceType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		ExamSuccess = 2,
		ExamFail = 3,
		Ending = 4,
	};
}
