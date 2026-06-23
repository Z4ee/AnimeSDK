#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GamepadTriggerEffectEntryBase.h"
#include "unitysdk/ScePadTriggerEffectVibrationParam.h"
#include "unitysdk/ScePadTriggerMask.h"

#define MOLEMOLE_CONFIG_VIBRATIONGAMEPADTRIGGEREFFECTENTRY_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1AA798A0)
#define MOLEMOLE_CONFIG_VIBRATIONGAMEPADTRIGGEREFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA79950)
#define MOLEMOLE_CONFIG_VIBRATIONGAMEPADTRIGGEREFFECTENTRY___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1AA79960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VibrationGamepadTriggerEffectEntry_TypeDefinitionIndex = 55585;

	class VibrationGamepadTriggerEffectEntry : public ::MoleMole::Config::GamepadTriggerEffectEntryBase
	{
	public:
		::ScePadTriggerEffectVibrationParam Param; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VIBRATIONGAMEPADTRIGGEREFFECTENTRY__CTOR_OFFSET))(this);
		}

		::System::Void OnProcess(::ScePadTriggerMask triggerMask)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VIBRATIONGAMEPADTRIGGEREFFECTENTRY_ONPROCESS_OFFSET))(this, triggerMask);
		}

		::System::Void __base_OnProcess(::ScePadTriggerMask P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VIBRATIONGAMEPADTRIGGEREFFECTENTRY___BASE_ONPROCESS_OFFSET))(this, P0);
		}
	};
}
