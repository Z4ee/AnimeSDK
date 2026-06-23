#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_ParticleSystemFreqMode_TypeDefinitionIndex = 78993;

	enum class EffectPatternInfoConfig_ParticleSystemFreqMode : ::System::Byte
	{
		kFreqModeKeepSpeed = 0x2,
		kFreqModeSpeedScaling = 0x1,
		None = 0x0,
	};
}
