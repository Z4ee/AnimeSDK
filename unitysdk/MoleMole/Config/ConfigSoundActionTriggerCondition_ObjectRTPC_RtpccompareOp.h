#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp_TypeDefinitionIndex = 77345;

	enum class ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp : ::System::Int32
	{
		Equal = 2,
		GreaterThan = 1,
		LessThan = 3,
		NotEqual = 6,
		LessThanOrEqual = 5,
		GreaterThanOrEqual = 4,
	};
}
