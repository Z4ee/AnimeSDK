#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONWEIGHTS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x106F84A0)
#define NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONWEIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0x106F8490)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilitySmoothOrientationWeights_TypeDefinitionIndex = 81179;

	class NPCAbilitySmoothOrientationWeights : public ::System::Object
	{
	public:
		::System::Single MoveTargetWeight; // 0x10
		::System::Single VelocityWeight; // 0x14
		::System::Single OrientationSmoothingTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONWEIGHTS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single InMoveTargetWeight, ::System::Single InVelocityWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSMOOTHORIENTATIONWEIGHTS__CTOR_1_OFFSET))(this, InMoveTargetWeight, InVelocityWeight);
		}
	};
}
