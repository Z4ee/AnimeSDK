#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETAMBIENTINTENSITY_OFFSET UNITYSDK_OFFSET(0x186B9BE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETENABLECAPSULEAO_OFFSET UNITYSDK_OFFSET(0x186B9B60)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETLUMINANCEBLEND_OFFSET UNITYSDK_OFFSET(0x186B9D60)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETSHADOWINTENSITY_OFFSET UNITYSDK_OFFSET(0x186B9C60)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETSHADOWSHARPNESS_OFFSET UNITYSDK_OFFSET(0x186B9CE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x186B9DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityNapCapsuleAOLightingEffect_TypeDefinitionIndex = 76573;

	class ConfigEntityNapCapsuleAOLightingEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* shadowSharpness; // 0x40
		::MoleMole::Config::ScreenEffectFloat* ambientIntensity; // 0x48
		::MoleMole::Config::ScreenEffectFloat* luminanceBlend; // 0x50
		::MoleMole::Config::ScreenEffectBool* enableCapsuleAO; // 0x58
		::MoleMole::Config::ScreenEffectFloat* shadowIntensity; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType shadowIntensityHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType luminanceBlendHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType enableCapsuleAOHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType shadowSharpnessHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType ambientIntensityHandleType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnableCapsuleAO(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETENABLECAPSULEAO_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetAmbientIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETAMBIENTINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetShadowIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETSHADOWINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetShadowSharpness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETSHADOWSHARPNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLuminanceBlend(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETLUMINANCEBLEND_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
