#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CAMERAS_VNOISEPARAMS_METHOD_2_45872D1C931761E1_OFFSET UNITYSDK_OFFSET(0x7BE130)
#define MOLEMOLE_CAMERAS_VNOISEPARAMS_METHOD_2_623160C745FC10C0_OFFSET UNITYSDK_OFFSET(0x7BE200)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VNoiseParams_TypeDefinitionIndex = 52818;

	struct alignas(4) VNoiseParams
	{
		::System::Single Frequency; // 0x10
		::System::Single Amplitude; // 0x14
		::System::Single RandomAmplitude; // 0x18

		::System::Single Method_2_45872D1C931761E1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VNOISEPARAMS_METHOD_2_45872D1C931761E1_OFFSET))(this, a1, a2);
		}

		::System::Single Method_2_623160C745FC10C0(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VNOISEPARAMS_METHOD_2_623160C745FC10C0_OFFSET))(this, a1, a2);
		}
	};
}
