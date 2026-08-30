#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings.h"

class AkPlatformInitSettings;

#define AKPELLEGRINOSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DAA03D0)
#define AKPELLEGRINOSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA02D0)

inline static constexpr unsigned int AkPellegrinoSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 43706;

class AkPellegrinoSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::System::UInt32 NumAudioOut2Ports; // 0x58
	::System::UInt32 NumAudioOut2ObjectPorts; // 0x5C
	::System::Boolean HwCodecLowLatencyMode; // 0x60
	::System::Boolean VorbisHwAcceleration; // 0x61

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo(::AkPlatformInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, a1);
	}
};
