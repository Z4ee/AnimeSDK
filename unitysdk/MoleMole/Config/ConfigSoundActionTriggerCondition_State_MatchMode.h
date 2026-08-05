#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_State_MatchMode_TypeDefinitionIndex = 63020;

	enum class ConfigSoundActionTriggerCondition_State_MatchMode : ::System::Int32
	{
		Equals = 0,
		NotEquals = 1,
	};
}
