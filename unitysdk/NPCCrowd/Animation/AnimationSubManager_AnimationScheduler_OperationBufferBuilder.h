#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet64.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_Operation.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AnimationScheduler_OperationBuffer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFERBUILDER_COMMIT_OFFSET UNITYSDK_OFFSET(0x1127E350)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFERBUILDER_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1127E5F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFERBUILDER_DISPATCH_OFFSET UNITYSDK_OFFSET(0x1127E7B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFERBUILDER_PROCESS_OFFSET UNITYSDK_OFFSET(0x1127E3F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFERBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1127E970)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_OperationBufferBuilder_TypeDefinitionIndex = 88349;

	class AnimationSubManager_AnimationScheduler_OperationBufferBuilder : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation>* _operationList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFERBUILDER__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBuffer* Commit()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFERBUILDER_COMMIT_OFFSET))(this);
		}

		::System::Void Process(::System::Int32 nodeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFERBUILDER_PROCESS_OFFSET))(this, nodeIndex);
		}

		::System::Void Complete(::Foundation::BitSet64 nodeIndices)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::BitSet64))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFERBUILDER_COMPLETE_OFFSET))(this, nodeIndices);
		}

		::System::Void Dispatch(::System::Int32 nodeIndex, ::Foundation::BitSet64 dependOnIndices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::BitSet64))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFERBUILDER_DISPATCH_OFFSET))(this, nodeIndex, dependOnIndices);
		}
	};
}
