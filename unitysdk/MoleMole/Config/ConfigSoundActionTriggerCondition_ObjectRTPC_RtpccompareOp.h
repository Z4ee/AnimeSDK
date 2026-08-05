#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp_TypeDefinitionIndex = 81928;

	enum class ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp : ::System::Int32
	{
		NotEqual = 6,
		LessThan = 3,
		Equal = 2,
		GreaterThanOrEqual = 4,
		LessThanOrEqual = 5,
		GreaterThan = 1,
	};
}
