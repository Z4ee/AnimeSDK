#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGGAMEPADBINDINGSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x177DDB30)
#define MOLEMOLE_CONFIG_CONFIGGAMEPADBINDINGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x177DDB40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGamepadBindingSetting_TypeDefinitionIndex = 88760;

	class ConfigGamepadBindingSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGAMEPADBINDINGSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGAMEPADBINDINGSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
