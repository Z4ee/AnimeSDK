#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_ParticleSystemFreqMode_TypeDefinitionIndex = 62745;

	enum class EffectPatternInfoConfig_ParticleSystemFreqMode : ::System::Byte
	{
		kFreqModeKeepSpeed = 0x2,
		None = 0x0,
		kFreqModeSpeedScaling = 0x1,
	};
}
