#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }

#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCENTER_OFFSET UNITYSDK_OFFSET(0x16259A60)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCOLORB_OFFSET UNITYSDK_OFFSET(0x16259DA0)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCOLORG_OFFSET UNITYSDK_OFFSET(0x16259C80)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCOLORR_OFFSET UNITYSDK_OFFSET(0x16259B60)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x162599E0)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWERB_OFFSET UNITYSDK_OFFSET(0x16259E40)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWERG_OFFSET UNITYSDK_OFFSET(0x16259D20)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWERR_OFFSET UNITYSDK_OFFSET(0x16259C00)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWER_OFFSET UNITYSDK_OFFSET(0x16259AE0)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x16259EC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChromaticAberration_TypeDefinitionIndex = 63907;

	class ConfigChromaticAberration : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectColor* ColorR; // 0x40
		::MoleMole::Config::ScreenEffectFloat* PowerR; // 0x48
		::MoleMole::Config::ScreenEffectFloat* PowerB; // 0x50
		::MoleMole::Config::ScreenEffectColor* ColorG; // 0x58
		::MoleMole::Config::ScreenEffectVector2* center; // 0x60
		::MoleMole::Config::ScreenEffectColor* ColorB; // 0x68
		::MoleMole::Config::ScreenEffectFloat* PowerG; // 0x70
		::MoleMole::Config::ScreenEffectFloat* power; // 0x78
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType ColorGHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType PowerBHandleType; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType powerHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType ColorRHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType PowerGHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x9C
		::MoleMole::Config::ScreenEffectFieldHandleType ColorBHandleType; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType centerHandleType; // 0xA4
		::MoleMole::Config::ScreenEffectFieldHandleType PowerRHandleType; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION__CTOR_OFFSET))(this);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCENTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPower(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWER_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorR(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCOLORR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPowerR(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWERR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorG(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCOLORG_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPowerG(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWERG_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCOLORB_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPowerB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWERB_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
