#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverVR_Arm_ShoulderRotationMode.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverVR_BodyPart.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverVR_VirtualBone; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_APPLYOFFSETS_OFFSET UNITYSDK_OFFSET(0x1F2EF070)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_DAMPERVALUE_OFFSET UNITYSDK_OFFSET(0x1F2F2730)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GETBENDNORMAL_OFFSET UNITYSDK_OFFSET(0x1F2F27F0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_FOREARM_OFFSET UNITYSDK_OFFSET(0x1F2ED720)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_HAND_OFFSET UNITYSDK_OFFSET(0x1F2ED770)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F2ED640)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1F2ED680)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_SHOULDER_OFFSET UNITYSDK_OFFSET(0x1F2ED6A0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_UPPERARM_OFFSET UNITYSDK_OFFSET(0x1F2ED6E0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_ONREAD_OFFSET UNITYSDK_OFFSET(0x1F2ED7C0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_PRESOLVE_OFFSET UNITYSDK_OFFSET(0x1F2EEAE0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_RESETOFFSETS_OFFSET UNITYSDK_OFFSET(0x1F2F36D0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F2ED660)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1F2ED690)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_SOLVE_OFFSET UNITYSDK_OFFSET(0x1F2EF4E0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_STRETCHING_OFFSET UNITYSDK_OFFSET(0x1F2EF0B0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x1F2F3B80)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM_WRITE_OFFSET UNITYSDK_OFFSET(0x1F2F36F0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ARM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2F3CD0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_Arm_TypeDefinitionIndex = 38947;

	class IKSolverVR_Arm : public ::RootMotion::FinalIK::IKSolverVR_BodyPart
	{
	public:
		::UnityEngine::Transform* target; // 0x48
		::System::Single positionWeight; // 0x50
		::System::Single rotationWeight; // 0x54
		::System::Single shoulderRotationWeight; // 0x58
		::RootMotion::FinalIK::IKSolverVR_Arm_ShoulderRotationMode shoulderRotationMode; // 0x5C
		::System::Single shoulderTwistWeight; // 0x60
		::System::Single shoulderYawOffset; // 0x64
		::System::Single shoulderPitchOffset; // 0x68
		::UnityEngine::Transform* bendGoal; // 0x70
		::System::Single bendGoalWeight; // 0x78
		::System::Single swivelOffset; // 0x7C
		::UnityEngine::Vector3 wristToPalmAxis; // 0x80
		::UnityEngine::Vector3 palmToThumbAxis; // 0x8C
		::System::Single armLengthMlp; // 0x98
		::UnityEngine::AnimationCurve* stretchCurve; // 0xA0
		::UnityEngine::Vector3 IKPosition; // 0xA8
		::UnityEngine::Quaternion IKRotation; // 0xB4
		::UnityEngine::Vector3 bendDirection; // 0xC4
		::UnityEngine::Vector3 handPositionOffset; // 0xD0
		::UnityEngine::Vector3 _position_k__BackingField; // 0xDC
		::UnityEngine::Quaternion _rotation_k__BackingField; // 0xE8
		::System::Boolean hasShoulder; // 0xF8
		::UnityEngine::Vector3 chestForwardAxis; // 0xFC
		::UnityEngine::Vector3 chestUpAxis; // 0x108
		::UnityEngine::Quaternion chestRotation; // 0x114
		::UnityEngine::Vector3 chestForward; // 0x124
		::UnityEngine::Vector3 chestUp; // 0x130
		::UnityEngine::Quaternion forearmRelToUpperArm; // 0x13C
		::UnityEngine::Vector3 upperArmBendAxis; // 0x14C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_SET_ROTATION_OFFSET))(this, value);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_shoulder()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_SHOULDER_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_upperArm()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_UPPERARM_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_forearm()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_FOREARM_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_hand()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GET_HAND_OFFSET))(this);
		}

		::System::Void OnRead(::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Quaternion>* rotations, ::System::Boolean hasChest, ::System::Boolean hasNeck, ::System::Boolean hasShoulders, ::System::Boolean hasToes, ::System::Boolean hasLegs, ::System::Int32 rootIndex, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_ONREAD_OFFSET))(this, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
		}

		::System::Void PreSolve(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_PRESOLVE_OFFSET))(this, scale);
		}

		::System::Void ApplyOffsets(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_APPLYOFFSETS_OFFSET))(this, scale);
		}

		::System::Void Stretching()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_STRETCHING_OFFSET))(this);
		}

		::System::Void Solve(::System::Boolean isLeft)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_SOLVE_OFFSET))(this, isLeft);
		}

		::System::Void ResetOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_RESETOFFSETS_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::UnityEngine::Vector3>*& solvedPositions, ::Il2CppArray<::UnityEngine::Quaternion>*& solvedRotations)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Quaternion>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_WRITE_OFFSET))(this, solvedPositions, solvedRotations);
		}

		::System::Single DamperValue(::System::Single value, ::System::Single min, ::System::Single max, ::System::Single weight)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_DAMPERVALUE_OFFSET))(this, value, min, max, weight);
		}

		::UnityEngine::Vector3 GetBendNormal(::UnityEngine::Vector3 dir)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_GETBENDNORMAL_OFFSET))(this, dir);
		}

		::System::Void Visualize(::RootMotion::FinalIK::IKSolverVR_VirtualBone* bone1, ::RootMotion::FinalIK::IKSolverVR_VirtualBone* bone2, ::RootMotion::FinalIK::IKSolverVR_VirtualBone* bone3, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverVR_VirtualBone*, ::RootMotion::FinalIK::IKSolverVR_VirtualBone*, ::RootMotion::FinalIK::IKSolverVR_VirtualBone*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ARM_VISUALIZE_OFFSET))(this, bone1, bone2, bone3, color);
		}
	};
}
