#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings.h"

class AkPlatformInitSettings;

#define AKPS4SETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B44CBE0)
#define AKPS4SETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44CAE0)
#define AKPS4SETTINGS_PLATFORMADVANCEDSETTINGS___IFIXBASEPROXY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B44CC30)

inline static constexpr unsigned int AkPS4Settings_PlatformAdvancedSettings_TypeDefinitionIndex = 41278;

class AkPS4Settings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::System::UInt32 ACPBatchBufferSize; // 0x58
	::System::Boolean UseHardwareCodecLowLatencyMode; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPS4SETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo(::AkPlatformInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKPS4SETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_CopyTo(::AkPlatformInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKPS4SETTINGS_PLATFORMADVANCEDSETTINGS___IFIXBASEPROXY_COPYTO_OFFSET))(this, a1);
	}
};
