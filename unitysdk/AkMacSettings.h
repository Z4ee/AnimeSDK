#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_CommonPlatformSettings.h"

#define AKMACSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EB230)

inline static constexpr unsigned int AkMacSettings_TypeDefinitionIndex = 33118;

class AkMacSettings : public ::AkWwiseInitializationSettings_CommonPlatformSettings
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMACSETTINGS__CTOR_OFFSET))(this);
	}
};
