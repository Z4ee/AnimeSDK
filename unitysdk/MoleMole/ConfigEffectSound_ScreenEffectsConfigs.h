#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }

namespace MoleMole
{
	inline static constexpr unsigned int ConfigEffectSound_ScreenEffectsConfigs_TypeDefinitionIndex = 64273;

	struct alignas(8) ConfigEffectSound_ScreenEffectsConfigs
	{
		::MoleMole::Config::ConfigSoundActionGeneral* beginSoundAction; // 0x10
		::MoleMole::Config::ConfigSoundActionGeneral* endSoundAction; // 0x18
	};
}
