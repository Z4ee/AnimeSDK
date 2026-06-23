#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGLANGUAGESETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x17049A10)
#define MOLEMOLE_CONFIG_CONFIGLANGUAGESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17049A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLanguageSetting_TypeDefinitionIndex = 56885;

	class ConfigLanguageSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLANGUAGESETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLANGUAGESETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
