#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace AK::Wwise { class AuxBus; }

#define AKSPATIALAUDIOEMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C5540)

inline static constexpr unsigned int AkSpatialAudioEmitter_TypeDefinitionIndex = 43760;

class AkSpatialAudioEmitter : public ::UnityEngine::MonoBehaviour
{
public:
	::AK::Wwise::AuxBus* reflectAuxBus; // 0x18
	::System::Single reflectionMaxPathLength; // 0x20
	::System::Single reflectionsAuxBusGain; // 0x24
	::System::UInt32 reflectionsOrder; // 0x28
	::System::Single roomReverbAuxBusGain; // 0x2C
	::System::UInt32 diffractionMaxEdges; // 0x30
	::System::UInt32 diffractionMaxPaths; // 0x34
	::System::UInt32 diffractionMaxPathLength; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOEMITTER__CTOR_OFFSET))(this);
	}
};
