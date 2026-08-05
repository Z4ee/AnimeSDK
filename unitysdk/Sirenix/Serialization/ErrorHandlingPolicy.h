#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ErrorHandlingPolicy_TypeDefinitionIndex = 6544;

	enum class ErrorHandlingPolicy : ::System::Int32
	{
		Resilient = 0,
		ThrowOnErrors = 1,
		ThrowOnWarningsAndErrors = 2,
	};
}
