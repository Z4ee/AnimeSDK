#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_PHASEMATCHINGRESULT_GET_COMPAREVECTOR_OFFSET UNITYSDK_OFFSET(0x69E870)
#define NPCCROWD_ANIMATION_PHASEMATCHINGRESULT_UPDATE_OFFSET UNITYSDK_OFFSET(0x69E820)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int PhaseMatchingResult_TypeDefinitionIndex = 76925;

	struct alignas(4) PhaseMatchingResult
	{
		// static const ::System::Single AreaWeight; // 0x0
		// static const ::System::Single DerivativeWeight; // 0x0
		::System::Single Time; // 0x10
		::System::Single Delta; // 0x14
		::System::Single DeltaDerivative; // 0x18

		::System::Boolean Update(::NPCCrowd::Animation::PhaseMatchingResult result)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::PhaseMatchingResult))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASEMATCHINGRESULT_UPDATE_OFFSET))(this, result);
		}

		/*
		::UnityEngine::Vector2 get_CompareVector()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_PHASEMATCHINGRESULT_GET_COMPAREVECTOR_OFFSET))(this);
		}
		*/
	};
}
