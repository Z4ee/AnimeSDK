#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_CommonPlatformSettings.h"

#define AKSWITCHSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4B3E0)

inline static constexpr unsigned int AkSwitchSettings_TypeDefinitionIndex = 33756;

class AkSwitchSettings : public ::AkWwiseInitializationSettings_CommonPlatformSettings
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSWITCHSETTINGS__CTOR_OFFSET))(this);
	}
};
