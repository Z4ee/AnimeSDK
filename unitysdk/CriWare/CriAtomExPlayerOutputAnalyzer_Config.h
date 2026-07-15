#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXPLAYEROUTPUTANALYZER_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x6E5720)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayerOutputAnalyzer_Config_TypeDefinitionIndex = 37907;

	struct alignas(4) CriAtomExPlayerOutputAnalyzer_Config
	{
		::System::Int32 num_spectrum_analyzer_bands; // 0x10
		::System::Int32 num_stored_output_data; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYEROUTPUTANALYZER_CONFIG__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
