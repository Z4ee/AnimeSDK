#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_DspBusOutputType_TypeDefinitionIndex = 37871;

	enum class CriAtomExAcf_DspBusOutputType : ::System::Int32
	{
		None = 0,
		Main = 1,
		MainPassthrough = 2,
		PadHaptic = 3,
		PadSpeaker = 4,
		Personal = 5,
		PersonalPassthrough = 6,
	};
}
