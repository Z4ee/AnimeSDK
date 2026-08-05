#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGRHYTHMACTIVITYSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x148702C0)
#define MOLEMOLE_CONFIG_CONFIGRHYTHMACTIVITYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x148702D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRhythmActivitySetting_TypeDefinitionIndex = 49108;

	class ConfigRhythmActivitySetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGRHYTHMACTIVITYSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGRHYTHMACTIVITYSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
