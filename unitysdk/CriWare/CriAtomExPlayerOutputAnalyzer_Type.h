#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayerOutputAnalyzer_Type_TypeDefinitionIndex = 37906;

	enum class CriAtomExPlayerOutputAnalyzer_Type : ::System::Int32
	{
		LevelMeter = 0,
		SpectrumAnalyzer = 1,
		PcmCapture = 2,
	};
}
