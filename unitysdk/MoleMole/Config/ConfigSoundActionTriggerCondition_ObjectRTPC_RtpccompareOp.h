#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp_TypeDefinitionIndex = 47966;

	enum class ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp : ::System::Int32
	{
		Equal = 2,
		GreaterThan = 1,
		GreaterThanOrEqual = 4,
		LessThanOrEqual = 5,
		LessThan = 3,
		NotEqual = 6,
	};
}
