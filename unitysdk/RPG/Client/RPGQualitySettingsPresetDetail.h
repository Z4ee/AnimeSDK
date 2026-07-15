#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CRPCharacterSettings; }
namespace RPG::Client { class CRPEnvDetailSettings; }
namespace RPG::Client { class CRPLightSettings; }
namespace RPG::Client { class CRPReflectionSettings; }
namespace RPG::Client { class CRPSFXSettings; }
namespace RPG::Client { class CRPShadowSettings; }

#define RPG_CLIENT_RPGQUALITYSETTINGSPRESETDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x167A28B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettingsPresetDetail_TypeDefinitionIndex = 64929;

	class RPGQualitySettingsPresetDetail : public ::System::Object
	{
	public:
		::RPG::Client::CRPShadowSettings* Shadow_High; // 0x10
		::RPG::Client::CRPShadowSettings* Shadow_Medium; // 0x18
		::RPG::Client::CRPShadowSettings* Shadow_Low; // 0x20
		::RPG::Client::CRPLightSettings* Light_VeryHigh; // 0x28
		::RPG::Client::CRPLightSettings* Light_High; // 0x30
		::RPG::Client::CRPLightSettings* Light_Medium; // 0x38
		::RPG::Client::CRPLightSettings* Light_Low; // 0x40
		::RPG::Client::CRPLightSettings* Light_VeryLow; // 0x48
		::RPG::Client::CRPCharacterSettings* Char_High; // 0x50
		::RPG::Client::CRPCharacterSettings* Char_Medium; // 0x58
		::RPG::Client::CRPCharacterSettings* Char_Low; // 0x60
		::RPG::Client::CRPEnvDetailSettings* Env_VeryHigh; // 0x68
		::RPG::Client::CRPEnvDetailSettings* Env_High; // 0x70
		::RPG::Client::CRPEnvDetailSettings* Env_Medium; // 0x78
		::RPG::Client::CRPEnvDetailSettings* Env_Low; // 0x80
		::RPG::Client::CRPEnvDetailSettings* Env_VeryLow; // 0x88
		::RPG::Client::CRPReflectionSettings* Reflection_VeryHigh; // 0x90
		::RPG::Client::CRPReflectionSettings* Reflection_High; // 0x98
		::RPG::Client::CRPReflectionSettings* Reflection_Medium; // 0xA0
		::RPG::Client::CRPReflectionSettings* Reflection_Low; // 0xA8
		::RPG::Client::CRPReflectionSettings* Reflection_VeryLow; // 0xB0
		::RPG::Client::CRPSFXSettings* SFX_High; // 0xB8
		::RPG::Client::CRPSFXSettings* SFX_Medium; // 0xC0
		::RPG::Client::CRPSFXSettings* SFX_Low; // 0xC8
		::RPG::Client::CRPSFXSettings* SFX_VeryLow; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGSPRESETDETAIL__CTOR_OFFSET))(this);
		}
	};
}
