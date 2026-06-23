#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EvtDestructionSwitchType_TypeDefinitionIndex = 73337;

	enum class EvtDestructionSwitchType : ::System::Int32
	{
		EnterStatus = 1,
		Die = 2,
		ExitStatus = 0,
	};
}
