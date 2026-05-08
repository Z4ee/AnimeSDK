#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverVR_Leg; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERLEG_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1C119AE0)
#define ROOTMOTION_FINALIK_IKSOLVERLEG_GETPOINTS_OFFSET UNITYSDK_OFFSET(0x1C1193F0)
#define ROOTMOTION_FINALIK_IKSOLVERLEG_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1C1196C0)
#define ROOTMOTION_FINALIK_IKSOLVERLEG_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C118A40)
#define ROOTMOTION_FINALIK_IKSOLVERLEG_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1C119B60)
#define ROOTMOTION_FINALIK_IKSOLVERLEG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C11A370)
#define ROOTMOTION_FINALIK_IKSOLVERLEG_READ_OFFSET UNITYSDK_OFFSET(0x1C119C10)
#define ROOTMOTION_FINALIK_IKSOLVERLEG_SETCHAIN_OFFSET UNITYSDK_OFFSET(0x1C119360)
#define ROOTMOTION_FINALIK_IKSOLVERLEG_SOLVE_OFFSET UNITYSDK_OFFSET(0x1C11A3A0)
#define ROOTMOTION_FINALIK_IKSOLVERLEG_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1C119890)
#define ROOTMOTION_FINALIK_IKSOLVERLEG_WRITE_OFFSET UNITYSDK_OFFSET(0x1C11A4B0)
#define ROOTMOTION_FINALIK_IKSOLVERLEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11A770)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLeg_TypeDefinitionIndex = 36623;

	class IKSolverLeg : public ::RootMotion::FinalIK::IKSolver
	{
	public:
		::System::Single IKRotationWeight; // 0x60
		::UnityEngine::Quaternion IKRotation; // 0x64
		::RootMotion::FinalIK::IKSolver_Point* pelvis; // 0x78
		::RootMotion::FinalIK::IKSolver_Point* thigh; // 0x80
		::RootMotion::FinalIK::IKSolver_Point* calf; // 0x88
		::RootMotion::FinalIK::IKSolver_Point* foot; // 0x90
		::RootMotion::FinalIK::IKSolver_Point* toe; // 0x98
		::RootMotion::FinalIK::IKSolverVR_Leg* leg; // 0xA0
		::UnityEngine::Vector3 heelOffset; // 0xA8
		::Il2CppArray<::UnityEngine::Vector3>* positions; // 0xB8
		::Il2CppArray<::UnityEngine::Quaternion>* rotations; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_ISVALID_OFFSET))(this, message);
		}

		::System::Boolean SetChain(::UnityEngine::Transform* pelvis, ::UnityEngine::Transform* thigh, ::UnityEngine::Transform* calf, ::UnityEngine::Transform* foot, ::UnityEngine::Transform* toe, ::UnityEngine::Transform* root)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_SETCHAIN_OFFSET))(this, pelvis, thigh, calf, foot, toe, root);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>* GetPoints()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_GETPOINTS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_Point* GetPoint(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_GETPOINT_OFFSET))(this, transform);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_ONINITIATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_ONUPDATE_OFFSET))(this);
		}

		::System::Void Solve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_SOLVE_OFFSET))(this);
		}

		::System::Void Read()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_READ_OFFSET))(this);
		}

		::System::Void Write()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLEG_WRITE_OFFSET))(this);
		}
	};
}
