#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class NoiseSettings; }

#define RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB92E310)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VirtualCameraNoiseConfig_TypeDefinitionIndex = 44596;

	class VirtualCameraNoiseConfig : public ::System::Object
	{
	public:
		::Cinemachine::NoiseSettings* NoiseProfile; // 0x10
		::UnityEngine::Vector3 PivotOffset; // 0x18
		::System::Single AmplitudeGain; // 0x24
		::System::Single FrequencyGain; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERANOISECONFIG__CTOR_OFFSET))(this);
		}
	};
}
