#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSPLITTONINGEFFECT_GETBALANCE_OFFSET UNITYSDK_OFFSET(0x1241C280)
#define MOLEMOLE_CONFIG_CONFIGENTITYSPLITTONINGEFFECT_GETHIGHLIGHTS_OFFSET UNITYSDK_OFFSET(0x1241C1E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSPLITTONINGEFFECT_GETSHADOWS_OFFSET UNITYSDK_OFFSET(0x1241C140)
#define MOLEMOLE_CONFIG_CONFIGENTITYSPLITTONINGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1241C300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySplitToningEffect_TypeDefinitionIndex = 53170;

	class ConfigEntitySplitToningEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* balance; // 0x40
		::MoleMole::Config::ScreenEffectColor* highlights; // 0x48
		::MoleMole::Config::ScreenEffectColor* shadows; // 0x50
		::MoleMole::Config::ScreenEffectFieldHandleType shadowsHandleType; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType balanceHandleType; // 0x5C
		::MoleMole::Config::ScreenEffectFieldHandleType highlightsHandleType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSPLITTONINGEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color GetShadows(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSPLITTONINGEFFECT_GETSHADOWS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetHighlights(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSPLITTONINGEFFECT_GETHIGHLIGHTS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBalance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSPLITTONINGEFFECT_GETBALANCE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
