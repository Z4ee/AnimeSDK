#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGTEAMCOMBOSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x177E3610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeamComboSetting_TypeDefinitionIndex = 58847;

	class ConfigTeamComboSetting : public ::System::Object
	{
	public:
		::System::Single FeverAddPercentage; // 0x10
		::System::Single FeverAddAmount; // 0x14
		::System::Int32 MaxComboCurLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMCOMBOSETTING__CTOR_OFFSET))(this);
		}
	};
}
