#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardTriggerEventNode_EventType_TypeDefinitionIndex = 50156;

	enum class ConfigChessboardTriggerEventNode_EventType : ::System::Int32
	{
		CustomEvent = 2,
		PerformEvent = 0,
		SwitchEvent = 1,
	};
}
