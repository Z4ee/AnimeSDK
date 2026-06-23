#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GamepadTriggerEffectEntryBase.h"
#include "unitysdk/ScePadTriggerEffectSlopeFeedbackParam.h"
#include "unitysdk/ScePadTriggerMask.h"

#define MOLEMOLE_CONFIG_SLOPEFEEDBACKMODEGAMEPADTRIGGEREFFECTENTRY_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x161A0990)
#define MOLEMOLE_CONFIG_SLOPEFEEDBACKMODEGAMEPADTRIGGEREFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x161A0A20)
#define MOLEMOLE_CONFIG_SLOPEFEEDBACKMODEGAMEPADTRIGGEREFFECTENTRY___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x161A0A30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SlopeFeedbackModeGamepadTriggerEffectEntry_TypeDefinitionIndex = 60272;

	class SlopeFeedbackModeGamepadTriggerEffectEntry : public ::MoleMole::Config::GamepadTriggerEffectEntryBase
	{
	public:
		::ScePadTriggerEffectSlopeFeedbackParam Param; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SLOPEFEEDBACKMODEGAMEPADTRIGGEREFFECTENTRY__CTOR_OFFSET))(this);
		}

		::System::Void OnProcess(::ScePadTriggerMask triggerMask)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SLOPEFEEDBACKMODEGAMEPADTRIGGEREFFECTENTRY_ONPROCESS_OFFSET))(this, triggerMask);
		}

		::System::Void __base_OnProcess(::ScePadTriggerMask P0)
		{
			return ((::System::Void(*)(::PVOID, ::ScePadTriggerMask))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SLOPEFEEDBACKMODEGAMEPADTRIGGEREFFECTENTRY___BASE_ONPROCESS_OFFSET))(this, P0);
		}
	};
}
