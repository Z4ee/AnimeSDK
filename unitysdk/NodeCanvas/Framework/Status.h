#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Status_TypeDefinitionIndex = 30251;

	enum class Status : ::System::Int32
	{
		Optional = 5,
		Error = 4,
		Success = 1,
		Failure = 0,
		Running = 2,
		Resting = 3,
	};
}
