#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GamepadTriggerEffectEntryBase.h"
#include "unitysdk/ScePadTriggerEffectWeaponParam.h"
#include "unitysdk/ScePadTriggerMask.h"

#define MOLEMOLE_CONFIG_WEAPONMODEGAMEPADTRIGGEREFFECTENTRY_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1B805470)
#define MOLEMOLE_CONFIG_WEAPONMODEGAMEPADTRIGGEREFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B805520)
#define MOLEMOLE_CONFIG_WEAPONMODEGAMEPADTRIGGEREFFECTENTRY___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1B805530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int WeaponModeGamepadTriggerEffectEntry_TypeDefinitionIndex = 90001;

	class WeaponModeGamepadTriggerEffectEntry : public ::MoleMole::Config::GamepadTriggerEffectEntryBase
	{
	public:
		::ScePadTriggerEffectWeaponParam Param; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WEAPONMODEGAMEPADTRIGGEREFFECTENTRY__CTOR_OFFSET))(this);
		}

		::System::Void OnProcess(::ScePadTriggerMask triggerMask)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WEAPONMODEGAMEPADTRIGGEREFFECTENTRY_ONPROCESS_OFFSET))(this, triggerMask);
		}

		::System::Void __base_OnProcess(::ScePadTriggerMask P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WEAPONMODEGAMEPADTRIGGEREFFECTENTRY___BASE_ONPROCESS_OFFSET))(this, P0);
		}
	};
}
