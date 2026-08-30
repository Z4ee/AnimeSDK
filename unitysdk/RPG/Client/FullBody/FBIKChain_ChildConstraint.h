#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_GET_ISRIGID_OFFSET UNITYSDK_OFFSET(0x1936D240)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_GET_NOMINALDISTANCE_OFFSET UNITYSDK_OFFSET(0x1936D220)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_METHOD_1_1F9A386CD1061734_OFFSET UNITYSDK_OFFSET(0x1936CF00)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_METHOD_1_2B9F611A895AA45C_OFFSET UNITYSDK_OFFSET(0x193696F0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_METHOD_1_A24EF832801448FD_OFFSET UNITYSDK_OFFSET(0x1936A380)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_SET_ISRIGID_OFFSET UNITYSDK_OFFSET(0x1936D250)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_SET_NOMINALDISTANCE_OFFSET UNITYSDK_OFFSET(0x1936D230)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1936D260)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int FBIKChain_ChildConstraint_TypeDefinitionIndex = 74128;

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

		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_nominalDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_GET_NOMINALDISTANCE_OFFSET))(this);
		}

		::System::Void set_nominalDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_SET_NOMINALDISTANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_isRigid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_GET_ISRIGID_OFFSET))(this);
		}

		::System::Void set_isRigid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_SET_ISRIGID_OFFSET))(this, a1);
		}

		::System::Void Method_1_2B9F611A895AA45C(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_METHOD_1_2B9F611A895AA45C_OFFSET))(this, a1);
		}

		::System::Void Method_1_A24EF832801448FD(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_METHOD_1_A24EF832801448FD_OFFSET))(this, a1);
		}

		::System::Void Method_1_1F9A386CD1061734(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CHILDCONSTRAINT_METHOD_1_1F9A386CD1061734_OFFSET))(this, a1);
		}
	};
}
