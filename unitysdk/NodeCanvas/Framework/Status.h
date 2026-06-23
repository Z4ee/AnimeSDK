#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Status_TypeDefinitionIndex = 30083;

	enum class Status : ::System::Int32
	{
		Running = 2,
		Error = 4,
		Optional = 5,
		Success = 1,
		Resting = 3,
		Failure = 0,
	};
}
