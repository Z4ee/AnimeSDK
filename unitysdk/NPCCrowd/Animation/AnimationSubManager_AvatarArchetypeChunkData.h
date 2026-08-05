#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarArchetypeChunkData_TypeDefinitionIndex = 88277;

	enum class AnimationSubManager_AvatarArchetypeChunkData : ::System::Int32
	{
		AdjustmentBlendingTarget = 22,
		InertializationAdditionalData = 15,
		InertializationLastPose = 14,
		BlendShapeData = 7,
		IKControlData = 18,
		BoneAdjustIkDrivenPose = 27,
		AdjustmentBlendingControlData = 20,
		BlendShapeCurveID = 6,
		MotionControlData = 17,
		BoneAdjustMasterBoneAnimPoseRot = 25,
		InertializationDeltaData = 12,
		InertializationState = 11,
		AdjustmentBlendingWarpingTickData = 21,
		EntityId = 8,
		InertializationLastAdditionalData = 13,
		RootMotion = 3,
		BoneAdjustAnimDrivenPose = 26,
		TickData = 1,
		EntityLOD = 19,
		InertializationRequest = 10,
		ClipData = 2,
		BlendShapeValue = 5,
		AnimationState = 0,
		InertializationPose = 16,
		FootStepControlData = 23,
		EntityTransform = 9,
		Max = 28,
		AnimationPose = 4,
		BoneAdjustEnabled = 24,
	};
}
