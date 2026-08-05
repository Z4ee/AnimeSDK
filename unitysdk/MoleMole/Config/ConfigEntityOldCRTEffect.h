#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT_GETFADE_OFFSET UNITYSDK_OFFSET(0x14862050)
#define MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT_GETPATTERN_OFFSET UNITYSDK_OFFSET(0x14861EE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT_GETSCANLINEBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x14861FD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT_GETTILING_OFFSET UNITYSDK_OFFSET(0x14861F50)
#define MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x14861CF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x148620D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityOldCRTEffect_TypeDefinitionIndex = 81310;

	class ConfigEntityOldCRTEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* scanlineBrightness; // 0x40
		::System::String* patternPath; // 0x48
		::MoleMole::Config::ScreenEffectVector2* tiling; // 0x50
		::UnityEngine::Texture2D* _pattern; // 0x58
		::MoleMole::Config::ScreenEffectFloat* fade; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType fadeHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType tilingHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType scanlineBrightnessHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType patternHandleType; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_pattern()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT_GET_PATTERN_OFFSET))(this);
		}

		::UnityEngine::Texture* GetPattern(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT_GETPATTERN_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetTiling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT_GETTILING_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanlineBrightness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT_GETSCANLINEBRIGHTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFade(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYOLDCRTEFFECT_GETFADE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
