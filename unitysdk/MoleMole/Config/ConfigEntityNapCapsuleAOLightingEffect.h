#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETAMBIENTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A4B0960)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETENABLECAPSULEAO_OFFSET UNITYSDK_OFFSET(0x1A4B08E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETLUMINANCEBLEND_OFFSET UNITYSDK_OFFSET(0x1A4B0AE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETSHADOWINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A4B09E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT_GETSHADOWSHARPNESS_OFFSET UNITYSDK_OFFSET(0x1A4B0A60)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCAPSULEAOLIGHTINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B0B60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityNapCapsuleAOLightingEffect_TypeDefinitionIndex = 50619;

	class ConfigEntityNapCapsuleAOLightingEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* luminanceBlend; // 0x40
		::MoleMole::Config::ScreenEffectFloat* shadowIntensity; // 0x48
		::MoleMole::Config::ScreenEffectFloat* ambientIntensity; // 0x50
		::MoleMole::Config::ScreenEffectFloat* shadowSharpness; // 0x58
		::MoleMole::Config::ScreenEffectBool* enableCapsuleAO; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType enableCapsuleAOHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType ambientIntensityHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType luminanceBlendHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType shadowIntensityHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType shadowSharpnessHandleType; // 0x78

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
