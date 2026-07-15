#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputAnalyzer_Config_TypeDefinitionIndex = 37891;

	struct alignas(4) CriAtomExOutputAnalyzer_Config
	{
		::System::Boolean enableLevelmeter; // 0x10
		::System::Boolean enableSpectrumAnalyzer; // 0x11
		::System::Boolean enablePcmCapture; // 0x12
		::System::Boolean enablePcmCaptureCallback; // 0x13
		::System::Int32 numSpectrumAnalyzerBands; // 0x14
		::System::Int32 numCapturedPcmSamples; // 0x18
	};
}
