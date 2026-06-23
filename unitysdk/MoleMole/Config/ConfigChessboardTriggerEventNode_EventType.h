#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTriggerEventNode_EventType_TypeDefinitionIndex = 42059;

	enum class ConfigChessboardTriggerEventNode_EventType : ::System::Int32
	{
		SwitchEvent = 1,
		PerformEvent = 0,
		CustomEvent = 2,
	};
}
