#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectAudioEmitterType_TypeDefinitionIndex = 66893;

	enum class MonoEffectAudioEmitterType : ::System::Int32
	{
		Caster = 0,
		EffectSelf = 1,
		GlobalDefault = 2,
		Target = 3,
	};
}
