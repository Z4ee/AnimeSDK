#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETBLUEOUTBLUEIN_OFFSET UNITYSDK_OFFSET(0x159EA6B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETBLUEOUTGREENIN_OFFSET UNITYSDK_OFFSET(0x159EA630)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETBLUEOUTREDIN_OFFSET UNITYSDK_OFFSET(0x159EA5B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETGREENOUTBLUEIN_OFFSET UNITYSDK_OFFSET(0x159EA530)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETGREENOUTGREENIN_OFFSET UNITYSDK_OFFSET(0x159EA4B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETGREENOUTREDIN_OFFSET UNITYSDK_OFFSET(0x159EA430)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETREDOUTBLUEIN_OFFSET UNITYSDK_OFFSET(0x159EA3B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETREDOUTGREENIN_OFFSET UNITYSDK_OFFSET(0x159EA330)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETREDOUTREDIN_OFFSET UNITYSDK_OFFSET(0x159EA0B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x159EA730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityChannelMixerEffect_TypeDefinitionIndex = 67429;

	class ConfigEntityChannelMixerEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* redOutGreenIn; // 0x40
		::MoleMole::Config::ScreenEffectFloat* greenOutRedIn; // 0x48
		::MoleMole::Config::ScreenEffectFloat* blueOutRedIn; // 0x50
		::MoleMole::Config::ScreenEffectFloat* greenOutBlueIn; // 0x58
		::MoleMole::Config::ScreenEffectFloat* redOutBlueIn; // 0x60
		::MoleMole::Config::ScreenEffectFloat* blueOutGreenIn; // 0x68
		::MoleMole::Config::ScreenEffectFloat* greenOutGreenIn; // 0x70
		::MoleMole::Config::ScreenEffectFloat* redOutRedIn; // 0x78
		::MoleMole::Config::ScreenEffectFloat* blueOutBlueIn; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType redOutGreenInHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType blueOutRedInHandleType; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType redOutBlueInHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType blueOutGreenInHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType greenOutBlueInHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType blueOutBlueInHandleType; // 0x9C
		::MoleMole::Config::ScreenEffectFieldHandleType redOutRedInHandleType; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType greenOutRedInHandleType; // 0xA4
		::MoleMole::Config::ScreenEffectFieldHandleType greenOutGreenInHandleType; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetRedOutRedIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETREDOUTREDIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRedOutGreenIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETREDOUTGREENIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRedOutBlueIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETREDOUTBLUEIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGreenOutRedIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETGREENOUTREDIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGreenOutGreenIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETGREENOUTGREENIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGreenOutBlueIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETGREENOUTBLUEIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBlueOutRedIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETBLUEOUTREDIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBlueOutGreenIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETBLUEOUTGREENIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBlueOutBlueIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHANNELMIXEREFFECT_GETBLUEOUTBLUEIN_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
