#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AvatarArchetypeChunkData_TypeDefinitionIndex = 70439;

	enum class AnimationSubManager_AvatarArchetypeChunkData : ::System::Int32
	{
		FootStepControlData = 23,
		TickData = 1,
		EntityTransform = 9,
		InertializationRequest = 10,
		InertializationState = 11,
		EntityId = 8,
		InertializationPose = 16,
		BlendShapeValue = 5,
		InertializationLastPose = 14,
		EntityLOD = 19,
		AnimationState = 0,
		AdjustmentBlendingControlData = 20,
		AdjustmentBlendingWarpingTickData = 21,
		BlendShapeData = 7,
		Max = 28,
		BoneAdjustIkDrivenPose = 27,
		RootMotion = 3,
		BoneAdjustMasterBoneAnimPoseRot = 25,
		BoneAdjustAnimDrivenPose = 26,
		ClipData = 2,
		BlendShapeCurveID = 6,
		InertializationDeltaData = 12,
		AnimationPose = 4,
		InertializationLastAdditionalData = 13,
		IKControlData = 18,
		AdjustmentBlendingTarget = 22,
		InertializationAdditionalData = 15,
		MotionControlData = 17,
		BoneAdjustEnabled = 24,
	};
}
