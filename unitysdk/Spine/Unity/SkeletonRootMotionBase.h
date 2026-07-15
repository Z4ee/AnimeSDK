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

#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x168CA790)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PROCESSROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x168CA690)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ADJUSTROOTMOTIONTODISTANCE_OFFSET UNITYSDK_OFFSET(0x168CC0C0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOPOS_OFFSET UNITYSDK_OFFSET(0x168CC410)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOROTATION_OFFSET UNITYSDK_OFFSET(0x168CC820)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYROOTMOTION_OFFSET UNITYSDK_OFFSET(0x168CD2C0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYTRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x168CDDF0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_CALCULATEANIMATIONSROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x168CBC30)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEAREFFECTIVEBONEOFFSETS_OFFSET UNITYSDK_OFFSET(0x168CBB20)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEARRIGIDBODYTEMPMOVEMENT_OFFSET UNITYSDK_OFFSET(0x168CBB40)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDRIGIDBODYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x168CAA70)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDTRANSFORMCONSTRAINTSAFFECTINGBONE_OFFSET UNITYSDK_OFFSET(0x168CBDE0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x168CB0E0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GATHERTOPLEVELBONES_OFFSET UNITYSDK_OFFSET(0x168CABE0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONINFO_OFFSET UNITYSDK_OFFSET(0x168C3050)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_1_OFFSET UNITYSDK_OFFSET(0x168C3BF0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_OFFSET UNITYSDK_OFFSET(0x168CC7F0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_1_OFFSET UNITYSDK_OFFSET(0x168C2730)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_OFFSET UNITYSDK_OFFSET(0x168CC3E0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETCONSTRAINTLASTPOSINDEX_OFFSET UNITYSDK_OFFSET(0x168CCBE0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_1_OFFSET UNITYSDK_OFFSET(0x168CB870)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_OFFSET UNITYSDK_OFFSET(0x168CC3C0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x168CD1F0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x168CD290)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GETTIMELINEMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x168CCDF0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET UNITYSDK_OFFSET(0x168CA900)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ADDITIONALSCALE_OFFSET UNITYSDK_OFFSET(0x168CBC20)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_PREVIOUSRIGIDBODYROOTMOTION2D_OFFSET UNITYSDK_OFFSET(0x168CA8D0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_PREVIOUSRIGIDBODYROOTMOTION3D_OFFSET UNITYSDK_OFFSET(0x168CA8E0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_ROOTMOTIONBONE_OFFSET UNITYSDK_OFFSET(0x168CA890)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_SKELETONANIMATIONUSESFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x168CA920)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_TARGETSKELETONANIMATIONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x168CBCE0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_TARGETSKELETONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x168CBC40)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_GET_USESRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x168CA8A0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_HANDLEUPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x168CCF50)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x168CBBC0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_PHYSICSUPDATE_OFFSET UNITYSDK_OFFSET(0x168CB180)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x168CA810)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PROCESSROOTMOTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x168CA710)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_RESET_OFFSET UNITYSDK_OFFSET(0x168C34C0)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_SETEFFECTIVEBONEOFFSETSTO_OFFSET UNITYSDK_OFFSET(0x168CD870)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_SETROOTMOTIONBONE_OFFSET UNITYSDK_OFFSET(0x168CAE80)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_SET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET UNITYSDK_OFFSET(0x168CA910)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_START_OFFSET UNITYSDK_OFFSET(0x168C3720)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTPOS_OFFSET UNITYSDK_OFFSET(0x168CC660)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTROTATION_OFFSET UNITYSDK_OFFSET(0x168CCA60)
#define SPINE_UNITY_SKELETONROOTMOTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x168C4250)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRootMotionBase_TypeDefinitionIndex = 42219;

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

		::System::Void add_ProcessRootMotionOverride(::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PROCESSROOTMOTIONOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void remove_ProcessRootMotionOverride(::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PROCESSROOTMOTIONOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void add_PhysicsUpdateRootMotionOverride(::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ADD_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void remove_PhysicsUpdateRootMotionOverride(::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRootMotionBase_RootMotionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_REMOVE_PHYSICSUPDATEROOTMOTIONOVERRIDE_OFFSET))(this, a1);
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

		::System::Void set_AdditionalRigidbody2DMovement(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_SET_ADDITIONALRIGIDBODY2DMOVEMENT_OFFSET))(this, a1);
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

		::System::Void PhysicsUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_PHYSICSUPDATE_OFFSET))(this, a1);
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

		::System::Void SetRootMotionBone(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_SETROOTMOTIONBONE_OFFSET))(this, a1);
		}

		::System::Void AdjustRootMotionToDistance(::UnityEngine::Vector2 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Boolean a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_ADJUSTROOTMOTIONTODISTANCE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::UnityEngine::Vector2 GetAnimationRootMotion(::Spine::Animation* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetAnimationRootMotion_1(::System::Single a1, ::System::Single a2, ::Spine::Animation* a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTION_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetAnimationRootMotionRotation(::Spine::Animation* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_OFFSET))(this, a1);
		}

		::System::Single GetAnimationRootMotionRotation_1(::System::Single a1, ::System::Single a2, ::Spine::Animation* a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONROTATION_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ApplyConstraintToPos(::Spine::Animation* a1, ::Spine::TransformConstraint* a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5, ::UnityEngine::Vector2& a6)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::Spine::TransformConstraint*, ::System::Int32, ::System::Single, ::System::Boolean, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOPOS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ApplyConstraintToRotation(::Spine::Animation* a1, ::Spine::TransformConstraint* a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5, ::System::Single& a6)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::Spine::TransformConstraint*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYCONSTRAINTTOROTATION_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void UpdateLastConstraintPos(::Il2CppArray<::Spine::TransformConstraint*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::TransformConstraint*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTPOS_OFFSET))(this, a1);
		}

		::System::Void UpdateLastConstraintRotation(::Il2CppArray<::Spine::TransformConstraint*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::TransformConstraint*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_UPDATELASTCONSTRAINTROTATION_OFFSET))(this, a1);
		}

		::Spine::Unity::SkeletonRootMotionBase_RootMotionInfo GetAnimationRootMotionInfo(::Spine::Animation* a1, ::System::Single a2)
		{
			return ((::Spine::Unity::SkeletonRootMotionBase_RootMotionInfo(*)(::PVOID, ::Spine::Animation*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETANIMATIONROOTMOTIONINFO_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetConstraintLastPosIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETCONSTRAINTLASTPOSINDEX_OFFSET))(this, a1);
		}

		::System::Void FindTransformConstraintsAffectingBone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_FINDTRANSFORMCONSTRAINTSAFFECTINGBONE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetTimelineMovementDelta(::System::Single a1, ::System::Single a2, ::Spine::TranslateXTimeline* a3, ::Spine::TranslateYTimeline* a4, ::Spine::Animation* a5)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single, ::Spine::TranslateXTimeline*, ::Spine::TranslateYTimeline*, ::Spine::Animation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETTIMELINEMOVEMENTDELTA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GatherTopLevelBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GATHERTOPLEVELBONES_OFFSET))(this);
		}

		::System::Void HandleUpdateLocal(::Spine::Unity::ISkeletonAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_HANDLEUPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void ApplyRootMotion(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYROOTMOTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ApplyTransformConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_APPLYTRANSFORMCONSTRAINTS_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetScaleAffectingRootMotion()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetScaleAffectingRootMotion_1(::UnityEngine::Vector2& a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSCALEAFFECTINGROOTMOTION_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetSkeletonSpaceMovementDelta(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEMOVEMENTDELTA_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetSkeletonSpaceRotationDelta(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_GETSKELETONSPACEROTATIONDELTA_OFFSET))(this, a1, a2);
		}

		::System::Void SetEffectiveBoneOffsetsTo(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_SETEFFECTIVEBONEOFFSETSTO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearEffectiveBoneOffsets(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEAREFFECTIVEBONEOFFSETS_OFFSET))(this, a1);
		}

		::System::Void ClearRigidbodyTempMovement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONROOTMOTIONBASE_CLEARRIGIDBODYTEMPMOVEMENT_OFFSET))(this);
		}
	};
}
