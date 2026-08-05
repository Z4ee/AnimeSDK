#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverFullBody; }
namespace RootMotion::FinalIK { class IKSolver_Node; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKEFFECTOR_GETNODE_OFFSET UNITYSDK_OFFSET(0x1F426810)
#define ROOTMOTION_FINALIK_IKEFFECTOR_GETPLANEROTATION_OFFSET UNITYSDK_OFFSET(0x1F4283D0)
#define ROOTMOTION_FINALIK_IKEFFECTOR_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1F428A20)
#define ROOTMOTION_FINALIK_IKEFFECTOR_GET_ISENDEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1F426890)
#define ROOTMOTION_FINALIK_IKEFFECTOR_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F4272E0)
#define ROOTMOTION_FINALIK_IKEFFECTOR_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F426B90)
#define ROOTMOTION_FINALIK_IKEFFECTOR_ONPOSTWRITE_OFFSET UNITYSDK_OFFSET(0x1F4283B0)
#define ROOTMOTION_FINALIK_IKEFFECTOR_ONPRESOLVE_OFFSET UNITYSDK_OFFSET(0x1F427CB0)
#define ROOTMOTION_FINALIK_IKEFFECTOR_PINTOBONE_OFFSET UNITYSDK_OFFSET(0x1F4268B0)
#define ROOTMOTION_FINALIK_IKEFFECTOR_RESETOFFSET_OFFSET UNITYSDK_OFFSET(0x1F427A00)
#define ROOTMOTION_FINALIK_IKEFFECTOR_SETTOTARGET_OFFSET UNITYSDK_OFFSET(0x1F427B00)
#define ROOTMOTION_FINALIK_IKEFFECTOR_SET_ISENDEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1F4268A0)
#define ROOTMOTION_FINALIK_IKEFFECTOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F428690)
#define ROOTMOTION_FINALIK_IKEFFECTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F426A90)
#define ROOTMOTION_FINALIK_IKEFFECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4269A0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKEffector_TypeDefinitionIndex = 38921;

	class IKEffector : public ::System::Object
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::UnityEngine::Transform* target; // 0x18
		::System::Single positionWeight; // 0x20
		::System::Single rotationWeight; // 0x24
		::UnityEngine::Vector3 position; // 0x28
		::UnityEngine::Quaternion rotation; // 0x34
		::UnityEngine::Vector3 positionOffset; // 0x44
		::System::Boolean _isEndEffector_k__BackingField; // 0x50
		::System::Boolean effectChildNodes; // 0x51
		::System::Single maintainRelativePositionWeight; // 0x54
		::Il2CppArray<::UnityEngine::Transform*>* childBones; // 0x58
		::UnityEngine::Transform* planeBone1; // 0x60
		::UnityEngine::Transform* planeBone2; // 0x68
		::UnityEngine::Transform* planeBone3; // 0x70
		::UnityEngine::Quaternion planeRotationOffset; // 0x78
		::System::Single posW; // 0x88
		::System::Single rotW; // 0x8C
		::Il2CppArray<::UnityEngine::Vector3>* localPositions; // 0x90
		::System::Boolean usePlaneNodes; // 0x98
		::UnityEngine::Quaternion animatedPlaneRotation; // 0x9C
		::UnityEngine::Vector3 animatedPosition; // 0xAC
		::System::Boolean firstUpdate; // 0xB8
		::System::Int32 chainIndex; // 0xBC
		::System::Int32 nodeIndex; // 0xC0
		::System::Int32 plane1ChainIndex; // 0xC4
		::System::Int32 plane1NodeIndex; // 0xC8
		::System::Int32 plane2ChainIndex; // 0xCC
		::System::Int32 plane2NodeIndex; // 0xD0
		::System::Int32 plane3ChainIndex; // 0xD4
		::System::Int32 plane3NodeIndex; // 0xD8
		::Il2CppArray<::System::Int32>* childChainIndexes; // 0xE0
		::Il2CppArray<::System::Int32>* childNodeIndexes; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* bone, ::Il2CppArray<::UnityEngine::Transform*>* childBones)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR__CTOR_1_OFFSET))(this, bone, childBones);
		}

		::RootMotion::FinalIK::IKSolver_Node* GetNode(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::RootMotion::FinalIK::IKSolver_Node*(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_GETNODE_OFFSET))(this, solver);
		}

		::System::Boolean get_isEndEffector()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_GET_ISENDEFFECTOR_OFFSET))(this);
		}

		::System::Void set_isEndEffector(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_SET_ISENDEFFECTOR_OFFSET))(this, value);
		}

		::System::Void PinToBone(::System::Single positionWeight, ::System::Single rotationWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_PINTOBONE_OFFSET))(this, positionWeight, rotationWeight);
		}

		::System::Boolean IsValid(::RootMotion::FinalIK::IKSolver* solver, ::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::IKSolver*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_ISVALID_OFFSET))(this, solver, message);
		}

		::System::Void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_INITIATE_OFFSET))(this, solver);
		}

		::System::Void ResetOffset(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_RESETOFFSET_OFFSET))(this, solver);
		}

		::System::Void SetToTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_SETTOTARGET_OFFSET))(this);
		}

		::System::Void OnPreSolve(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_ONPRESOLVE_OFFSET))(this, solver);
		}

		::System::Void OnPostWrite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_ONPOSTWRITE_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetPlaneRotation(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_GETPLANEROTATION_OFFSET))(this, solver);
		}

		::System::Void Update(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_UPDATE_OFFSET))(this, solver);
		}

		::UnityEngine::Vector3 GetPosition(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Quaternion& planeRotationOffset)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKEFFECTOR_GETPOSITION_OFFSET))(this, solver, planeRotationOffset);
		}
	};
}
