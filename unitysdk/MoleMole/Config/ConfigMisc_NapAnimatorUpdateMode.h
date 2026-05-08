#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_NapAnimatorUpdateMode_TypeDefinitionIndex = 63728;

	enum class ConfigMisc_NapAnimatorUpdateMode : ::System::Int32
	{
		Physics = 2,
		Normal = 0,
		Manual = 1,
	};
}
