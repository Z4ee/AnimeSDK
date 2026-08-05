#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTriggerEventNode_EventType_TypeDefinitionIndex = 76130;

	enum class ConfigChessboardTriggerEventNode_EventType : ::System::Int32
	{
		PerformEvent = 0,
		CustomEvent = 2,
		SwitchEvent = 1,
	};
}
