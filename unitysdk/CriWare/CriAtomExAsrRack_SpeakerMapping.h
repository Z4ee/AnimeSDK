#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsrRack_SpeakerMapping_TypeDefinitionIndex = 36784;

	enum class CriAtomExAsrRack_SpeakerMapping : ::System::Int32
	{
		Auto = 0,
		Monaural = 1,
		Stereo = 2,
		Ch5_1 = 3,
		Ch7_1 = 4,
		Ch5_1_2 = 5,
		Ch7_1_4 = 6,
	};
}
