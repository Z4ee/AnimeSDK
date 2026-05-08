#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Group_CombineOp_TypeDefinitionIndex = 65632;

	enum class ConfigSoundActionTriggerCondition_Group_CombineOp : ::System::Int32
	{
		Or = 1,
		And = 0,
	};
}
