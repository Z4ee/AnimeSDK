#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGCLOUDGRAPHICSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x1146C960)
#define MOLEMOLE_CONFIG_CONFIGCLOUDGRAPHICSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1146C970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCloudGraphicSetting_TypeDefinitionIndex = 46510;

	class ConfigCloudGraphicSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLOUDGRAPHICSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLOUDGRAPHICSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
