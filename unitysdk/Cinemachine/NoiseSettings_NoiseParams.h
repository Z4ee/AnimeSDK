#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_NOISESETTINGS_NOISEPARAMS_GETVALUEAT_OFFSET UNITYSDK_OFFSET(0x14ECE90)

namespace Cinemachine
{
	inline static constexpr unsigned int NoiseSettings_NoiseParams_TypeDefinitionIndex = 30883;

	struct alignas(4) NoiseSettings_NoiseParams
	{
		::System::Single Frequency; // 0x10
		::System::Single Amplitude; // 0x14
		::System::Boolean Constant; // 0x18

		::System::Single GetValueAt(::System::Single time, ::System::Single timeOffset)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_NOISEPARAMS_GETVALUEAT_OFFSET))(this, time, timeOffset);
		}
	};
}
