#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_PHASESECTION_LOSSFUNCTIONRESULT_UPDATE_OFFSET UNITYSDK_OFFSET(0x61E660)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int PhaseSection_LossFunctionResult_TypeDefinitionIndex = 40987;

	struct alignas(4) PhaseSection_LossFunctionResult
	{
		::System::Single Time; // 0x10
		::System::Single Value; // 0x14
		::System::Single Area; // 0x18
		::System::Single AreaDerivative; // 0x1C

		::NPCCrowd::Animation::PhaseSection_LossFunctionResult Update(::NPCCrowd::Animation::PhaseSection_LossFunctionResult other)
		{
			return ((::NPCCrowd::Animation::PhaseSection_LossFunctionResult(*)(::PVOID, ::NPCCrowd::Animation::PhaseSection_LossFunctionResult))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASESECTION_LOSSFUNCTIONRESULT_UPDATE_OFFSET))(this, other);
		}
	};
}
