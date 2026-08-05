#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class IKSolverFullBody; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_GET_ISRIGID_OFFSET UNITYSDK_OFFSET(0x1F882C70)
#define ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_GET_NOMINALDISTANCE_OFFSET UNITYSDK_OFFSET(0x1F882C50)
#define ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F882CB0)
#define ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_ONPRESOLVE_OFFSET UNITYSDK_OFFSET(0x1F882D00)
#define ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_SET_ISRIGID_OFFSET UNITYSDK_OFFSET(0x1F882C80)
#define ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_SET_NOMINALDISTANCE_OFFSET UNITYSDK_OFFSET(0x1F882C60)
#define ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_SOLVE_OFFSET UNITYSDK_OFFSET(0x1F882FB0)
#define ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F882C90)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FBIKChain_ChildConstraint_TypeDefinitionIndex = 38940;

	class FBIKChain_ChildConstraint : public ::System::Object
	{
	public:
		::System::Single pushElasticity; // 0x10
		::System::Single pullElasticity; // 0x14
		::UnityEngine::Transform* bone1; // 0x18
		::UnityEngine::Transform* bone2; // 0x20
		::System::Single _nominalDistance_k__BackingField; // 0x28
		::System::Boolean _isRigid_k__BackingField; // 0x2C
		::System::Single crossFade; // 0x30
		::System::Single inverseCrossFade; // 0x34
		::System::Int32 chain1Index; // 0x38
		::System::Int32 chain2Index; // 0x3C

		::System::Void _ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::System::Single pushElasticity, ::System::Single pullElasticity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT__CTOR_OFFSET))(this, bone1, bone2, pushElasticity, pullElasticity);
		}

		::System::Single get_nominalDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_GET_NOMINALDISTANCE_OFFSET))(this);
		}

		::System::Void set_nominalDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_SET_NOMINALDISTANCE_OFFSET))(this, value);
		}

		::System::Boolean get_isRigid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_GET_ISRIGID_OFFSET))(this);
		}

		::System::Void set_isRigid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_SET_ISRIGID_OFFSET))(this, value);
		}

		::System::Void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_INITIATE_OFFSET))(this, solver);
		}

		::System::Void OnPreSolve(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_ONPRESOLVE_OFFSET))(this, solver);
		}

		::System::Void Solve(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_CHILDCONSTRAINT_SOLVE_OFFSET))(this, solver);
		}
	};
}
