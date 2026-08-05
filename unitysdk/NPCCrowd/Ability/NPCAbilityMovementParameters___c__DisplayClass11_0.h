#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbilityMovementMoveStyleParameters; }
namespace System { class String; }

#define NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE933A60)
#define NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS___C__DISPLAYCLASS11_0__RANDDESIREDMOVESPEED_B__0_OFFSET UNITYSDK_OFFSET(0xE933A70)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMovementParameters___c__DisplayClass11_0_TypeDefinitionIndex = 55942;

	class NPCAbilityMovementParameters___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* style; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RandDesiredMoveSpeed_b__0(::NPCCrowd::Ability::NPCAbilityMovementMoveStyleParameters* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityMovementMoveStyleParameters*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS___C__DISPLAYCLASS11_0__RANDDESIREDMOVESPEED_B__0_OFFSET))(this, x);
		}
	};
}
