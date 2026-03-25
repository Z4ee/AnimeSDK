#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE8FB0)
#define RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS15_0___TRYHIDEEFFECTINSKILLUSE_B__0_OFFSET UNITYSDK_OFFSET(0xAAE8FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierInstance___c__DisplayClass15_0_TypeDefinitionIndex = 44732;

	class TurnBasedModifierInstance___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Struct_2_0B84ADD7815498A2 effect; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryHideEffectInSkillUse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERINSTANCE___C__DISPLAYCLASS15_0___TRYHIDEEFFECTINSKILLUSE_B__0_OFFSET))(this);
		}
	};
}
