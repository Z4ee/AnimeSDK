#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EvtDestructionSwitchType_TypeDefinitionIndex = 50073;

	enum class EvtDestructionSwitchType : ::System::Int32
	{
		Die = 2,
		EnterStatus = 1,
		ExitStatus = 0,
	};
}
