#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSubSystemSettingBase.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"

#define MOLEMOLE_CONFIG_CONFIGHOUSERHYTHMSETTING_GET_SYSTEMSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x1B4CD400)
#define MOLEMOLE_CONFIG_CONFIGHOUSERHYTHMSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CD410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHouseRhythmSetting_TypeDefinitionIndex = 73551;

	class ConfigHouseRhythmSetting : public ::MoleMole::Config::ConfigSubSystemSettingBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOUSERHYTHMSETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::ESystemSettingType get_SystemSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOUSERHYTHMSETTING_GET_SYSTEMSETTINGTYPE_OFFSET))(this);
		}
	};
}
