#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int AdditionLockLevel_TypeDefinitionIndex = 45309;

	enum class AdditionLockLevel : ::System::Int32
	{
		HLOD = 1,
		UNLOCK = 0,
		OBJECT = 2,
	};
}
