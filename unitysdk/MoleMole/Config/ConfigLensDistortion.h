#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }

#define MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETCENTER_OFFSET UNITYSDK_OFFSET(0x177DF070)
#define MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETDEPTHCLIP_OFFSET UNITYSDK_OFFSET(0x177DEFF0)
#define MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x177DEDF0)
#define MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETSCALE_OFFSET UNITYSDK_OFFSET(0x177DEF70)
#define MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x177DEE70)
#define MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x177DEEF0)
#define MOLEMOLE_CONFIG_CONFIGLENSDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x177DF0F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLensDistortion_TypeDefinitionIndex = 67305;

	class ConfigLensDistortion : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* depthClip; // 0x40
		::MoleMole::Config::ScreenEffectFloat* scale; // 0x48
		::MoleMole::Config::ScreenEffectVector2* center; // 0x50
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x58
		::MoleMole::Config::ScreenEffectFloat* xMultiplier; // 0x60
		::MoleMole::Config::ScreenEffectFloat* yMultiplier; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType xMultiplierHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType depthClipHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType yMultiplierHandleType; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType centerHandleType; // 0x7C
		::MoleMole::Config::ScreenEffectFieldHandleType scaleHandleType; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLENSDISTORTION__CTOR_OFFSET))(this);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetXMultiplier(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETXMULTIPLIER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetYMultiplier(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETYMULTIPLIER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDepthClip(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETDEPTHCLIP_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLENSDISTORTION_GETCENTER_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
