#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings.h"

class AkPlatformInitSettings;

#define AKPELLEGRINOSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x18BC70A0)
#define AKPELLEGRINOSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC6FA0)
#define AKPELLEGRINOSETTINGS_PLATFORMADVANCEDSETTINGS___IFIXBASEPROXY_COPYTO_OFFSET UNITYSDK_OFFSET(0x18BC70F0)

inline static constexpr unsigned int AkPellegrinoSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 34634;

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

	::System::Void CopyTo(::AkPlatformInitSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, settings);
	}

	::System::Void __iFixBaseProxy_CopyTo(::AkPlatformInitSettings* P0)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_PLATFORMADVANCEDSETTINGS___IFIXBASEPROXY_COPYTO_OFFSET))(this, P0);
	}
};
