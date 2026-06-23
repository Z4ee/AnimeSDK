#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int DebugInfoType_TypeDefinitionIndex = 8389;

	enum class DebugInfoType : ::System::Int32
	{
		None = 0,
		SeperateCoroutines = 1,
		SeperateTags = 2,
	};
}
