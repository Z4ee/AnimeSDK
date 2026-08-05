#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_DISPATCHINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_StateMachineProcessor_ParallelJob_DispatchIndex_TypeDefinitionIndex = 88303;

	struct alignas(4) AnimationSubManager_StateMachineProcessor_ParallelJob_DispatchIndex
	{
		::System::Int32 SourceIndex; // 0x10
		::System::Int32 LocalChunkIndex; // 0x14

		::System::Void _ctor(::System::Int32 sourceIndex, ::System::Int32 localChunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_DISPATCHINDEX__CTOR_OFFSET))(this, sourceIndex, localChunkIndex);
		}
	};
}
