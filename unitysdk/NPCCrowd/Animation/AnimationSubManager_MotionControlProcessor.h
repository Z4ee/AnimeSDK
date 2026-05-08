#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlProcessor_Job.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0x11B25490)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x11B252B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x11B252A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0x11B25290)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x11B25310)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B259B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11B259A0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MotionControlProcessor_TypeDefinitionIndex = 70469;

	class AnimationSubManager_MotionControlProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		static ::System::Single* StaticGet__minLookAtWeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_MotionControlProcessor_TypeDefinitionIndex)->GetStaticField(0xEF00);
		}
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_MotionControlProcessor_Job>* _buffer; // 0x10

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
