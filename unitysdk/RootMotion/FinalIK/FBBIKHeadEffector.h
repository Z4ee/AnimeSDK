#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class FBBIKHeadEffector_BendBone; }
namespace RootMotion::FinalIK { class FullBodyBipedIK; }
namespace RootMotion::FinalIK { class IKEffector; }
namespace RootMotion::FinalIK { class IKSolver_UpdateDelegate; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_CCDPASS_OFFSET UNITYSDK_OFFSET(0x1F2914C0)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_CHESTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1F290870)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ITERATE_OFFSET UNITYSDK_OFFSET(0x1F291AC0)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_LERPSOLVERPOSITION_OFFSET UNITYSDK_OFFSET(0x1F292A30)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F2933B0)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ONFIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F28F5A0)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ONPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x1F292B30)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ONPREREAD_OFFSET UNITYSDK_OFFSET(0x1F28FE10)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ONSTOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1F28EB70)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_POSTSTRETCHING_OFFSET UNITYSDK_OFFSET(0x1F292EE0)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_SOLVE_OFFSET UNITYSDK_OFFSET(0x1F292970)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_SPINEBEND_OFFSET UNITYSDK_OFFSET(0x1F290E70)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_START_OFFSET UNITYSDK_OFFSET(0x1F28E6B0)
#define ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F293800)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FBBIKHeadEffector_TypeDefinitionIndex = 38854;

	class FBBIKHeadEffector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RootMotion::FinalIK::FullBodyBipedIK* ik; // 0x18
		::System::Single positionWeight; // 0x20
		::System::Single bodyWeight; // 0x24
		::System::Single thighWeight; // 0x28
		::System::Boolean handsPullBody; // 0x2C
		::System::Single rotationWeight; // 0x30
		::System::Single bodyClampWeight; // 0x34
		::System::Single headClampWeight; // 0x38
		::System::Single bendWeight; // 0x3C
		::Il2CppArray<::RootMotion::FinalIK::FBBIKHeadEffector_BendBone*>* bendBones; // 0x40
		::System::Single CCDWeight; // 0x48
		::System::Single roll; // 0x4C
		::System::Single damper; // 0x50
		::Il2CppArray<::UnityEngine::Transform*>* CCDBones; // 0x58
		::System::Single postStretchWeight; // 0x60
		::System::Single maxStretch; // 0x64
		::System::Single stretchDamper; // 0x68
		::System::Boolean fixHead; // 0x6C
		::Il2CppArray<::UnityEngine::Transform*>* stretchBones; // 0x70
		::UnityEngine::Vector3 chestDirection; // 0x78
		::System::Single chestDirectionWeight; // 0x84
		::Il2CppArray<::UnityEngine::Transform*>* chestBones; // 0x88
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostHeadEffectorFK; // 0x90
		::UnityEngine::Vector3 offset; // 0x98
		::UnityEngine::Vector3 headToBody; // 0xA4
		::UnityEngine::Vector3 shoulderCenterToHead; // 0xB0
		::UnityEngine::Vector3 headToLeftThigh; // 0xBC
		::UnityEngine::Vector3 headToRightThigh; // 0xC8
		::UnityEngine::Vector3 leftShoulderPos; // 0xD4
		::UnityEngine::Vector3 rightShoulderPos; // 0xE0
		::System::Single shoulderDist; // 0xEC
		::System::Single leftShoulderDist; // 0xF0
		::System::Single rightShoulderDist; // 0xF4
		::UnityEngine::Quaternion chestRotation; // 0xF8
		::UnityEngine::Quaternion headRotationRelativeToRoot; // 0x108
		::Il2CppArray<::UnityEngine::Quaternion>* ccdDefaultLocalRotations; // 0x118
		::UnityEngine::Vector3 headLocalPosition; // 0x120
		::UnityEngine::Quaternion headLocalRotation; // 0x12C
		::Il2CppArray<::UnityEngine::Vector3>* stretchLocalPositions; // 0x140
		::Il2CppArray<::UnityEngine::Quaternion>* stretchLocalRotations; // 0x148
		::Il2CppArray<::UnityEngine::Vector3>* chestLocalPositions; // 0x150
		::Il2CppArray<::UnityEngine::Quaternion>* chestLocalRotations; // 0x158
		::System::Int32 bendBonesCount; // 0x160
		::System::Int32 ccdBonesCount; // 0x164
		::System::Int32 stretchBonesCount; // 0x168
		::System::Int32 chestBonesCount; // 0x16C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_START_OFFSET))(this);
		}

		::System::Void OnStoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ONSTOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void OnFixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ONFIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void OnPreRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ONPREREAD_OFFSET))(this);
		}

		::System::Void SpineBend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_SPINEBEND_OFFSET))(this);
		}

		::System::Void CCDPass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_CCDPASS_OFFSET))(this);
		}

		::System::Void Iterate(::System::Int32 iteration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ITERATE_OFFSET))(this, iteration);
		}

		::System::Void OnPostUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ONPOSTUPDATE_OFFSET))(this);
		}

		::System::Void ChestDirection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_CHESTDIRECTION_OFFSET))(this);
		}

		::System::Void PostStretching()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_POSTSTRETCHING_OFFSET))(this);
		}

		::System::Void LerpSolverPosition(::RootMotion::FinalIK::IKEffector* effector, ::UnityEngine::Vector3 position, ::System::Single weight, ::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKEffector*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_LERPSOLVERPOSITION_OFFSET))(this, effector, position, weight, offset);
		}

		::System::Void Solve(::UnityEngine::Vector3& pos1, ::UnityEngine::Vector3& pos2, ::System::Single nominalDistance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_SOLVE_OFFSET))(this, pos1, pos2, nominalDistance);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBBIKHEADEFFECTOR_ONDESTROY_OFFSET))(this);
		}
	};
}
