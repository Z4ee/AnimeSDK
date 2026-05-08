#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGUISETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xF98D830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISettings_TypeDefinitionIndex = 55989;

	class ConfigUISettings : public ::System::Object
	{
	public:
		::System::Single HollowEventDisplayProtectedSeconds; // 0x10
		::System::Single HollowBattleFadeInSeconds; // 0x14
		::System::Single HollowBattleDieFadeoutSeconds; // 0x18
		::System::Single HollowMapFadeInSeconds; // 0x1C
		::System::Single HollowBattleFadeoutSeconds; // 0x20
		::System::Single DefUISceneFadeInSeconds; // 0x24
		::System::Single HollowMapFadeOutSeconds; // 0x28
		::System::Single DefUISceneFadeOutSeconds; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISETTINGS__CTOR_OFFSET))(this);
		}
	};
}
