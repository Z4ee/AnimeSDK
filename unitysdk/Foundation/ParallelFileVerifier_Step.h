#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_Step_TypeDefinitionIndex = 51580;

	enum class ParallelFileVerifier_Step : ::System::Int32
	{
		CheckResult = 3,
		FileHash = 2,
		Init = 0,
		Pre = 1,
		Finish = 4,
	};
}
