#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverVR_Arm; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERARM_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1EE41080)
#define ROOTMOTION_FINALIK_IKSOLVERARM_GETPOINTS_OFFSET UNITYSDK_OFFSET(0x1EE40990)
#define ROOTMOTION_FINALIK_IKSOLVERARM_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1EE40C60)
#define ROOTMOTION_FINALIK_IKSOLVERARM_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EE3FFE0)
#define ROOTMOTION_FINALIK_IKSOLVERARM_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1EE41100)
#define ROOTMOTION_FINALIK_IKSOLVERARM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EE41910)
#define ROOTMOTION_FINALIK_IKSOLVERARM_READ_OFFSET UNITYSDK_OFFSET(0x1EE411B0)
#define ROOTMOTION_FINALIK_IKSOLVERARM_SETCHAIN_OFFSET UNITYSDK_OFFSET(0x1EE40900)
#define ROOTMOTION_FINALIK_IKSOLVERARM_SOLVE_OFFSET UNITYSDK_OFFSET(0x1EE41940)
#define ROOTMOTION_FINALIK_IKSOLVERARM_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1EE40E30)
#define ROOTMOTION_FINALIK_IKSOLVERARM_WRITE_OFFSET UNITYSDK_OFFSET(0x1EE41A00)
#define ROOTMOTION_FINALIK_IKSOLVERARM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE41CC0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverArm_TypeDefinitionIndex = 38876;

	class IKSolverArm : public ::RootMotion::FinalIK::IKSolver
	{
	public:
		::System::Single IKRotationWeight; // 0x60
		::UnityEngine::Quaternion IKRotation; // 0x64
		::RootMotion::FinalIK::IKSolver_Point* chest; // 0x78
		::RootMotion::FinalIK::IKSolver_Point* shoulder; // 0x80
		::RootMotion::FinalIK::IKSolver_Point* upperArm; // 0x88
		::RootMotion::FinalIK::IKSolver_Point* forearm; // 0x90
		::RootMotion::FinalIK::IKSolver_Point* hand; // 0x98
		::System::Boolean isLeft; // 0xA0
		::RootMotion::FinalIK::IKSolverVR_Arm* arm; // 0xA8
		::Il2CppArray<::UnityEngine::Vector3>* positions; // 0xB0
		::Il2CppArray<::UnityEngine::Quaternion>* rotations; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_ISVALID_OFFSET))(this, message);
		}

		::System::Boolean SetChain(::UnityEngine::Transform* chest, ::UnityEngine::Transform* shoulder, ::UnityEngine::Transform* upperArm, ::UnityEngine::Transform* forearm, ::UnityEngine::Transform* hand, ::UnityEngine::Transform* root)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_SETCHAIN_OFFSET))(this, chest, shoulder, upperArm, forearm, hand, root);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>* GetPoints()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_GETPOINTS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_Point* GetPoint(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_GETPOINT_OFFSET))(this, transform);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_ONINITIATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_ONUPDATE_OFFSET))(this);
		}

		::System::Void Solve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_SOLVE_OFFSET))(this);
		}

		::System::Void Read()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_READ_OFFSET))(this);
		}

		::System::Void Write()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERARM_WRITE_OFFSET))(this);
		}
	};
}
