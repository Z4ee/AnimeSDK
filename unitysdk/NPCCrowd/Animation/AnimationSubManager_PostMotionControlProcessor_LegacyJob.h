#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustPelvisSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_IKControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_LookAtIKSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKSetting.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x157B2090)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x825E40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x825E30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_ISVALID_OFFSET UNITYSDK_OFFSET(0x826400)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_MOTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x826270)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_TRYADJUSTPELVIS_OFFSET UNITYSDK_OFFSET(0x157B30A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_TRYSOLVELOOKATIK_OFFSET UNITYSDK_OFFSET(0x157B61D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_TRYSOLVETWOBONEIK_OFFSET UNITYSDK_OFFSET(0x157B31E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PostMotionControlProcessor_LegacyJob_TypeDefinitionIndex = 88280;

	struct alignas(8) AnimationSubManager_PostMotionControlProcessor_LegacyJob
	{
		// static const ::System::Single WeightThreshold; // 0x0
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _bones; // 0x10
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::AnimationSubManager_IKControlData> _ikControlData; // 0x40
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x60
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityTransforms; // 0x80
		::Unity::Collections::NativeSlice_1<::System::Int32> _boneParents; // 0xA0
		::System::Double _timestamp; // 0xB0
		::System::Int32 _avatarId; // 0xB8
		::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting _lookAtIkSetting; // 0xC0
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _leftHandSetting; // 0x118
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _rightHandSetting; // 0x13C
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _leftFootSetting; // 0x160
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _rightFootSetting; // 0x184
		::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting _pelvisAdjustSetting; // 0x1A8

		/*
		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_PostMotionControlProcessor_LegacyJob> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Double timestamp)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_PostMotionControlProcessor_LegacyJob>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(avatar, timestamp);
		}
		*/

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		::System::Void MotionControl(::System::UInt32 entityId, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_IKControlData ikControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_IKControlData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_MOTIONCONTROL_OFFSET))(this, entityId, pose, ikControl);
		}
		*/

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_ISVALID_OFFSET))(this);
		}

		/*
		static ::System::Void TrySolveLookAtIK(::System::Single weight, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl control, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting settings)
		{
			return ((::System::Void(*)(::System::Single, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_TRYSOLVELOOKATIK_OFFSET))(weight, pose, control, settings);
		}
		*/

		/*
		static ::System::Void TrySolveTwoBoneIK(::System::Single weight, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl control, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting settings)
		{
			return ((::System::Void(*)(::System::Single, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_TRYSOLVETWOBONEIK_OFFSET))(weight, pose, control, settings);
		}
		*/

		/*
		static ::System::Void TryAdjustPelvis(::System::Single leftFootWeight, ::System::Single rightFootWeight, ::NPCCrowd::Animation::FRefPose pose, ::UnityEngine::NapTransformData leftFootEffector, ::UnityEngine::NapTransformData rightFootEffector, ::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting settings)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::NPCCrowd::Animation::FRefPose, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_LEGACYJOB_TRYADJUSTPELVIS_OFFSET))(leftFootWeight, rightFootWeight, pose, leftFootEffector, rightFootEffector, settings);
		}
		*/
	};
}
