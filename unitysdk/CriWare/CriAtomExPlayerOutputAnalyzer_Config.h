#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXPLAYEROUTPUTANALYZER_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayerOutputAnalyzer_Config_TypeDefinitionIndex = 31088;

	struct alignas(4) CriAtomExPlayerOutputAnalyzer_Config
	{
		::System::Int32 num_spectrum_analyzer_bands; // 0x10
		::System::Int32 num_stored_output_data; // 0x14

		::System::Void _ctor(::System::Int32 num_spectrum_analyzer_bands, ::System::Int32 num_stored_output_data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYEROUTPUTANALYZER_CONFIG__CTOR_OFFSET))(this, num_spectrum_analyzer_bands, num_stored_output_data);
		}
	};
}
