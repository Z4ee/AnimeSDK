#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_NapAnimatorUpdateMode_TypeDefinitionIndex = 48041;

	enum class ConfigMisc_NapAnimatorUpdateMode : ::System::Int32
	{
		Manual = 1,
		Normal = 0,
		Physics = 2,
	};
}
