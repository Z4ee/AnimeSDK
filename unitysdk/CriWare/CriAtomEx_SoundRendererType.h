#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_SoundRendererType_TypeDefinitionIndex = 37794;

	enum class CriAtomEx_SoundRendererType : ::System::Int32
	{
		Default = 0,
		Native = 1,
		Asr = 2,
		Extended = 3,
		Spatial = 4,
		Hw1 = 1,
		Hw2 = 65537,
		Hw3 = 131073,
		Hw4 = 196609,
		Haptic = 3,
		Pseudo = 65539,
		SpatialChannels = 4,
		Ambisonics = 65540,
		Passtrough = 131076,
		Object = 196612,
	};
}
