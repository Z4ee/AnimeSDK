#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_ADVANCEDDESTROYPARAMS_RESET_OFFSET UNITYSDK_OFFSET(0x1484C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierInstance_AdvancedDestroyParams_TypeDefinitionIndex = 52144;

	struct alignas(8) TurnBasedModifierInstance_AdvancedDestroyParams
	{
		::System::Boolean MuteDispelCallback; // 0x10
		::System::Boolean MuteVisualEffect; // 0x11
		::System::Boolean ShowFloatMsg; // 0x12
		::RPG::GameCore::GameEntity* Instigator; // 0x18

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE_ADVANCEDDESTROYPARAMS_RESET_OFFSET))(this);
		}
	};
}
