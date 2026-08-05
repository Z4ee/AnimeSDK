#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TonemappingMode.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETCUSTOMGAMMA_OFFSET UNITYSDK_OFFSET(0x143739E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETMODE_OFFSET UNITYSDK_OFFSET(0x143736F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETSHOULDERANGLE_OFFSET UNITYSDK_OFFSET(0x14373960)
#define MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETSHOULDERLENGTH_OFFSET UNITYSDK_OFFSET(0x143738E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETSHOULDERSTRENGTH_OFFSET UNITYSDK_OFFSET(0x14373860)
#define MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETTOELENGTH_OFFSET UNITYSDK_OFFSET(0x143737E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETTOESTRENGTH_OFFSET UNITYSDK_OFFSET(0x14373760)
#define MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x14373A60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTonemappingEffect_TypeDefinitionIndex = 89628;

	class ConfigEntityTonemappingEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* toeLength; // 0x40
		::MoleMole::Config::ScreenEffectFloat* shoulderStrength; // 0x48
		::MoleMole::Config::ScreenEffectFloat* shoulderAngle; // 0x50
		::MoleMole::Config::ScreenEffectFloat* customGamma; // 0x58
		::MoleMole::Config::ScreenEffectFloat* shoulderLength; // 0x60
		::MoleMole::Config::ScreenEffectFloat* toeStrength; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType toeStrengthHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType customGammaHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType shoulderLengthHandleType; // 0x78
		::UnityEngine::NAPRenderPipeline0::TonemappingMode mode; // 0x7C
		::MoleMole::Config::ScreenEffectFieldHandleType shoulderStrengthHandleType; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType shoulderAngleHandleType; // 0x84
		::MoleMole::Config::ScreenEffectFieldHandleType modeHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType toeLengthHandleType; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::TonemappingMode GetMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TonemappingMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetToeStrength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETTOESTRENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetToeLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETTOELENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetShoulderStrength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETSHOULDERSTRENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetShoulderLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETSHOULDERLENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetShoulderAngle(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETSHOULDERANGLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCustomGamma(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYTONEMAPPINGEFFECT_GETCUSTOMGAMMA_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
