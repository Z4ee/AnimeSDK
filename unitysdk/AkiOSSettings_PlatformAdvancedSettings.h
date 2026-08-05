#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings.h"
#include "unitysdk/AkiOSSettings_PlatformAdvancedSettings_Category.h"
#include "unitysdk/AkiOSSettings_PlatformAdvancedSettings_CategoryOptions.h"
#include "unitysdk/AkiOSSettings_PlatformAdvancedSettings_Mode.h"

class AkPlatformInitSettings;

#define AKIOSSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1FC47BB0)
#define AKIOSSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC47BC0)

inline static constexpr unsigned int AkiOSSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 33761;

class AkiOSSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::AkiOSSettings_PlatformAdvancedSettings_Category m_AudioSessionCategory; // 0x58
	::AkiOSSettings_PlatformAdvancedSettings_CategoryOptions m_AudioSessionCategoryOptions; // 0x5C
	::AkiOSSettings_PlatformAdvancedSettings_Mode m_AudioSessionMode; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIOSSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo(::AkPlatformInitSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKIOSSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, settings);
	}
};
