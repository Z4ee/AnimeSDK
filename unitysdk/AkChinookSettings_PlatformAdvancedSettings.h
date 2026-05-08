#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings.h"

class AkPlatformInitSettings;
class AkUnityPlatformSpecificSettings;

#define AKCHINOOKSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1C3CE1C0)
#define AKCHINOOKSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C3CE1B0)
#define AKCHINOOKSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CE1D0)

inline static constexpr unsigned int AkChinookSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 31486;

class AkChinookSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::System::UInt16 MaximumNumberOfXMAVoices; // 0x58
	::System::Boolean UseHardwareCodecLowLatencyMode; // 0x5A
	::System::UInt32 APUHeapCachedSize; // 0x5C
	::System::UInt32 APUHeapNonCachedSize; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHINOOKSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo(::AkPlatformInitSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKCHINOOKSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, settings);
	}

	::System::Void CopyTo_1(::AkUnityPlatformSpecificSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkUnityPlatformSpecificSettings*))((::PBYTE)hIl2Cpp + AKCHINOOKSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_1_OFFSET))(this, settings);
	}
};
