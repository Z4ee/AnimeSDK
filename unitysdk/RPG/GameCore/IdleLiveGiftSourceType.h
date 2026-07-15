#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGiftSourceType_TypeDefinitionIndex = 11388;

	enum class IdleLiveGiftSourceType : ::System::Int32
	{
		Unlock = 1,
		FinalAct = 2,
		Question = 3,
	};
}
