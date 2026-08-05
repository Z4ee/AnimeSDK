#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlProcessor_LegacyJob.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlProcessor_ParallelJob.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0xF0DB340)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xF0DB150)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xF0DB140)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xF0DB130)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xF0DB1B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0DB8F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xF0DB8E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MotionControlProcessor_TypeDefinitionIndex = 88340;

	class AnimationSubManager_MotionControlProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		static ::System::Single* StaticGet__minLookAtWeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_MotionControlProcessor_TypeDefinitionIndex)->GetStaticField(0xD080);
		}
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_MotionControlProcessor_LegacyJob>* _buffer; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_MotionControlProcessor_ParallelJob _parallelJob; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR__CCTOR_OFFSET))();
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
