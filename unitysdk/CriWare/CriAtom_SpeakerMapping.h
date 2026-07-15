#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtom_SpeakerMapping_TypeDefinitionIndex = 37751;

	enum class CriAtom_SpeakerMapping : ::System::Int32
	{
		Auto = 0,
		Monaural = 1,
		Stereo = 2,
		Ch5_1 = 3,
		Ch7_1 = 4,
		Ch5_1_2 = 5,
		Ch7_1_2 = 6,
		Ch7_1_4 = 7,
		Ch7_1_4_4 = 8,
		Ambisonics1p = 9,
		Ambisonics2p = 10,
		Ambisonics3p = 11,
		Object = 12,
		Custom = 13,
	};
}
