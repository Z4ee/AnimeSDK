#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_NOISESETTINGS_NOISEPARAMS_GETVALUEAT_OFFSET UNITYSDK_OFFSET(0x3C937C0)

namespace Cinemachine
{
	inline static constexpr unsigned int NoiseSettings_NoiseParams_TypeDefinitionIndex = 38544;

	struct alignas(4) NoiseSettings_NoiseParams
	{
		::System::Single Frequency; // 0x10
		::System::Single Amplitude; // 0x14
		::System::Boolean Constant; // 0x18

		::System::Single GetValueAt(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_NOISEPARAMS_GETVALUEAT_OFFSET))(this, a1, a2);
		}
	};
}
