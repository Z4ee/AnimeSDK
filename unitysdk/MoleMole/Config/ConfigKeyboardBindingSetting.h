#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGKEYBOARDBINDINGSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x158A9D80)
#define MOLEMOLE_CONFIG_CONFIGKEYBOARDBINDINGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x158A9D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigKeyboardBindingSetting_TypeDefinitionIndex = 76938;

	class ConfigKeyboardBindingSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGKEYBOARDBINDINGSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGKEYBOARDBINDINGSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
