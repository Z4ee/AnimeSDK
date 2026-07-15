#pragma once
#include "unitysdk/unitysdk.h"

namespace PlayGoSample
{
	inline static constexpr unsigned int PS5PlayGoInitState_TypeDefinitionIndex = 47800;

	enum class PS5PlayGoInitState : ::System::Int32
	{
		NullState = 0,
		Wait = 1,
		Initialize = 2,
		Open = 3,
		GetChunkIDs = 4,
		QueryCompleteState = 5,
		Fail = 6,
		Success = 7,
	};
}
