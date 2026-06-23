#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGACCOUNTSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x17D4A4E0)
#define MOLEMOLE_CONFIG_CONFIGACCOUNTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4A4F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAccountSetting_TypeDefinitionIndex = 83963;

	class ConfigAccountSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACCOUNTSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACCOUNTSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
