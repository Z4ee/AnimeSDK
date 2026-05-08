#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGACCOUNTSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x12300460)
#define MOLEMOLE_CONFIG_CONFIGACCOUNTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x12300470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAccountSetting_TypeDefinitionIndex = 55024;

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
