#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int DebugInfoType_TypeDefinitionIndex = 8205;

	enum class DebugInfoType : ::System::Int32
	{
		SeperateTags = 2,
		None = 0,
		SeperateCoroutines = 1,
	};
}
