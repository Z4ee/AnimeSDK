#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EnvWindTriggerMonoPlugin_WindApplyType_TypeDefinitionIndex = 67865;

	enum class EnvWindTriggerMonoPlugin_WindApplyType : ::System::Int32
	{
		Blend = 0,
		ForceReplace = 1,
	};
}
