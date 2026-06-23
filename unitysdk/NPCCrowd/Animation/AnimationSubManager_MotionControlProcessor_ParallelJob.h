#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustPelvisSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_TwoBonesIKSetting.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6A5A20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_GET__BONEADJUSTMASTERBONE_OFFSET UNITYSDK_OFFSET(0x6A5A00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_GET__LOOKATIKSETTING_OFFSET UNITYSDK_OFFSET(0x6A59E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_ISWITHINANGLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x102ADB30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_MOTIONCONTROL_OFFSET UNITYSDK_OFFSET(0x6A5A30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_PREPROCESSBONEADJUST_OFFSET UNITYSDK_OFFSET(0x102AF680)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYADJUSTPELVIS_OFFSET UNITYSDK_OFFSET(0x102ADE10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0x102A5010)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYSOLVELOOKATIK_OFFSET UNITYSDK_OFFSET(0x102AC7E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYSOLVETWOBONEIK_OFFSET UNITYSDK_OFFSET(0x102A8200)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_UPDATELOOKATIKCONTROL_OFFSET UNITYSDK_OFFSET(0x102AB030)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_UPDATEWEIGHT_OFFSET UNITYSDK_OFFSET(0x102ADCA0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MotionControlProcessor_ParallelJob_TypeDefinitionIndex = 57401;

	struct alignas(8) AnimationSubManager_MotionControlProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_MotionControlProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x34F90);
		}
		// static const ::System::Single WeightThreshold; // 0x0
		::System::Double _timestamp; // 0x10
		::System::Double _deltatime; // 0x18
		::System::Int32 _sourceIndex; // 0x20
		::System::Int32 _avatarId; // 0x24
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _leftHandSetting; // 0x28
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _rightHandSetting; // 0x4C
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _leftFootSetting; // 0x70
		::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting _rightFootSetting; // 0x94
		::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting _pelvisAdjustSetting; // 0xB8

		/*
		::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting get__lookAtIkSetting()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_GET__LOOKATIKSETTING_OFFSET))(this);
		}
		*/

		/*
		::Unity::Collections::NativeSlice_1<::Struct_2_6402D4A3EAB8BDC8> get__boneAdjustMasterBone()
		{
			return ((::Unity::Collections::NativeSlice_1<::Struct_2_6402D4A3EAB8BDC8>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_GET__BONEADJUSTMASTERBONE_OFFSET))(this);
		}
		*/

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		::System::Void MotionControl(::System::UInt32 entityId, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::System::Boolean& boneAdjustEnabled, ::System::Span_1<::UnityEngine::Quaternion> masterBoneAnimRot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::System::Boolean&, ::System::Span_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_MOTIONCONTROL_OFFSET))(this, entityId, pose, motionControl, boneAdjustEnabled, masterBoneAnimRot);
		}
		*/

		/*
		static ::System::Boolean IsWithinAngleThreshold(::UnityEngine::Vector3 targetDir, ::UnityEngine::Vector3 forward)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_ISWITHINANGLETHRESHOLD_OFFSET))(targetDir, forward);
		}
		*/

		/*
		static ::System::Boolean UpdateLookAtIKControl(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl& lookAtIKControl, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting settings, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl&, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_UPDATELOOKATIKCONTROL_OFFSET))(lookAtIKControl, pose, settings, deltaTime);
		}
		*/

		/*
		static ::System::Boolean UpdateWeight(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl& lookAtIKControl, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_UPDATEWEIGHT_OFFSET))(lookAtIKControl, deltaTime);
		}
		*/

		/*
		static ::System::Void TrySolveTwoBoneIK(::System::UInt32 entityId, ::System::Single weight, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl control, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting settings)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYSOLVETWOBONEIK_OFFSET))(entityId, weight, pose, control, settings);
		}
		*/

		/*
		static ::System::Void TryAdjustPelvis(::System::UInt32 entityId, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData motionControl, ::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting settings)
		{
			return ((::System::Void(*)(::System::UInt32, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustPelvisSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYADJUSTPELVIS_OFFSET))(entityId, pose, motionControl, settings);
		}
		*/

		/*
		static ::System::Void TrySolveLookAtIK(::System::Single weight, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl control, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting settings)
		{
			return ((::System::Void(*)(::System::Single, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKControl, ::NPCCrowd::Animation::AnimationSubManager_LookAtIKSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_TRYSOLVELOOKATIK_OFFSET))(weight, pose, control, settings);
		}
		*/

		/*
		static ::System::Void PreprocessBoneAdjust(::Unity::Collections::NativeSlice_1<::Struct_2_6402D4A3EAB8BDC8> masterBones, ::NPCCrowd::Animation::FRefPose pose, ::System::Span_1<::UnityEngine::Quaternion> masterBoneAnimRot)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeSlice_1<::Struct_2_6402D4A3EAB8BDC8>, ::NPCCrowd::Animation::FRefPose, ::System::Span_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MOTIONCONTROLPROCESSOR_PARALLELJOB_PREPROCESSBONEADJUST_OFFSET))(masterBones, pose, masterBoneAnimRot);
		}
		*/
	};
}
