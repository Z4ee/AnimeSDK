#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGSUMMERACTIVITYSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x177E35F0)
#define MOLEMOLE_CONFIG_CONFIGSUMMERACTIVITYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x177E3600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSummerActivitySetting_TypeDefinitionIndex = 64918;

	class ConfigSummerActivitySetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERACTIVITYSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERACTIVITYSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
