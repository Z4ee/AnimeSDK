#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_CueType_TypeDefinitionIndex = 37816;

	enum class CriAtomEx_CueType : ::System::Int32
	{
		Polyphonic = 0,
		Sequential = 1,
		Shuffle = 2,
		Random = 3,
		RandomNoRepeat = 4,
		SwitchGameVariable = 5,
		ComboSequential = 6,
		SwitchSelector = 7,
		TrackTransitionBySelector = 8,
	};
}
