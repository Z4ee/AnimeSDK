#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverVR_Locomotion_Mode.h"
#include "unitysdk/RootMotion/InterpolationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverVR; }
namespace RootMotion::FinalIK { class IKSolverVR_Arm; }
namespace RootMotion::FinalIK { class IKSolverVR_Footstep; }
namespace RootMotion::FinalIK { class IKSolverVR_Leg; }
namespace RootMotion::FinalIK { class IKSolverVR_Spine; }
namespace RootMotion::FinalIK { class IKSolverVR_VirtualBone; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Events { class UnityEvent; }

#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAPOSITION_ANIMATED_OFFSET UNITYSDK_OFFSET(0x1B6878D0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x1B67B1B0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAPOSITION_PROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1B6877D0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAROTATION_ANIMATED_OFFSET UNITYSDK_OFFSET(0x1B687440)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAROTATION_OFFSET UNITYSDK_OFFSET(0x1B67B230)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAROTATION_PROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1B686D10)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_CANSTEP_OFFSET UNITYSDK_OFFSET(0x1B687D30)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GETLINESPHERECOLLISION_OFFSET UNITYSDK_OFFSET(0x1B687DD0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B687A10)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GET_LEFTFOOTSTEPPOSITION_OFFSET UNITYSDK_OFFSET(0x1B688070)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GET_LEFTFOOTSTEPROTATION_OFFSET UNITYSDK_OFFSET(0x1B688120)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GET_RIGHTFOOTSTEPPOSITION_OFFSET UNITYSDK_OFFSET(0x1B6880C0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GET_RIGHTFOOTSTEPROTATION_OFFSET UNITYSDK_OFFSET(0x1B688170)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_INITIATE_ANIMATED_OFFSET UNITYSDK_OFFSET(0x1B686610)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_INITIATE_OFFSET UNITYSDK_OFFSET(0x1B681060)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_INITIATE_PROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1B686010)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RELAX_OFFSET UNITYSDK_OFFSET(0x1B686C90)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RELAX_PROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1B686CA0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RESETPARAMS_OFFSET UNITYSDK_OFFSET(0x1B687960)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RESET_ANIMATED_OFFSET UNITYSDK_OFFSET(0x1B6835D0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RESET_OFFSET UNITYSDK_OFFSET(0x1B67C410)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RESET_PROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1B686820)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_SET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B687A30)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_SOLVE_ANIMATED_OFFSET UNITYSDK_OFFSET(0x1B6838E0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_SOLVE_PROCEDURAL_OFFSET UNITYSDK_OFFSET(0x1B6810B0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_STEPBLOCKED_OFFSET UNITYSDK_OFFSET(0x1B687A50)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B685EC0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_Locomotion_TypeDefinitionIndex = 36640;

