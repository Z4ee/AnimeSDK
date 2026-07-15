#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraPageState_TypeDefinitionIndex = 60625;

	enum class ChimeraPageState : ::System::UInt32
	{
		None = 0x0,
		Entrance = 0x1,
		Goals = 0x2,
		NewMembers = 0x3,
		Arrangement = 0x4,
		Evaluation = 0x5,
	};
}
