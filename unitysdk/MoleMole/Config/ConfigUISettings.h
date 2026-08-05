#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGUISETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DCEA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISettings_TypeDefinitionIndex = 73332;

	class ConfigUISettings : public ::System::Object
	{
	public:
		::System::Single HollowMapFadeInSeconds; // 0x10
		::System::Single HollowBattleDieFadeoutSeconds; // 0x14
		::System::Single DefUISceneFadeOutSeconds; // 0x18
		::System::Single HollowEventDisplayProtectedSeconds; // 0x1C
		::System::Single DefUISceneFadeInSeconds; // 0x20
		::System::Single HollowBattleFadeoutSeconds; // 0x24
		::System::Single HollowBattleFadeInSeconds; // 0x28
		::System::Single HollowMapFadeOutSeconds; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISETTINGS__CTOR_OFFSET))(this);
		}
	};
}