	class IKSolverVR_Locomotion : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_VRIK_Horizontal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IKSolverVR_Locomotion_TypeDefinitionIndex)->GetStaticField(0x8930);
		}
		static ::System::Int32* StaticGet_VRIK_IsMoving()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IKSolverVR_Locomotion_TypeDefinitionIndex)->GetStaticField(0x8934);
		}
		static ::System::Int32* StaticGet_VRIK_Speed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IKSolverVR_Locomotion_TypeDefinitionIndex)->GetStaticField(0x8938);
		}
		static ::System::Boolean* StaticGet_isHashed()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IKSolverVR_Locomotion_TypeDefinitionIndex)->GetStaticField(0x893C);
		}
		static ::System::Int32* StaticGet_VRIK_Turn()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IKSolverVR_Locomotion_TypeDefinitionIndex)->GetStaticField(0x8940);
		}
		static ::System::Int32* StaticGet_VRIK_Vertical()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IKSolverVR_Locomotion_TypeDefinitionIndex)->GetStaticField(0x8944);
		}
		::RootMotion::FinalIK::IKSolverVR_Locomotion_Mode mode; // 0x10
		::System::Single weight; // 0x14
		::System::Single moveThreshold; // 0x18
		::System::Byte animationHeader; // 0x1C
		::System::Single minAnimationSpeed; // 0x20
		::System::Single maxAnimationSpeed; // 0x24
		::System::Single animationSmoothTime; // 0x28
		::System::Byte rootPositionHeader; // 0x2C
		::UnityEngine::Vector2 standOffset; // 0x30
		::System::Single rootLerpSpeedWhileMoving; // 0x38
		::System::Single rootLerpSpeedWhileStopping; // 0x3C
		::System::Single rootLerpSpeedWhileTurning; // 0x40
		::System::Single maxRootOffset; // 0x44
		::System::Byte rootRotationHeader; // 0x48
		::System::Single maxRootAngleMoving; // 0x4C
		::System::Single maxRootAngleStanding; // 0x50
		::System::Single stepLengthMlp; // 0x54
		::UnityEngine::Animator* animator; // 0x58
		::UnityEngine::Vector3 velocityLocal; // 0x60
		::UnityEngine::Vector3 velocityLocalV; // 0x6C
		::UnityEngine::Vector3 lastCorrection; // 0x78
		::UnityEngine::Vector3 lastHeadTargetPos; // 0x84
		::UnityEngine::Vector3 lastSpeedRootPos; // 0x90
		::UnityEngine::Vector3 lastEndRootPos; // 0x9C
		::System::Single rootLerpSpeed; // 0xA8
		::System::Single rootVelocityV; // 0xAC
		::System::Single animSpeed; // 0xB0
		::System::Single animSpeedV; // 0xB4
		::System::Single stopMoveTimer; // 0xB8
		::System::Single turn; // 0xBC
		::System::Single maxRootAngleV; // 0xC0
		::System::Single currentAnimationSmoothTime; // 0xC4
		::System::Boolean isMoving; // 0xC8
		::System::Boolean firstFrame; // 0xC9
		::System::Single lastVelLocalMag; // 0xCC
		::System::Single footDistance; // 0xD0
		::System::Single stepThreshold; // 0xD4
		::System::Single angleThreshold; // 0xD8
		::System::Single comAngleMlp; // 0xDC
		::System::Single maxVelocity; // 0xE0
		::System::Single velocityFactor; // 0xE4
		::System::Single maxLegStretch; // 0xE8
		::System::Single rootSpeed; // 0xEC
		::System::Single stepSpeed; // 0xF0
		::UnityEngine::AnimationCurve* stepHeight; // 0xF8
		::System::Single maxBodyYOffset; // 0x100
		::UnityEngine::AnimationCurve* heelHeight; // 0x108
		::System::Single relaxLegTwistMinAngle; // 0x110
		::System::Single relaxLegTwistSpeed; // 0x114
		::RootMotion::InterpolationMode stepInterpolation; // 0x118
		::UnityEngine::Vector3 offset; // 0x11C
		::System::Boolean blockingEnabled; // 0x128
		::UnityEngine::LayerMask blockingLayers; // 0x12C
		::System::Single raycastRadius; // 0x130
		::System::Single raycastHeight; // 0x134
		::UnityEngine::Events::UnityEvent* onLeftFootstep; // 0x138
		::UnityEngine::Events::UnityEvent* onRightFootstep; // 0x140
		::UnityEngine::Vector3 _centerOfMass_k__BackingField; // 0x148
		::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Footstep*>* footsteps; // 0x158
		::UnityEngine::Vector3 lastComPosition; // 0x160
		::UnityEngine::Vector3 comVelocity; // 0x16C
		::System::Int32 leftFootIndex; // 0x178
		::System::Int32 rightFootIndex; // 0x17C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION__CTOR_OFFSET))(this);
		}

		::System::Void Initiate(::UnityEngine::Animator* animator, ::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Quaternion>* rotations, ::System::Boolean hasToes, ::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_INITIATE_OFFSET))(this, animator, positions, rotations, hasToes, scale);
		}

		::System::Void Reset(::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Quaternion>* rotations)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RESET_OFFSET))(this, positions, rotations);
		}

		::System::Void Relax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RELAX_OFFSET))(this);
		}

		::System::Void AddDeltaRotation(::UnityEngine::Quaternion delta, ::UnityEngine::Vector3 pivot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAROTATION_OFFSET))(this, delta, pivot);
		}

		::System::Void AddDeltaPosition(::UnityEngine::Vector3 delta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAPOSITION_OFFSET))(this, delta);
		}

		::System::Void Initiate_Animated(::UnityEngine::Animator* animator, ::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_INITIATE_ANIMATED_OFFSET))(this, animator, positions);
		}

		::System::Void ResetParams(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RESETPARAMS_OFFSET))(this, positions);
		}

		::System::Void Reset_Animated(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RESET_ANIMATED_OFFSET))(this, positions);
		}

		::System::Void AddDeltaRotation_Animated(::UnityEngine::Quaternion delta, ::UnityEngine::Vector3 pivot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAROTATION_ANIMATED_OFFSET))(this, delta, pivot);
		}

		::System::Void AddDeltaPosition_Animated(::UnityEngine::Vector3 delta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAPOSITION_ANIMATED_OFFSET))(this, delta);
		}

		::System::Void Solve_Animated(::RootMotion::FinalIK::IKSolverVR* solver, ::System::Single scale, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverVR*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_SOLVE_ANIMATED_OFFSET))(this, solver, scale, deltaTime);
		}

		::UnityEngine::Vector3 get_centerOfMass()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GET_CENTEROFMASS_OFFSET))(this);
		}

		::System::Void set_centerOfMass(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_SET_CENTEROFMASS_OFFSET))(this, value);
		}

		::System::Void Initiate_Procedural(::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Quaternion>* rotations, ::System::Boolean hasToes, ::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_INITIATE_PROCEDURAL_OFFSET))(this, positions, rotations, hasToes, scale);
		}

		::System::Void Reset_Procedural(::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Quaternion>* rotations)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RESET_PROCEDURAL_OFFSET))(this, positions, rotations);
		}

		::System::Void Relax_Procedural()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_RELAX_PROCEDURAL_OFFSET))(this);
		}

		::System::Void AddDeltaRotation_Procedural(::UnityEngine::Quaternion delta, ::UnityEngine::Vector3 pivot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAROTATION_PROCEDURAL_OFFSET))(this, delta, pivot);
		}

		::System::Void AddDeltaPosition_Procedural(::UnityEngine::Vector3 delta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_ADDDELTAPOSITION_PROCEDURAL_OFFSET))(this, delta);
		}

		::System::Void Solve_Procedural(::RootMotion::FinalIK::IKSolverVR_VirtualBone* rootBone, ::RootMotion::FinalIK::IKSolverVR_Spine* spine, ::RootMotion::FinalIK::IKSolverVR_Leg* leftLeg, ::RootMotion::FinalIK::IKSolverVR_Leg* rightLeg, ::RootMotion::FinalIK::IKSolverVR_Arm* leftArm, ::RootMotion::FinalIK::IKSolverVR_Arm* rightArm, ::System::Int32 supportLegIndex, ::UnityEngine::Vector3& leftFootPosition, ::UnityEngine::Vector3& rightFootPosition, ::UnityEngine::Quaternion& leftFootRotation, ::UnityEngine::Quaternion& rightFootRotation, ::System::Single& leftFootOffset, ::System::Single& rightFootOffset, ::System::Single& leftHeelOffset, ::System::Single& rightHeelOffset, ::System::Single scale, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverVR_VirtualBone*, ::RootMotion::FinalIK::IKSolverVR_Spine*, ::RootMotion::FinalIK::IKSolverVR_Leg*, ::RootMotion::FinalIK::IKSolverVR_Leg*, ::RootMotion::FinalIK::IKSolverVR_Arm*, ::RootMotion::FinalIK::IKSolverVR_Arm*, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_SOLVE_PROCEDURAL_OFFSET))(this, rootBone, spine, leftLeg, rightLeg, leftArm, rightArm, supportLegIndex, leftFootPosition, rightFootPosition, leftFootRotation, rightFootRotation, leftFootOffset, rightFootOffset, leftHeelOffset, rightHeelOffset, scale, deltaTime);
		}

		::UnityEngine::Vector3 get_leftFootstepPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GET_LEFTFOOTSTEPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_rightFootstepPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GET_RIGHTFOOTSTEPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_leftFootstepRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GET_LEFTFOOTSTEPROTATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_rightFootstepRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GET_RIGHTFOOTSTEPROTATION_OFFSET))(this);
		}

		::System::Boolean StepBlocked(::UnityEngine::Vector3 fromPosition, ::UnityEngine::Vector3 toPosition, ::UnityEngine::Vector3 rootPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_STEPBLOCKED_OFFSET))(this, fromPosition, toPosition, rootPosition);
		}

		::System::Boolean CanStep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_CANSTEP_OFFSET))(this);
		}

		static ::System::Boolean GetLineSphereCollision(::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd, ::UnityEngine::Vector3 sphereCenter, ::System::Single sphereRadius)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LOCOMOTION_GETLINESPHERECOLLISION_OFFSET))(lineStart, lineEnd, sphereCenter, sphereRadius);
		}
	};
}
