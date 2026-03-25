#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXASR_BUSANALYZERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14F1350)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAsr_BusAnalyzerInfo_TypeDefinitionIndex = 31030;

	struct alignas(8) CriAtomExAsr_BusAnalyzerInfo
	{
		::System::Int32 numChannels; // 0x10
		::Il2CppArray<::System::Single>* rmsLevels; // 0x18
		::Il2CppArray<::System::Single>* peakLevels; // 0x20
		::Il2CppArray<::System::Single>* peakHoldLevels; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXASR_BUSANALYZERINFO__CTOR_OFFSET))(this, data);
		}
	};
}
