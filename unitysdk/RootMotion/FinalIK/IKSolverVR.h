#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverVR_PositionOffset.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverVR_RotationOffset.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverVR_Arm; }
namespace RootMotion::FinalIK { class IKSolverVR_Leg; }
namespace RootMotion::FinalIK { class IKSolverVR_Locomotion; }
namespace RootMotion::FinalIK { class IKSolverVR_Spine; }
namespace RootMotion::FinalIK { class IKSolverVR_VirtualBone; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace RootMotion::FinalIK { class VRIK_References; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERVR_ADDPLATFORMMOTION_OFFSET UNITYSDK_OFFSET(0x1DA79CC0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ADDPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1DA74870)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ADDROTATIONOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1DA79A70)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ADDROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1DA79A00)
#define ROOTMOTION_FINALIK_IKSOLVERVR_DEFAULTANIMATIONCURVES_OFFSET UNITYSDK_OFFSET(0x1DA79470)
#define ROOTMOTION_FINALIK_IKSOLVERVR_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1DA7B510)
#define ROOTMOTION_FINALIK_IKSOLVERVR_GETNORMAL_OFFSET UNITYSDK_OFFSET(0x1DA7BAF0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_GETPELVISOFFSET_OFFSET UNITYSDK_OFFSET(0x1DA83EF0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_GETPOINTS_OFFSET UNITYSDK_OFFSET(0x1DA7B850)
#define ROOTMOTION_FINALIK_IKSOLVERVR_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1DA7B8B0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1DA7FD90)
#define ROOTMOTION_FINALIK_IKSOLVERVR_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1DA7FDE0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_GETSINEKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1DA79950)
#define ROOTMOTION_FINALIK_IKSOLVERVR_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1DA77120)
#define ROOTMOTION_FINALIK_IKSOLVERVR_GET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0x1DA848F0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_GUESSHANDORIENTATIONS_OFFSET UNITYSDK_OFFSET(0x1DA79650)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ISVALID_OFFSET UNITYSDK_OFFSET(0x1DA7B910)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1DA7BE30)
#define ROOTMOTION_FINALIK_IKSOLVERVR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DA7BEC0)
#define ROOTMOTION_FINALIK_IKSOLVERVR_READ_OFFSET UNITYSDK_OFFSET(0x1DA7A600)
#define ROOTMOTION_FINALIK_IKSOLVERVR_RESET_OFFSET UNITYSDK_OFFSET(0x1DA7A070)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SETTOREFERENCES_OFFSET UNITYSDK_OFFSET(0x1DA77140)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1DA77130)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0x1DA84900)
#define ROOTMOTION_FINALIK_IKSOLVERVR_SOLVE_OFFSET UNITYSDK_OFFSET(0x1DA7CA60)
#define ROOTMOTION_FINALIK_IKSOLVERVR_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1DA7B210)
#define ROOTMOTION_FINALIK_IKSOLVERVR_UPDATESOLVERTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1DA7A310)
#define ROOTMOTION_FINALIK_IKSOLVERVR_WRITETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1DA7F410)
#define ROOTMOTION_FINALIK_IKSOLVERVR_WRITE_OFFSET UNITYSDK_OFFSET(0x1DA7F240)
#define ROOTMOTION_FINALIK_IKSOLVERVR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA84910)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_TypeDefinitionIndex = 38331;

	class IKSolverVR : public ::RootMotion::FinalIK::IKSolver
	{
	public:
		::UnityEngine::Animator* _animator_k__BackingField; // 0x60
		::Il2CppArray<::UnityEngine::Transform*>* solverTransforms; // 0x68
		::System::Boolean hasChest; // 0x70
		::System::Boolean hasNeck; // 0x71
		::System::Boolean hasShoulders; // 0x72
		::System::Boolean hasToes; // 0x73
		::System::Boolean hasLegs; // 0x74
		::System::Boolean hasArms; // 0x75
		::Il2CppArray<::UnityEngine::Vector3>* readPositions; // 0x78
		::Il2CppArray<::UnityEngine::Quaternion>* readRotations; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* solvedPositions; // 0x88
		::Il2CppArray<::UnityEngine::Quaternion>* solvedRotations; // 0x90
		::Il2CppArray<::UnityEngine::Quaternion>* defaultLocalRotations; // 0x98
		::Il2CppArray<::UnityEngine::Vector3>* defaultLocalPositions; // 0xA0
		::UnityEngine::Vector3 rootV; // 0xA8
		::UnityEngine::Vector3 rootVelocity; // 0xB4
		::UnityEngine::Vector3 bodyOffset; // 0xC0
		::System::Int32 supportLegIndex; // 0xCC
		::System::Int32 lastLOD; // 0xD0
		::System::Single lastLocomotionWeight; // 0xD4
		::System::Int32 LOD; // 0xD8
		::System::Single scale; // 0xDC
		::System::Boolean plantFeet; // 0xE0
		::RootMotion::FinalIK::IKSolverVR_VirtualBone* _rootBone_k__BackingField; // 0xE8
		::RootMotion::FinalIK::IKSolverVR_Spine* spine; // 0xF0
		::RootMotion::FinalIK::IKSolverVR_Arm* leftArm; // 0xF8
		::RootMotion::FinalIK::IKSolverVR_Arm* rightArm; // 0x100
		::RootMotion::FinalIK::IKSolverVR_Leg* leftLeg; // 0x108
		::RootMotion::FinalIK::IKSolverVR_Leg* rightLeg; // 0x110
		::RootMotion::FinalIK::IKSolverVR_Locomotion* locomotion; // 0x118
		::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Leg*>* legs; // 0x120
		::Il2CppArray<::RootMotion::FinalIK::IKSolverVR_Arm*>* arms; // 0x128
		::UnityEngine::Vector3 headPosition; // 0x130
		::UnityEngine::Vector3 headDeltaPosition; // 0x13C
		::UnityEngine::Vector3 raycastOriginPelvis; // 0x148
		::UnityEngine::Vector3 lastOffset; // 0x154
		::UnityEngine::Vector3 debugPos1; // 0x160
		::UnityEngine::Vector3 debugPos2; // 0x16C
		::UnityEngine::Vector3 debugPos3; // 0x178
		::UnityEngine::Vector3 debugPos4; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Animator* get_animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Void set_animator(::UnityEngine::Animator* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SET_ANIMATOR_OFFSET))(this, value);
		}

		::System::Void SetToReferences(::RootMotion::FinalIK::VRIK_References* references)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VRIK_References*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SETTOREFERENCES_OFFSET))(this, references);
		}

		::System::Void GuessHandOrientations(::RootMotion::FinalIK::VRIK_References* references, ::System::Boolean onlyIfZero)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::VRIK_References*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_GUESSHANDORIENTATIONS_OFFSET))(this, references, onlyIfZero);
		}

		::System::Void DefaultAnimationCurves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_DEFAULTANIMATIONCURVES_OFFSET))(this);
		}

		::System::Void AddPositionOffset(::RootMotion::FinalIK::IKSolverVR_PositionOffset positionOffset, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverVR_PositionOffset, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ADDPOSITIONOFFSET_OFFSET))(this, positionOffset, value);
		}

		::System::Void AddRotationOffset(::RootMotion::FinalIK::IKSolverVR_RotationOffset rotationOffset, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverVR_RotationOffset, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ADDROTATIONOFFSET_OFFSET))(this, rotationOffset, value);
		}

		::System::Void AddRotationOffset_1(::RootMotion::FinalIK::IKSolverVR_RotationOffset rotationOffset, ::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverVR_RotationOffset, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ADDROTATIONOFFSET_1_OFFSET))(this, rotationOffset, value);
		}

		::System::Void AddPlatformMotion(::UnityEngine::Vector3 deltaPosition, ::UnityEngine::Quaternion deltaRotation, ::UnityEngine::Vector3 platformPivot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ADDPLATFORMMOTION_OFFSET))(this, deltaPosition, deltaRotation, platformPivot);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_RESET_OFFSET))(this);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_FIXTRANSFORMS_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>* GetPoints()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_GETPOINTS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_Point* GetPoint(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_GETPOINT_OFFSET))(this, transform);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ISVALID_OFFSET))(this, message);
		}

		::UnityEngine::Vector3 GetNormal(::Il2CppArray<::UnityEngine::Transform*>* transforms)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_GETNORMAL_OFFSET))(this, transforms);
		}

		static ::Il2CppArray<::UnityEngine::Keyframe>* GetSineKeyframes(::System::Single mag)
		{
			return ((::Il2CppArray<::UnityEngine::Keyframe>*(*)(::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_GETSINEKEYFRAMES_OFFSET))(mag);
		}

		::System::Void UpdateSolverTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_UPDATESOLVERTRANSFORMS_OFFSET))(this);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ONINITIATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_ONUPDATE_OFFSET))(this);
		}

		::System::Void WriteTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_WRITETRANSFORMS_OFFSET))(this);
		}

		::System::Void Read(::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Quaternion>* rotations, ::System::Boolean hasChest, ::System::Boolean hasNeck, ::System::Boolean hasShoulders, ::System::Boolean hasToes, ::System::Boolean hasLegs, ::System::Boolean hasArms)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Quaternion>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_READ_OFFSET))(this, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, hasArms);
		}

		::System::Void Solve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SOLVE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_GETPOSITION_OFFSET))(this, index);
		}

		::UnityEngine::Quaternion GetRotation(::System::Int32 index)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_GETROTATION_OFFSET))(this, index);
		}

		::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_rootBone()
		{
			return ((::RootMotion::FinalIK::IKSolverVR_VirtualBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_GET_ROOTBONE_OFFSET))(this);
		}

		::System::Void set_rootBone(::RootMotion::FinalIK::IKSolverVR_VirtualBone* value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverVR_VirtualBone*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_SET_ROOTBONE_OFFSET))(this, value);
		}

		::System::Void Write()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_WRITE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPelvisOffset(::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERVR_GETPELVISOFFSET_OFFSET))(this, deltaTime);
		}
	};
}
