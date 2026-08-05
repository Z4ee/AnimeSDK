#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGOTHERSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x1437D2F0)
#define MOLEMOLE_CONFIG_CONFIGOTHERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1437D300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOtherSetting_TypeDefinitionIndex = 80459;

	class ConfigOtherSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOTHERSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOTHERSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
