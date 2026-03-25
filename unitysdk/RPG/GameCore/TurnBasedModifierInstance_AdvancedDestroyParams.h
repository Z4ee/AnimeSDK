#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_ADVANCEDDESTROYPARAMS_RESET_OFFSET UNITYSDK_OFFSET(0x88D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierInstance_AdvancedDestroyParams_TypeDefinitionIndex = 44731;

	struct alignas(1) TurnBasedModifierInstance_AdvancedDestroyParams
	{
		::System::Boolean MuteDispelCallback; // 0x10
		::System::Boolean MuteVisualEffect; // 0x11
		::System::Boolean ShowFloatMsg; // 0x12

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_ADVANCEDDESTROYPARAMS_RESET_OFFSET))(this);
		}
	};
}
