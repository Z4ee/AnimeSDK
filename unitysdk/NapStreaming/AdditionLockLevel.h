#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int AdditionLockLevel_TypeDefinitionIndex = 48811;

	enum class AdditionLockLevel : ::System::Int32
	{
		HLOD = 1,
		OBJECT = 2,
		UNLOCK = 0,
	};
}
