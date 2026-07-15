#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueGambleMachineType_TypeDefinitionIndex = 10249;

	enum class RogueGambleMachineType : ::System::Int32
	{
		Unknown = 0,
		SlotMachine = 1,
		FortuneWheel = 2,
	};
}
