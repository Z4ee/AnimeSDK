#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonRootMotionBase_RootMotionInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Spine { class Animation; }
namespace Spine { class Bone; }
namespace Spine { class TransformConstraint; }
namespace Spine { class TranslateXTimeline; }
namespace Spine { class TranslateYTimeline; }
namespace Spine::Unity { class ISkeletonAnimation; }
namespace Spine::Unity { class ISkeletonComponent; }
namespace Spine::Unity { class SkeletonRootMotionBase_RootMotionDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Rigidbody; }

#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1AD44B00)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PROCESSROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1AD44A00)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ADJUSTROOTMOTIONTODISTANCE_OFFSET UNITYSDK_OFFSET(0x1AD46D10)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOPOS_OFFSET UNITYSDK_OFFSET(0x1AD471E0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOROTATION_OFFSET UNITYSDK_OFFSET(0x1AD47540)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1AD47EB0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYTRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1AD48DA0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_CALCULATEANIMATIONSROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x1AD46920)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEAREFFECTIVEBONEOFFSETS_OFFSET UNITYSDK_OFFSET(0x1AD46290)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEARRIGIDBODYTEMPMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1AD462B0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDRIGIDBODYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AD44F50)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDTRANSFORMCONSTRAINTSAFFECTINGBONE_OFFSET UNITYSDK_OFFSET(0x1AD46AB0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD45810)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GATHERTOPLEVELBONES_OFFSET UNITYSDK_OFFSET(0x1AD45430)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONINFO_OFFSET UNITYSDK_OFFSET(0x1AD3B1A0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_1_OFFSET UNITYSDK_OFFSET(0x1AD3BDA0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_OFFSET UNITYSDK_OFFSET(0x1AD47510)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_1_OFFSET UNITYSDK_OFFSET(0x1AD3A4C0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1AD471B0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETCONSTRAINTLASTPOSINDEX_OFFSET UNITYSDK_OFFSET(0x1AD479A0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_1_OFFSET UNITYSDK_OFFSET(0x1AD460C0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_OFFSET UNITYSDK_OFFSET(0x1AD47190)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x1AD47DE0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x1AD47E80)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETTIMELINEMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x1AD47B10)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1AD44E50)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ADDITIONALSCALE_OFFSET UNITYSDK_OFFSET(0x1AD46910)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_PREVIOUSRIGIDBODYROOTMOTION2D_OFFSET UNITYSDK_OFFSET(0x1AD44E20)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_PREVIOUSRIGIDBODYROOTMOTION3D_OFFSET UNITYSDK_OFFSET(0x1AD44E30)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ROOTMOTIONBONE_OFFSET UNITYSDK_OFFSET(0x1AD44C00)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_SKELETONANIMATIONUSESFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD44E70)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_TARGETSKELETONANIMATIONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AD469D0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_TARGETSKELETONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AD46930)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_USESRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1AD44C10)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_HANDLEUPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1AD47C70)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AD468B0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_PHYSICSUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD45850)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1AD44B80)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PROCESSROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1AD44A80)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1AD3B690)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_SETEFFECTIVEBONEOFFSETSTO_OFFSET UNITYSDK_OFFSET(0x1AD48820)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_SETROOTMOTIONBONE_OFFSET UNITYSDK_OFFSET(0x1AD45640)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_SET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1AD44E60)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_START_OFFSET UNITYSDK_OFFSET(0x1AD3B9A0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTPOS_OFFSET UNITYSDK_OFFSET(0x1AD472E0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTROTATION_OFFSET UNITYSDK_OFFSET(0x1AD47780)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3C4B0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRootMotionBase_TypeDefinitionIndex = 39449;

	class SkeletonRootMotionBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* rootMotionBoneName; // 0x18
		::System::Boolean transformPositionX; // 0x20
		::System::Boolean transformPositionY; // 0x21
		::System::Boolean transformRotation; // 0x22
		::System::Single rootMotionScaleX; // 0x24
		::System::Single rootMotionScaleY; // 0x28
		::System::Single rootMotionScaleRotation; // 0x2C
		::System::Single rootMotionTranslateXPerY; // 0x30
		::System::Single rootMotionTranslateYPerX; // 0x34
		::UnityEngine::Rigidbody2D* rigidBody2D; // 0x38
		::System::Boolean applyRigidbody2DGravity; // 0x40
		::UnityEngine::Rigidbody* rigidBody; // 0x48
		::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate* ProcessRootMotionOverride; // 0x50
		::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate* PhysicsUpdateRootMotionOverride; // 0x58
		::System::Boolean disableOnOverride; // 0x60
		::Spine::Unity::ISkeletonComponent* skeletonComponent; // 0x68
		::Spine::Bone* rootMotionBone; // 0x70
		::System::Int32 rootMotionBoneIndex; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* transformConstraintIndices; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* transformConstraintLastPos; // 0x88
		::System::Collections::Generic::List_1<::System::Single>* transformConstraintLastRotation; // 0x90
		::System::Collections::Generic::List_1<::Spine::Bone*>* topLevelBones; // 0x98
		::UnityEngine::Vector2 initialOffset; // 0xA0
		::System::Boolean accumulatedUntilFixedUpdate; // 0xA8
		::UnityEngine::Vector2 tempSkeletonDisplacement; // 0xAC
		::UnityEngine::Vector3 rigidbodyDisplacement; // 0xB4
		::UnityEngine::Vector3 previousRigidbodyRootMotion; // 0xC0
		::UnityEngine::Vector2 additionalRigidbody2DMovement; // 0xCC
		::UnityEngine::Quaternion rigidbodyLocalRotation; // 0xD4
		::System::Single rigidbody2DRotation; // 0xE4
		::System::Single initialOffsetRotation; // 0xE8
		::System::Single tempSkeletonRotation; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE__CTOR_OFFSET))(this);
		}

		::System::Void add_ProcessRootMotionOverride(::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PROCESSROOTMOTIONOVERRIDE_OFFSET))(this, value);
		}

		::System::Void remove_ProcessRootMotionOverride(::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PROCESSROOTMOTIONOVERRIDE_OFFSET))(this, value);
		}

		::System::Void add_PhysicsUpdateRootMotionOverride(::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET))(this, value);
		}

		::System::Void remove_PhysicsUpdateRootMotionOverride(::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET))(this, value);
		}

		::Spine::Bone* get_RootMotionBone()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ROOTMOTIONBONE_OFFSET))(this);
		}

		::System::Boolean get_UsesRigidbody()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_USESRIGIDBODY_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PreviousRigidbodyRootMotion2D()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_PREVIOUSRIGIDBODYROOTMOTION2D_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PreviousRigidbodyRootMotion3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_PREVIOUSRIGIDBODYROOTMOTION3D_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_AdditionalRigidbody2DMovement()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET))(this);
		}

		::System::Void set_AdditionalRigidbody2DMovement(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_SET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET))(this, value);
		}

		::System::Boolean get_SkeletonAnimationUsesFixedUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_SKELETONANIMATIONUSESFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_RESET_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void PhysicsUpdate(::System::Boolean skeletonAnimationUsesFixedUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_PHYSICSUPDATE_OFFSET))(this, skeletonAnimationUsesFixedUpdate);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void FindRigidbodyComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDRIGIDBODYCOMPONENT_OFFSET))(this);
		}

		::System::Single get_AdditionalScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ADDITIONALSCALE_OFFSET))(this);
		}

		::System::Single CalculateAnimationsRotationDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_CALCULATEANIMATIONSROTATIONDELTA_OFFSET))(this);
		}

		::Spine::Unity::ISkeletonComponent* get_TargetSkeletonComponent()
		{
			return ((::Spine::Unity::ISkeletonComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_TARGETSKELETONCOMPONENT_OFFSET))(this);
		}

		::Spine::Unity::ISkeletonAnimation* get_TargetSkeletonAnimationComponent()
		{
			return ((::Spine::Unity::ISkeletonAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_TARGETSKELETONANIMATIONCOMPONENT_OFFSET))(this);
		}

		::System::Void SetRootMotionBone(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_SETROOTMOTIONBONE_OFFSET))(this, name);
		}

		::System::Void AdjustRootMotionToDistance(::UnityEngine::Vector2 distanceToTarget, ::System::Int32 trackIndex, ::System::Boolean adjustX, ::System::Boolean adjustY, ::System::Single minX, ::System::Single maxX, ::System::Single minY, ::System::Single maxY, ::System::Boolean allowXTranslation, ::System::Boolean allowYTranslation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ADJUSTROOTMOTIONTODISTANCE_OFFSET))(this, distanceToTarget, trackIndex, adjustX, adjustY, minX, maxX, minY, maxY, allowXTranslation, allowYTranslation);
		}

		::UnityEngine::Vector2 GetAnimationRootMotion(::Spine::Animation* animation)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_OFFSET))(this, animation);
		}

		::UnityEngine::Vector2 GetAnimationRootMotion_1(::System::Single startTime, ::System::Single endTime, ::Spine::Animation* animation)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_1_OFFSET))(this, startTime, endTime, animation);
		}

		::System::Single GetAnimationRootMotionRotation(::Spine::Animation* animation)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_OFFSET))(this, animation);
		}

		::System::Single GetAnimationRootMotionRotation_1(::System::Single startTime, ::System::Single endTime, ::Spine::Animation* animation)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_1_OFFSET))(this, startTime, endTime, animation);
		}

		::System::Void ApplyConstraintToPos(::Spine::Animation* animation, ::Spine::TransformConstraint* constraint, ::System::Int32 constraintIndex, ::System::Single time, ::System::Boolean useLastConstraintPos, ::UnityEngine::Vector2& pos)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::Spine::TransformConstraint*, ::System::Int32, ::System::Single, ::System::Boolean, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOPOS_OFFSET))(this, animation, constraint, constraintIndex, time, useLastConstraintPos, pos);
		}

		::System::Void ApplyConstraintToRotation(::Spine::Animation* animation, ::Spine::TransformConstraint* constraint, ::System::Int32 constraintIndex, ::System::Single time, ::System::Boolean useLastConstraintRotation, ::System::Single& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::Spine::TransformConstraint*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOROTATION_OFFSET))(this, animation, constraint, constraintIndex, time, useLastConstraintRotation, rotation);
		}

		::System::Void UpdateLastConstraintPos(::Il2CppArray<::Spine::TransformConstraint*>* transformConstraintsItems)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::TransformConstraint*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTPOS_OFFSET))(this, transformConstraintsItems);
		}

		::System::Void UpdateLastConstraintRotation(::Il2CppArray<::Spine::TransformConstraint*>* transformConstraintsItems)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::TransformConstraint*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTROTATION_OFFSET))(this, transformConstraintsItems);
		}

		::Spine::Unity::SkeletonRootMotionBase_RootMotionInfo GetAnimationRootMotionInfo(::Spine::Animation* animation, ::System::Single currentTime)
		{
			return ((::Spine::Unity::SkeletonRootMotionBase_RootMotionInfo(*)(::PVOID, ::Spine::Animation*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONINFO_OFFSET))(this, animation, currentTime);
		}

		::System::Int32 GetConstraintLastPosIndex(::System::Int32 constraintIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETCONSTRAINTLASTPOSINDEX_OFFSET))(this, constraintIndex);
		}

		::System::Void FindTransformConstraintsAffectingBone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDTRANSFORMCONSTRAINTSAFFECTINGBONE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetTimelineMovementDelta(::System::Single startTime, ::System::Single endTime, ::Spine::TranslateXTimeline* xTimeline, ::Spine::TranslateYTimeline* yTimeline, ::Spine::Animation* animation)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single, ::Spine::TranslateXTimeline*, ::Spine::TranslateYTimeline*, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETTIMELINEMOVEMENTDELTA_OFFSET))(this, startTime, endTime, xTimeline, yTimeline, animation);
		}

		::System::Void GatherTopLevelBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GATHERTOPLEVELBONES_OFFSET))(this);
		}

		::System::Void HandleUpdateLocal(::Spine::Unity::ISkeletonAnimation* animatedSkeletonComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_HANDLEUPDATELOCAL_OFFSET))(this, animatedSkeletonComponent);
		}

		::System::Void ApplyRootMotion(::UnityEngine::Vector2 skeletonTranslationDelta, ::System::Single skeletonRotationDelta, ::UnityEngine::Vector2 parentBoneScale, ::System::Boolean skeletonAnimationUsesFixedUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYROOTMOTION_OFFSET))(this, skeletonTranslationDelta, skeletonRotationDelta, parentBoneScale, skeletonAnimationUsesFixedUpdate);
		}

		::System::Void ApplyTransformConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYTRANSFORMCONSTRAINTS_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetScaleAffectingRootMotion()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetScaleAffectingRootMotion_1(::UnityEngine::Vector2& parentBoneScale)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_1_OFFSET))(this, parentBoneScale);
		}

		::UnityEngine::Vector2 GetSkeletonSpaceMovementDelta(::UnityEngine::Vector2 boneLocalDelta, ::UnityEngine::Vector2& parentBoneScale, ::UnityEngine::Vector2& totalScale)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEMOVEMENTDELTA_OFFSET))(this, boneLocalDelta, parentBoneScale, totalScale);
		}

		::System::Single GetSkeletonSpaceRotationDelta(::System::Single boneLocalDelta, ::UnityEngine::Vector2 totalScaleAffectingRootMotion)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEROTATIONDELTA_OFFSET))(this, boneLocalDelta, totalScaleAffectingRootMotion);
		}

		::System::Void SetEffectiveBoneOffsetsTo(::UnityEngine::Vector2 displacementSkeletonSpace, ::System::Single rotationSkeletonSpace, ::UnityEngine::Vector2 parentBoneScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_SETEFFECTIVEBONEOFFSETSTO_OFFSET))(this, displacementSkeletonSpace, rotationSkeletonSpace, parentBoneScale);
		}

		::System::Void ClearEffectiveBoneOffsets(::UnityEngine::Vector2 parentBoneScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEAREFFECTIVEBONEOFFSETS_OFFSET))(this, parentBoneScale);
		}

		::System::Void ClearRigidbodyTempMovement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEARRIGIDBODYTEMPMOVEMENT_OFFSET))(this);
		}
	};
}
