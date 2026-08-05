#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectSwitch_MatchMode_TypeDefinitionIndex = 78058;

	enum class ConfigSoundActionTriggerCondition_ObjectSwitch_MatchMode : ::System::Int32
	{
		Equals = 0,
		NotEquals = 1,
	};
}
