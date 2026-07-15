#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialStepType_TypeDefinitionIndex = 10167;

	enum class HeartDialStepType : ::System::Int32
	{
		Missing = 0,
		Full = 1,
		Lock = 2,
		UnLock = 3,
		Normal = 4,
		Control = 5,
	};
}
