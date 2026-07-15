#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtInsertActionPhase_TypeDefinitionIndex = 51642;

	enum class RtInsertActionPhase : ::System::Int32
	{
		Init = 0,
		Waiting = 1,
		Executing = 2,
		Finish = 3,
		Cancel = 4,
	};
}
