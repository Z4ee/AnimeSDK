#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EnvWindReceiverMonoPlugin_WindDirectionUpdateMode_TypeDefinitionIndex = 67859;

	enum class EnvWindReceiverMonoPlugin_WindDirectionUpdateMode : ::System::Int32
	{
		PerFrame = 0,
		OnEnableOnly = 1,
	};
}
