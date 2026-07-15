#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKCOMMONADVANCEDSETTINGS_SPATIALAUDIOSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B95FD20)

inline static constexpr unsigned int AkCommonAdvancedSettings_SpatialAudioSettings_TypeDefinitionIndex = 42038;

class AkCommonAdvancedSettings_SpatialAudioSettings : public ::System::Object
{
public:
	::System::Single m_DiffractionShadowAttenuationFactor; // 0x10
	::System::Single m_DiffractionShadowDegrees; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_SPATIALAUDIOSETTINGS__CTOR_OFFSET))(this);
	}
};
