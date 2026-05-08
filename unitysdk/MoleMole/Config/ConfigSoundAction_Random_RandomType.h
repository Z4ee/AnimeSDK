#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Random_RandomType_TypeDefinitionIndex = 78569;

	enum class ConfigSoundAction_Random_RandomType : ::System::Int32
	{
		Standard = 0,
		Shuffle = 1,
	};
}
