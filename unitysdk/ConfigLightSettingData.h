#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CONFIGLIGHTSETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15585480)

inline static constexpr unsigned int ConfigLightSettingData_TypeDefinitionIndex = 49622;

class ConfigLightSettingData : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGLIGHTSETTINGDATA__CTOR_OFFSET))(this);
	}
};
