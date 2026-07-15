#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_LinuxOutput_TypeDefinitionIndex = 38002;

	enum class CriAtomConfig_LinuxOutput : ::System::Int32
	{
		Default = 0,
		PulseAudio = 1,
		ALSA = 2,
	};
}
