#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXASR_BUSANALYZERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3A19340)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsr_BusAnalyzerInfo_TypeDefinitionIndex = 37849;

	struct alignas(8) CriAtomExAsr_BusAnalyzerInfo
	{
		::System::Int32 numChannels; // 0x10
		::Il2CppArray<::System::Single>* rmsLevels; // 0x18
		::Il2CppArray<::System::Single>* peakLevels; // 0x20
		::Il2CppArray<::System::Single>* peakHoldLevels; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_BUSANALYZERINFO__CTOR_OFFSET))(this, a1);
		}
	};
}
