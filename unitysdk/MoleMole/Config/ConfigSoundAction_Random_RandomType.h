#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Random_RandomType_TypeDefinitionIndex = 54980;

	enum class ConfigSoundAction_Random_RandomType : ::System::Int32
	{
		Shuffle = 1,
		Standard = 0,
	};
}
