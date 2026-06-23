#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGSUMMERACTIVITYSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x1A070570)
#define MOLEMOLE_CONFIG_CONFIGSUMMERACTIVITYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A070580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSummerActivitySetting_TypeDefinitionIndex = 74008;

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
