#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_State_MatchMode_TypeDefinitionIndex = 86962;

	enum class ConfigSoundActionTriggerCondition_State_MatchMode : ::System::Int32
	{
		NotEquals = 1,
		Equals = 0,
	};
}
