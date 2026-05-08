#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }

#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCENTER_OFFSET UNITYSDK_OFFSET(0x110264A0)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCOLORB_OFFSET UNITYSDK_OFFSET(0x110267E0)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCOLORG_OFFSET UNITYSDK_OFFSET(0x110266C0)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETCOLORR_OFFSET UNITYSDK_OFFSET(0x110265A0)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x11026420)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWERB_OFFSET UNITYSDK_OFFSET(0x11026880)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWERG_OFFSET UNITYSDK_OFFSET(0x11026760)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWERR_OFFSET UNITYSDK_OFFSET(0x11026640)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION_GETPOWER_OFFSET UNITYSDK_OFFSET(0x11026520)
#define MOLEMOLE_CONFIG_CONFIGCHROMATICABERRATION__CTOR_OFFSET UNITYSDK_OFFSET(0x11026900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChromaticAberration_TypeDefinitionIndex = 46728;

	class ConfigChromaticAberration : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* power; // 0x40
		::MoleMole::Config::ScreenEffectFloat* PowerB; // 0x48
		::MoleMole::Config::ScreenEffectColor* ColorR; // 0x50
		::MoleMole::Config::ScreenEffectFloat* PowerR; // 0x58
		::MoleMole::Config::ScreenEffectFloat* PowerG; // 0x60
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x68
		::MoleMole::Config::ScreenEffectVector2* center; // 0x70
		::MoleMole::Config::ScreenEffectColor* ColorB; // 0x78
		::MoleMole::Config::ScreenEffectColor* ColorG; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType ColorGHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType PowerGHandleType; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType ColorRHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType centerHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType PowerBHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x9C
		::MoleMole::Config::ScreenEffectFieldHandleType PowerRHandleType; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType powerHandleType; // 0xA4
		::MoleMole::Config::ScreenEffectFieldHandleType ColorBHandleType; // 0xA8

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
