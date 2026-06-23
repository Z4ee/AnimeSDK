#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_Step_TypeDefinitionIndex = 48092;

	enum class ParallelFileVerifier_Step : ::System::Int32
	{
		CheckResult = 3,
		FileHash = 2,
		Pre = 1,
		Init = 0,
		Finish = 4,
	};
}
