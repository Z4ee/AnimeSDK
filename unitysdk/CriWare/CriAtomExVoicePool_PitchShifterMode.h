#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExVoicePool_PitchShifterMode_TypeDefinitionIndex = 38775;

	enum class CriAtomExVoicePool_PitchShifterMode : ::System::Int32
	{
		Music = 0,
		Vocal = 1,
		SoundEffect = 2,
		Speech = 3,
	};
}
