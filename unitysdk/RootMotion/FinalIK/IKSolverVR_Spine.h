#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverVR_BodyPart.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverVR_Arm; }
namespace RootMotion::FinalIK { class IKSolverVR_Leg; }
namespace RootMotion::FinalIK { class IKSolverVR_VirtualBone; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_ADJUSTCHESTBYHANDS_OFFSET UNITYSDK_OFFSET(0x1F3D1930)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_APPLYOFFSETS_OFFSET UNITYSDK_OFFSET(0x1F3D0900)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_BEND_1_OFFSET UNITYSDK_OFFSET(0x1F3D3860)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_BEND_OFFSET UNITYSDK_OFFSET(0x1F3D3DC0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_CALCULATECHESTTARGETROTATION_OFFSET UNITYSDK_OFFSET(0x1F3D13B0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_FABRIKPASS_OFFSET UNITYSDK_OFFSET(0x1F3D3610)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_ANCHORRELATIVETOHEAD_OFFSET UNITYSDK_OFFSET(0x1F3CE6C0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_ANCHORROTATION_OFFSET UNITYSDK_OFFSET(0x1F3CE6A0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_CHEST_OFFSET UNITYSDK_OFFSET(0x1F3CE5B0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_FIRSTSPINEBONE_OFFSET UNITYSDK_OFFSET(0x1F3CE570)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_HEAD_OFFSET UNITYSDK_OFFSET(0x1F3CE620)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_NECK_OFFSET UNITYSDK_OFFSET(0x1F3CE660)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_PELVIS_OFFSET UNITYSDK_OFFSET(0x1F3CE530)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_INVERSETRANSLATETOHEAD_OFFSET UNITYSDK_OFFSET(0x1F3D3C70)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_LIMITPELVISPOSITION_OFFSET UNITYSDK_OFFSET(0x1F3D49E0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_ONREAD_OFFSET UNITYSDK_OFFSET(0x1F3CE6E0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_PRESOLVE_OFFSET UNITYSDK_OFFSET(0x1F3CFB40)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_RESETOFFSETS_OFFSET UNITYSDK_OFFSET(0x1F3D4960)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_SET_ANCHORRELATIVETOHEAD_OFFSET UNITYSDK_OFFSET(0x1F3CE6D0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_SET_ANCHORROTATION_OFFSET UNITYSDK_OFFSET(0x1F3CE6B0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_SOLVEPELVIS_OFFSET UNITYSDK_OFFSET(0x1F3D4140)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_SOLVE_OFFSET UNITYSDK_OFFSET(0x1F3D20C0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_TRANSLATEPELVIS_OFFSET UNITYSDK_OFFSET(0x1F3D2DC0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_WRITE_OFFSET UNITYSDK_OFFSET(0x1F3D4630)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SPINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D4D70)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_Spine_TypeDefinitionIndex = 38949;

	class IKSolverVR_Spine : public ::RootMotion::FinalIK::IKSolverVR_BodyPart
	{
	public:
		::UnityEngine::Transform* headTarget; // 0x48
		::System::Single positionWeight; // 0x50
		::System::Single rotationWeight; // 0x54
		::System::Single headClampWeight; // 0x58
		::System::Single minHeadHeight; // 0x5C
		::System::Single useAnimatedHeadHeightWeight; // 0x60
		::System::Single useAnimatedHeadHeightRange; // 0x64
		::System::Single animatedHeadHeightBlend; // 0x68
		::UnityEngine::Transform* pelvisTarget; // 0x70
		::System::Single pelvisPositionWeight; // 0x78
		::System::Single pelvisRotationWeight; // 0x7C
		::System::Single maintainPelvisPosition; // 0x80
		::UnityEngine::Transform* chestGoal; // 0x88
		::System::Single chestGoalWeight; // 0x90
		::System::Single chestClampWeight; // 0x94
		::System::Single rotateChestByHands; // 0x98
		::System::Single bodyPosStiffness; // 0x9C
		::System::Single bodyRotStiffness; // 0xA0
		::System::Single neckStiffness; // 0xA4
		::System::Single moveBodyBackWhenCrouching; // 0xA8
		::System::Single maxRootAngle; // 0xAC
		::System::Single rootHeadingOffset; // 0xB0
		::UnityEngine::Vector3 IKPositionHead; // 0xB4
		::UnityEngine::Quaternion IKRotationHead; // 0xC0
		::UnityEngine::Vector3 IKPositionPelvis; // 0xD0
		::UnityEngine::Quaternion IKRotationPelvis; // 0xDC
		::UnityEngine::Vector3 goalPositionChest; // 0xEC
		::UnityEngine::Vector3 pelvisPositionOffset; // 0xF8
		::UnityEngine::Vector3 chestPositionOffset; // 0x104
		::UnityEngine::Vector3 headPositionOffset; // 0x110
		::UnityEngine::Quaternion pelvisRotationOffset; // 0x11C
		::UnityEngine::Quaternion chestRotationOffset; // 0x12C
		::UnityEngine::Quaternion headRotationOffset; // 0x13C
		::UnityEngine::Vector3 faceDirection; // 0x14C
		::UnityEngine::Vector3 headPosition; // 0x158
		::UnityEngine::Quaternion _anchorRotation_k__BackingField; // 0x164
		::UnityEngine::Quaternion _anchorRelativeToHead_k__BackingField; // 0x174
		::UnityEngine::Quaternion headRotation; // 0x184
		::UnityEngine::Quaternion pelvisRotation; // 0x194
		::UnityEngine::Quaternion anchorRelativeToPelvis; // 0x1A4
		::UnityEngine::Quaternion pelvisRelativeRotation; // 0x1B4
		::UnityEngine::Quaternion chestRelativeRotation; // 0x1C4
		::UnityEngine::Vector3 headDeltaPosition; // 0x1D4
		::UnityEngine::Quaternion pelvisDeltaRotation; // 0x1E0
		::UnityEngine::Quaternion chestTargetRotation; // 0x1F0
		::System::Int32 pelvisIndex; // 0x200
		::System::Int32 spineIndex; // 0x204
		::System::Int32 chestIndex; // 0x208
		::System::Int32 neckIndex; // 0x20C
		::System::Int32 headIndex; // 0x210
		::System::Single length; // 0x214
		::System::Boolean hasChest; // 0x218
		::System::Boolean hasNeck; // 0x219
		::System::Boolean hasLegs; // 0x21A
		::System::Single headHeight; // 0x21C
		::System::Single sizeMlp; // 0x220
		::UnityEngine::Vector3 chestForward; // 0x224

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE__CTOR_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_pelvis()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_PELVIS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_firstSpineBone()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_FIRSTSPINEBONE_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_chest()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_CHEST_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_head()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_HEAD_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_neck()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_NECK_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_anchorRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_ANCHORROTATION_OFFSET))(this);
		}

		::System::Void set_anchorRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_SET_ANCHORROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_anchorRelativeToHead()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_GET_ANCHORRELATIVETOHEAD_OFFSET))(this);
		}

		::System::Void set_anchorRelativeToHead(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_SET_ANCHORRELATIVETOHEAD_OFFSET))(this, value);
		}

		::System::Void OnRead(::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Quaternion>* rotations, ::System::Boolean hasChest, ::System::Boolean hasNeck, ::System::Boolean hasShoulders, ::System::Boolean hasToes, ::System::Boolean hasLegs, ::System::Int32 rootIndex, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_ONREAD_OFFSET))(this, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
		}

		::System::Void PreSolve(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_PRESOLVE_OFFSET))(this, scale);
		}

