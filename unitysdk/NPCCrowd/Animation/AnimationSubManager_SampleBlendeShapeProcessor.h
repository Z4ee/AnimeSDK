#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_SampleBlendeShapeProcessor_LegacyJob.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_SampleBlendeShapeProcessor_ParallelJob.h"
#include "unitysdk/NPCCrowd/Animation/ENPCAnimationAvatarMaskType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0x106FE9C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GETMASKOFFSET_OFFSET UNITYSDK_OFFSET(0x106FF4D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x106FE830)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x106FE820)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0x106FE810)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_ISFULLMASK_OFFSET UNITYSDK_OFFSET(0x106FF470)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x106FE890)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_RESOLVEMASKTYPEFORLAYER_OFFSET UNITYSDK_OFFSET(0x106FF410)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x106FF540)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SampleBlendeShapeProcessor_TypeDefinitionIndex = 57424;

	class AnimationSubManager_SampleBlendeShapeProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_SampleBlendeShapeProcessor_LegacyJob>* _buffer; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_SampleBlendeShapeProcessor_ParallelJob _parallelJob; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}

		static ::NPCCrowd::Animation::ENPCAnimationAvatarMaskType ResolveMaskTypeForLayer(::System::Int32 layerIndex)
		{
			return ((::NPCCrowd::Animation::ENPCAnimationAvatarMaskType(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_RESOLVEMASKTYPEFORLAYER_OFFSET))(layerIndex);
		}

		static ::System::Boolean IsFullMask(::NPCCrowd::Animation::ENPCAnimationAvatarMaskType maskType, ::Unity::Collections::NativeArray_1<::System::Byte> fullFlags)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::ENPCAnimationAvatarMaskType, ::Unity::Collections::NativeArray_1<::System::Byte>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_ISFULLMASK_OFFSET))(maskType, fullFlags);
		}

		static ::System::Int32 GetMaskOffset(::NPCCrowd::Animation::ENPCAnimationAvatarMaskType maskType, ::System::Int32 blendShapeCount, ::System::Int32 maskArrayLength)
		{
			return ((::System::Int32(*)(::NPCCrowd::Animation::ENPCAnimationAvatarMaskType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_GETMASKOFFSET_OFFSET))(maskType, blendShapeCount, maskArrayLength);
		}
	};
}
