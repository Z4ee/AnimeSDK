#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_Step_TypeDefinitionIndex = 62635;

	enum class ParallelFileVerifier_Step : ::System::Int32
	{
		Init = 0,
		FileHash = 2,
		Pre = 1,
		CheckResult = 3,
		Finish = 4,
	};
}
