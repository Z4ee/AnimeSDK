#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Scope_MatchMode_TypeDefinitionIndex = 51553;

	enum class ConfigSoundActionTriggerCondition_Scope_MatchMode : ::System::Int32
	{
		Equals = 0,
		NotEquals = 1,
	};
}
