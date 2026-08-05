#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EvtDestructionSwitchType_TypeDefinitionIndex = 90654;

	enum class EvtDestructionSwitchType : ::System::Int32
	{
		ExitStatus = 0,
		Die = 2,
		EnterStatus = 1,
	};
}
