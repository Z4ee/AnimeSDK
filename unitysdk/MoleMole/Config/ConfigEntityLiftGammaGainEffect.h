#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenEffectVector4; }

#define MOLEMOLE_CONFIG_CONFIGENTITYLIFTGAMMAGAINEFFECT_GETGAIN_OFFSET UNITYSDK_OFFSET(0x110287E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIFTGAMMAGAINEFFECT_GETGAMMA_OFFSET UNITYSDK_OFFSET(0x11028740)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIFTGAMMAGAINEFFECT_GETLIFT_OFFSET UNITYSDK_OFFSET(0x110286A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLIFTGAMMAGAINEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11028880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityLiftGammaGainEffect_TypeDefinitionIndex = 64597;

	class ConfigEntityLiftGammaGainEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectVector4* gamma; // 0x40
		::MoleMole::Config::ScreenEffectVector4* gain; // 0x48
		::MoleMole::Config::ScreenEffectVector4* lift; // 0x50
		::MoleMole::Config::ScreenEffectFieldHandleType gammaHandleType; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType liftHandleType; // 0x5C
		::MoleMole::Config::ScreenEffectFieldHandleType gainHandleType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIFTGAMMAGAINEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetLift(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIFTGAMMAGAINEFFECT_GETLIFT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetGamma(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIFTGAMMAGAINEFFECT_GETGAMMA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetGain(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLIFTGAMMAGAINEFFECT_GETGAIN_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
