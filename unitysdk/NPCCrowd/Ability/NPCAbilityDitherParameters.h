#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ABILITY_NPCABILITYDITHERPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0xF854FB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityDitherParameters_TypeDefinitionIndex = 75125;

	class NPCAbilityDitherParameters : public ::System::Object
	{
	public:
		::System::Single ditherRadius; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYDITHERPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
