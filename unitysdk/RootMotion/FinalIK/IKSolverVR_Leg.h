#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverVR_BodyPart.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverVR_VirtualBone; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_APPLYOFFSETS_OFFSET UNITYSDK_OFFSET(0x1F135040)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_APPLYPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1F134FD0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_APPLYROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1F134B80)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_FIXTWISTROTATIONS_OFFSET UNITYSDK_OFFSET(0x1F136360)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_BENDNORMALRELTOPELVIS_OFFSET UNITYSDK_OFFSET(0x1F132C60)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_BENDNORMALRELTOTARGET_OFFSET UNITYSDK_OFFSET(0x1F132CA0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_CALF_OFFSET UNITYSDK_OFFSET(0x1F132B10)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_FOOT_OFFSET UNITYSDK_OFFSET(0x1F132B50)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_HASTOES_OFFSET UNITYSDK_OFFSET(0x1F132AB0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_LASTBONE_OFFSET UNITYSDK_OFFSET(0x1F132BD0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F132A50)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1F132A90)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_THIGHRELATIVETOPELVIS_OFFSET UNITYSDK_OFFSET(0x1F132C20)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_THIGH_OFFSET UNITYSDK_OFFSET(0x1F132AD0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_TOES_OFFSET UNITYSDK_OFFSET(0x1F132B90)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_ONREAD_OFFSET UNITYSDK_OFFSET(0x1F132CE0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_PRESOLVE_OFFSET UNITYSDK_OFFSET(0x1F133A90)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_RESETOFFSETS_OFFSET UNITYSDK_OFFSET(0x1F136FC0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_BENDNORMALRELTOPELVIS_OFFSET UNITYSDK_OFFSET(0x1F132C80)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_BENDNORMALRELTOTARGET_OFFSET UNITYSDK_OFFSET(0x1F132CC0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_HASTOES_OFFSET UNITYSDK_OFFSET(0x1F132AC0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F132A70)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1F132AA0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_THIGHRELATIVETOPELVIS_OFFSET UNITYSDK_OFFSET(0x1F132C40)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SOLVE_OFFSET UNITYSDK_OFFSET(0x1F135BD0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_STRETCHING_OFFSET UNITYSDK_OFFSET(0x1F135ED0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG_WRITE_OFFSET UNITYSDK_OFFSET(0x1F136B80)
#define ROOTMOTION_FINALIK_IKSOLVERVR_LEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F137010)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_Leg_TypeDefinitionIndex = 38946;

	class IKSolverVR_Leg : public ::RootMotion::FinalIK::IKSolverVR_BodyPart
	{
	public:
		::UnityEngine::Transform* target; // 0x48
		::System::Single positionWeight; // 0x50
		::System::Single rotationWeight; // 0x54
		::UnityEngine::Transform* bendGoal; // 0x58
		::System::Single bendGoalWeight; // 0x60
		::System::Single swivelOffset; // 0x64
		::System::Single bendToTargetWeight; // 0x68
		::System::Single legLengthMlp; // 0x6C
		::UnityEngine::AnimationCurve* stretchCurve; // 0x70
		::UnityEngine::Vector3 IKPosition; // 0x78
		::UnityEngine::Quaternion IKRotation; // 0x84
		::UnityEngine::Vector3 footPositionOffset; // 0x94
		::UnityEngine::Vector3 heelPositionOffset; // 0xA0
		::UnityEngine::Quaternion footRotationOffset; // 0xAC
		::System::Single currentMag; // 0xBC
		::System::Boolean useAnimatedBendNormal; // 0xC0
		::UnityEngine::Vector3 _position_k__BackingField; // 0xC4
		::UnityEngine::Quaternion _rotation_k__BackingField; // 0xD0
		::System::Boolean _hasToes_k__BackingField; // 0xE0
		::UnityEngine::Vector3 _thighRelativeToPelvis_k__BackingField; // 0xE4
		::UnityEngine::Vector3 footPosition; // 0xF0
		::UnityEngine::Quaternion footRotation; // 0xFC
		::UnityEngine::Vector3 bendNormal; // 0x10C
		::UnityEngine::Quaternion calfRelToThigh; // 0x118
		::UnityEngine::Quaternion thighRelToFoot; // 0x128
		::UnityEngine::Vector3 _bendNormalRelToPelvis_k__BackingField; // 0x138
		::UnityEngine::Vector3 _bendNormalRelToTarget_k__BackingField; // 0x144

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Boolean get_hasToes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_HASTOES_OFFSET))(this);
		}

		::System::Void set_hasToes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_HASTOES_OFFSET))(this, value);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_thigh()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_THIGH_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_calf()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_CALF_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_foot()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_FOOT_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_toes()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_TOES_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_lastBone()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_LASTBONE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_thighRelativeToPelvis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_THIGHRELATIVETOPELVIS_OFFSET))(this);
		}

		::System::Void set_thighRelativeToPelvis(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_THIGHRELATIVETOPELVIS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_bendNormalRelToPelvis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_BENDNORMALRELTOPELVIS_OFFSET))(this);
		}

		::System::Void set_bendNormalRelToPelvis(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_BENDNORMALRELTOPELVIS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_bendNormalRelToTarget()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_GET_BENDNORMALRELTOTARGET_OFFSET))(this);
		}

		::System::Void set_bendNormalRelToTarget(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SET_BENDNORMALRELTOTARGET_OFFSET))(this, value);
		}

		::System::Void OnRead(::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Quaternion>* rotations, ::System::Boolean hasChest, ::System::Boolean hasNeck, ::System::Boolean hasShoulders, ::System::Boolean hasToes, ::System::Boolean hasLegs, ::System::Int32 rootIndex, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_ONREAD_OFFSET))(this, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
		}

		::System::Void PreSolve(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_PRESOLVE_OFFSET))(this, scale);
		}

		::System::Void ApplyOffsets(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_APPLYOFFSETS_OFFSET))(this, scale);
		}

		::System::Void ApplyPositionOffset(::UnityEngine::Vector3 offset, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_APPLYPOSITIONOFFSET_OFFSET))(this, offset, weight);
		}

		::System::Void ApplyRotationOffset(::UnityEngine::Quaternion offset, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_APPLYROTATIONOFFSET_OFFSET))(this, offset, weight);
		}

		::System::Void Solve(::System::Boolean stretch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_SOLVE_OFFSET))(this, stretch);
		}

		::System::Void FixTwistRotations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_FIXTWISTROTATIONS_OFFSET))(this);
		}

		::System::Void Stretching()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_STRETCHING_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::UnityEngine::Vector3>*& solvedPositions, ::Il2CppArray<::UnityEngine::Quaternion>*& solvedRotations)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Quaternion>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_WRITE_OFFSET))(this, solvedPositions, solvedRotations);
		}

		::System::Void ResetOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_LEG_RESETOFFSETS_OFFSET))(this);
		}
	};
}
