#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Status_TypeDefinitionIndex = 27635;

	enum class Status : ::System::Int32
	{
		Failure = 0,
		Error = 4,
		Running = 2,
		Success = 1,
		Optional = 5,
		Resting = 3,
	};
}
