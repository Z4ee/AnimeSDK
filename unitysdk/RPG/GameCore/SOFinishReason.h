#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SOFinishReason_TypeDefinitionIndex = 54325;

	enum class SOFinishReason : ::System::Int32
	{
		Finish = 0,
		UserAbort = 1,
		NewRequest = 2,
		Dispose = 3,
	};
}
