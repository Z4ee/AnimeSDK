#pragma once
#include "unitysdk/unitysdk.h"

namespace IFix::Core
{
	inline static constexpr unsigned int ExceptionHandlerType_TypeDefinitionIndex = 6940;

	enum class ExceptionHandlerType : ::System::Int32
	{
		Catch = 0,
		Filter = 1,
		Finally = 2,
		Fault = 4,
	};
}
