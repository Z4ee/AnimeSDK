#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GamepadTriggerEffectEntryBase.h"
#include "unitysdk/ScePadTriggerMask.h"

#define MOLEMOLE_CONFIG_OFFMODEGAMEPADTRIGGEREFFECTENTRY_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x16C5BDF0)
#define MOLEMOLE_CONFIG_OFFMODEGAMEPADTRIGGEREFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5BE80)
#define MOLEMOLE_CONFIG_OFFMODEGAMEPADTRIGGEREFFECTENTRY___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x16C5BE90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OffModeGamepadTriggerEffectEntry_TypeDefinitionIndex = 71689;

	class OffModeGamepadTriggerEffectEntry : public ::MoleMole::Config::GamepadTriggerEffectEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFMODEGAMEPADTRIGGEREFFECTENTRY__CTOR_OFFSET))(this);
		}

		::System::Void OnProcess(::ScePadTriggerMask triggerMask)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFMODEGAMEPADTRIGGEREFFECTENTRY_ONPROCESS_OFFSET))(this, triggerMask);
		}

		::System::Void __base_OnProcess(::ScePadTriggerMask P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFMODEGAMEPADTRIGGEREFFECTENTRY___BASE_ONPROCESS_OFFSET))(this, P0);
		}
	};
}
