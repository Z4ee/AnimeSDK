#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector4; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETHIGHLIGHTSEND_OFFSET UNITYSDK_OFFSET(0x1A344B80)
#define MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETHIGHLIGHTSSTART_OFFSET UNITYSDK_OFFSET(0x1A344B00)
#define MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETHIGHLIGHTS_OFFSET UNITYSDK_OFFSET(0x1A344960)
#define MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETMIDTONES_OFFSET UNITYSDK_OFFSET(0x1A3448C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETSHADOWSEND_OFFSET UNITYSDK_OFFSET(0x1A344A80)
#define MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETSHADOWSSTART_OFFSET UNITYSDK_OFFSET(0x1A344A00)
#define MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETSHADOWS_OFFSET UNITYSDK_OFFSET(0x1A344820)
#define MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A344C00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityShadowsMidtonesHighlightsEffect_TypeDefinitionIndex = 39707;

	class ConfigEntityShadowsMidtonesHighlightsEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectVector4* midtones; // 0x40
		::MoleMole::Config::ScreenEffectVector4* highlights; // 0x48
		::MoleMole::Config::ScreenEffectFloat* shadowsStart; // 0x50
		::MoleMole::Config::ScreenEffectFloat* shadowsEnd; // 0x58
		::MoleMole::Config::ScreenEffectFloat* highlightsEnd; // 0x60
		::MoleMole::Config::ScreenEffectFloat* highlightsStart; // 0x68
		::MoleMole::Config::ScreenEffectVector4* shadows; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType shadowsHandleType; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType midtonesHandleType; // 0x7C
		::MoleMole::Config::ScreenEffectFieldHandleType highlightsHandleType; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType highlightsStartHandleType; // 0x84
		::MoleMole::Config::ScreenEffectFieldHandleType shadowsEndHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType shadowsStartHandleType; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType highlightsEndHandleType; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetShadows(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETSHADOWS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetMidtones(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETMIDTONES_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetHighlights(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETHIGHLIGHTS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetShadowsStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETSHADOWSSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetShadowsEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETSHADOWSEND_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHighlightsStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETHIGHLIGHTSSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHighlightsEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSHADOWSMIDTONESHIGHLIGHTSEFFECT_GETHIGHLIGHTSEND_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
