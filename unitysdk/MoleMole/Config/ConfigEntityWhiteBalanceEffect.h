#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYWHITEBALANCEEFFECT_GETTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x11CA9090)
#define MOLEMOLE_CONFIG_CONFIGENTITYWHITEBALANCEEFFECT_GETTINT_OFFSET UNITYSDK_OFFSET(0x11CA9110)
#define MOLEMOLE_CONFIG_CONFIGENTITYWHITEBALANCEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA9190)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityWhiteBalanceEffect_TypeDefinitionIndex = 48490;

	class ConfigEntityWhiteBalanceEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* temperature; // 0x40
		::MoleMole::Config::ScreenEffectFloat* tint; // 0x48
		::MoleMole::Config::ScreenEffectFieldHandleType temperatureHandleType; // 0x50
		::MoleMole::Config::ScreenEffectFieldHandleType tintHandleType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYWHITEBALANCEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetTemperature(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYWHITEBALANCEEFFECT_GETTEMPERATURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYWHITEBALANCEEFFECT_GETTINT_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
