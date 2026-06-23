#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERVOLUMEPROXYEFFECT_GETINDOORWEIGHT_OFFSET UNITYSDK_OFFSET(0x106D2D00)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERVOLUMEPROXYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x106D2D80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCharacterVolumeProxyEffect_TypeDefinitionIndex = 86795;

	class ConfigEntityCharacterVolumeProxyEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* indoorWeight; // 0x40
		::MoleMole::Config::ScreenEffectFieldHandleType indoorWeightHandleType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERVOLUMEPROXYEFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetIndoorWeight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERVOLUMEPROXYEFFECT_GETINDOORWEIGHT_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
