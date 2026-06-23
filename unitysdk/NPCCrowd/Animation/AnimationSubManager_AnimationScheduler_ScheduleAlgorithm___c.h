#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet64.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_Node.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AnimationScheduler_OperationBufferBuilder; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9378E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD937920)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM___C___CCTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0xD937930)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM___C___CCTOR_B__22_1_OFFSET UNITYSDK_OFFSET(0xD937950)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_ScheduleAlgorithm___c_TypeDefinitionIndex = 57455;

	class AnimationSubManager_AnimationScheduler_ScheduleAlgorithm___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ScheduleAlgorithm___c** StaticGet___9()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ScheduleAlgorithm___c**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AnimationScheduler_ScheduleAlgorithm___c_TypeDefinitionIndex)->GetStaticField(0x4A2D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__22_0(::System::Int32 index, ::Unity::Collections::NativeArray_1<::Foundation::BitSet64> noDispatchable, ::Unity::Collections::NativeArray_1<::System::Int32> order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Unity::Collections::NativeArray_1<::Foundation::BitSet64>, ::Unity::Collections::NativeArray_1<::System::Int32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM___C___CCTOR_B__22_0_OFFSET))(this, index, noDispatchable, order);
		}

		::System::Void __cctor_b__22_1(::System::Int32 index, ::Foundation::BitSet64 prerequisite, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node> nodes, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::BitSet64, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM___C___CCTOR_B__22_1_OFFSET))(this, index, prerequisite, nodes, builder);
		}
	};
}
