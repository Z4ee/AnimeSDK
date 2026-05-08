#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_Node.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_NodeFlag.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_PhaseEvent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationScheduler_OperationBuffer; }
namespace NPCCrowd::Animation { class AnimationSubManager_IAnimationProcessor; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0xD246720)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_BEGINFRAME_OFFSET UNITYSDK_OFFSET(0xD245EE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENDFRAME_OFFSET UNITYSDK_OFFSET(0xD246590)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENSUREOPERATIONBUFFEREMPTY_OFFSET UNITYSDK_OFFSET(0xD2461E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENSUREOPERATIONBUFFER_OFFSET UNITYSDK_OFFSET(0xD246060)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_FORCECOMPLETEALL_OFFSET UNITYSDK_OFFSET(0xD2465E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETMAXPHASEEVENTNODEINDEX_OFFSET UNITYSDK_OFFSET(0xD246880)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETMINPHASEEVENTNODEINDEX_OFFSET UNITYSDK_OFFSET(0xD2467F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETPHASEEVENTNODEINDEX_OFFSET UNITYSDK_OFFSET(0xD2467E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INITIALIZEPHASEEVENT_OFFSET UNITYSDK_OFFSET(0xD245E10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xD2463D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD246910)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0xD245D90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_TypeDefinitionIndex = 70421;

	class AnimationSubManager_AnimationScheduler : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_NodeIndexGenerator()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AnimationScheduler_TypeDefinitionIndex)->GetStaticField(0x120F0);
		}
		// static const ::System::Int32 MaxNodeNum = 0x40; // 0x0
		// static const ::System::Int32 MaxEventNum = 0x8; // 0x0
		// static const ::System::Int32 MaxProcessorNum = 0x38; // 0x0
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*>* _processors; // 0x10
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBuffer*>* _operationBuffers; // 0x18
		::Il2CppArray<::Unity::Jobs::JobHandle>* _jobHandles; // 0x20
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>* _nodes; // 0x28
		::System::Int32 _operationBufferIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER__CCTOR_OFFSET))();
		}

		::System::Void BeginFrame(::NPCCrowd::Animation::AnimationSubManager* manager, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_BEGINFRAME_OFFSET))(this, manager, deltaTime);
		}

		::System::Void Schedule(::NPCCrowd::Animation::AnimationSubManager* manager, ::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase phase)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULE_OFFSET))(this, manager, phase);
		}

		::System::Void EndFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENDFRAME_OFFSET))(this);
		}

		::System::Void ForceCompleteAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_FORCECOMPLETEALL_OFFSET))(this);
		}

		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBuffer*>* EnsureOperationBuffer()
		{
			return ((::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBuffer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENSUREOPERATIONBUFFER_OFFSET))(this);
		}

		static ::System::Void InitializePhaseEvent(::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>* nodes)
		{
			return ((::System::Void(*)(::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INITIALIZEPHASEEVENT_OFFSET))(nodes);
		}

		static ::System::Void AddDependency(::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>* nodes, ::System::Int32 index, ::System::Int32 dependentOn)
		{
			return ((::System::Void(*)(::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ADDDEPENDENCY_OFFSET))(nodes, index, dependentOn);
		}

		static ::System::Int32 GetPhaseEventNodeIndex(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_PhaseEvent evt)
		{
			return ((::System::Int32(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_PhaseEvent))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETPHASEEVENTNODEINDEX_OFFSET))(evt);
		}

		static ::System::Int32 GetMinPhaseEventNodeIndex(::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase minPhase)
		{
			return ((::System::Int32(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETMINPHASEEVENTNODEINDEX_OFFSET))(minPhase);
		}

		static ::System::Int32 GetMaxPhaseEventNodeIndex(::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase maxPhase)
		{
			return ((::System::Int32(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETMAXPHASEEVENTNODEINDEX_OFFSET))(maxPhase);
		}

		::System::Void EnsureOperationBufferEmpty(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENSUREOPERATIONBUFFEREMPTY_OFFSET))(this, manager);
		}
	};
}
