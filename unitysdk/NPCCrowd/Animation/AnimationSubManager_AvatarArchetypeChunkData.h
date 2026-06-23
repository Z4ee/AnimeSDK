#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarArchetypeChunkData_TypeDefinitionIndex = 57407;

	enum class AnimationSubManager_AvatarArchetypeChunkData : ::System::Int32
	{
		AnimationPose = 4,
		AnimationState = 0,
		BoneAdjustAnimDrivenPose = 26,
		BoneAdjustIkDrivenPose = 27,
		AdjustmentBlendingWarpingTickData = 21,
		InertializationRequest = 10,
		TickData = 1,
		IKControlData = 18,
		BoneAdjustEnabled = 24,
		InertializationLastPose = 14,
		BlendShapeData = 7,
		AdjustmentBlendingControlData = 20,
		RootMotion = 3,
		EntityId = 8,
		BlendShapeValue = 5,
		InertializationState = 11,
		EntityTransform = 9,
		InertializationPose = 16,
		Max = 28,
		AdjustmentBlendingTarget = 22,
		InertializationLastAdditionalData = 13,
		BoneAdjustMasterBoneAnimPoseRot = 25,
		BlendShapeCurveID = 6,
		MotionControlData = 17,
		InertializationDeltaData = 12,
		EntityLOD = 19,
		InertializationAdditionalData = 15,
		FootStepControlData = 23,
		ClipData = 2,
	};
}
