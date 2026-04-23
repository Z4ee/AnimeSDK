#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_WAVEFORMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1622440)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_WaveformInfo_TypeDefinitionIndex = 36720;

	struct alignas(8) CriAtomEx_WaveformInfo
	{
		::System::Int32 waveId; // 0x10
		::System::UInt32 format; // 0x14
		::System::Int32 samplingRate; // 0x18
		::System::Int32 numChannels; // 0x1C
		::System::Int64 numSamples; // 0x20
		::System::Boolean streamingFlag; // 0x28
		::Il2CppArray<::System::UInt32>* reserved; // 0x30

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_WAVEFORMINFO__CTOR_OFFSET))(this, data, startIndex);
		}
	};
}
