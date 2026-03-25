#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_SoundRendererType_TypeDefinitionIndex = 30979;

	enum class CriAtomEx_SoundRendererType : ::System::Int32
	{
		Default = 0,
		Native = 1,
		Asr = 2,
		Hw1 = 1,
		Hw2 = 9,
		Haptic = 3,
	};
}