		::System::Void ApplyOffsets(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_APPLYOFFSETS_OFFSET))(this, scale);
		}

		::System::Void CalculateChestTargetRotation(::RootMotion::FinalIK::IKSolverVR_VirtualBone* rootBone, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Arm*>* arms)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverVR_VirtualBone*, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Arm*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_CALCULATECHESTTARGETROTATION_OFFSET))(this, rootBone, arms);
		}

		::System::Void Solve(::UnityEngine::Animator* animator, ::RootMotion::FinalIK::IKSolverVR_VirtualBone* rootBone, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Leg*>* legs, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Arm*>* arms, ::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::RootMotion::FinalIK::IKSolverVR_VirtualBone*, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Leg*>*, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Arm*>*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_SOLVE_OFFSET))(this, animator, rootBone, legs, arms, scale);
		}

		::System::Void FABRIKPass(::UnityEngine::Vector3 animatedPelvisPos, ::UnityEngine::Vector3 rootUp, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_FABRIKPASS_OFFSET))(this, animatedPelvisPos, rootUp, weight);
		}

		::System::Void SolvePelvis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_SOLVEPELVIS_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::UnityEngine::Vector3>*& solvedPositions, ::Il2CppArray<::UnityEngine::Quaternion>*& solvedRotations)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Quaternion>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_WRITE_OFFSET))(this, solvedPositions, solvedRotations);
		}

		::System::Void ResetOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_RESETOFFSETS_OFFSET))(this);
		}

		::System::Void AdjustChestByHands(::UnityEngine::Quaternion& chestTargetRotation, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Arm*>* arms)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Arm*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_ADJUSTCHESTBYHANDS_OFFSET))(this, chestTargetRotation, arms);
		}

		::System::Void InverseTranslateToHead(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Leg*>* legs, ::System::Boolean limited, ::System::Boolean useCurrentLegMag, ::UnityEngine::Vector3 offset, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Leg*>*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_INVERSETRANSLATETOHEAD_OFFSET))(this, legs, limited, useCurrentLegMag, offset, w);
		}

		::System::Void TranslatePelvis(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Leg*>* legs, ::UnityEngine::Vector3 deltaPosition, ::UnityEngine::Quaternion deltaRotation, ::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Leg*>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_TRANSLATEPELVIS_OFFSET))(this, legs, deltaPosition, deltaRotation, scale);
		}

		::UnityEngine::Vector3 LimitPelvisPosition(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Leg*>* legs, ::UnityEngine::Vector3 pelvisPosition, ::System::Boolean useCurrentLegMag, ::System::Int32 it)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Leg*>*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_LIMITPELVISPOSITION_OFFSET))(this, legs, pelvisPosition, useCurrentLegMag, it);
		}

		::System::Void Bend(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, ::System::Int32 firstIndex, ::System::Int32 lastIndex, ::UnityEngine::Quaternion targetRotation, ::System::Single clampWeight, ::System::Boolean uniformWeight, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*, ::System::Int32, ::System::Int32, ::UnityEngine::Quaternion, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_BEND_OFFSET))(this, bones, firstIndex, lastIndex, targetRotation, clampWeight, uniformWeight, w);
		}

		::System::Void Bend_1(::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, ::System::Int32 firstIndex, ::System::Int32 lastIndex, ::UnityEngine::Quaternion targetRotation, ::UnityEngine::Quaternion rotationOffset, ::System::Single clampWeight, ::System::Boolean uniformWeight, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_VirtualBone*>*, ::System::Int32, ::System::Int32, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SPINE_BEND_1_OFFSET))(this, bones, firstIndex, lastIndex, targetRotation, rotationOffset, clampWeight, uniformWeight, w);
		}
	};
}
