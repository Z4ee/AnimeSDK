#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags.h"
#include "unitysdk/System/Object.h"

#define AKCOMMONUSERSETTINGS_SPATIALAUDIOSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C536320)

inline static constexpr unsigned int AkCommonUserSettings_SpatialAudioSettings_TypeDefinitionIndex = 31513;

class AkCommonUserSettings_SpatialAudioSettings : public ::System::Object
{
public:
	::System::UInt32 m_MaxSoundPropagationDepth; // 0x10
	::AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags m_DiffractionFlags; // 0x14
	::System::Single m_MovementThreshold; // 0x18
	::System::UInt32 m_NumberOfPrimaryRays; // 0x1C
	::System::UInt32 m_MaxReflectionOrder; // 0x20
	::System::Single m_MaxPathLength; // 0x24
	::System::Boolean m_EnableDiffractionOnReflections; // 0x28
	::System::Boolean m_EnableDirectPathDiffraction; // 0x29
	::System::Boolean m_EnableTransmission; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_SPATIALAUDIOSETTINGS__CTOR_OFFSET))(this);
	}
};
