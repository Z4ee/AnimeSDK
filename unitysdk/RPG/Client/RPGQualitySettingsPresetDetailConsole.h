#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CRPCharacterSettings; }
namespace RPG::Client { class CRPEnvDetailSettings; }
namespace RPG::Client { class CRPLightSettings; }
namespace RPG::Client { class CRPReflectionSettings; }
namespace RPG::Client { class CRPSFXSettings; }
namespace RPG::Client { class CRPShadowSettings; }

#define RPG_CLIENT_RPGQUALITYSETTINGSPRESETDETAILCONSOLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF50630)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettingsPresetDetailConsole_TypeDefinitionIndex = 62633;

	class RPGQualitySettingsPresetDetailConsole : public ::System::Object
	{
	public:
		::RPG::Client::CRPShadowSettings* Shadow_High; // 0x10
		::RPG::Client::CRPLightSettings* Light_High; // 0x18
		::RPG::Client::CRPCharacterSettings* Char_High; // 0x20
		::RPG::Client::CRPEnvDetailSettings* Env_High; // 0x28
		::RPG::Client::CRPReflectionSettings* Reflection_High; // 0x30
		::RPG::Client::CRPSFXSettings* SFX_High; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGSPRESETDETAILCONSOLE__CTOR_OFFSET))(this);
		}
	};
}
