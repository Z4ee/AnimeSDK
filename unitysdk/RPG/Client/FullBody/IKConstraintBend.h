#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0xD0D1E10)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_2787325FBE894674_OFFSET UNITYSDK_OFFSET(0xD0D2190)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_35EDB68198B7034F_OFFSET UNITYSDK_OFFSET(0xD0C2A60)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_6C6B39C825927D70_1_OFFSET UNITYSDK_OFFSET(0xD0D2080)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_6C6B39C825927D70_OFFSET UNITYSDK_OFFSET(0xD0D1F60)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_CDB9356E62DEB3C0_OFFSET UNITYSDK_OFFSET(0xD0D1A30)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_D945CEAD343B5366_OFFSET UNITYSDK_OFFSET(0xD0C2AD0)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_E77295995B04931B_OFFSET UNITYSDK_OFFSET(0xD0C43E0)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_F552CBD036D44B0E_OFFSET UNITYSDK_OFFSET(0xD0D2450)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0xD0D1E20)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD0D1E30)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND__CTOR_OFFSET UNITYSDK_OFFSET(0xD0C1C80)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKConstraintBend_TypeDefinitionIndex = 74148;

	class IKConstraintBend : public ::System::Object
	{
	public:
		::UnityEngine::Transform* bone1; // 0x10
		::UnityEngine::Transform* bone2; // 0x18
		::UnityEngine::Transform* bone3; // 0x20
		::UnityEngine::Transform* bendGoal; // 0x28
		::UnityEngine::Vector3 direction; // 0x30
		::UnityEngine::Quaternion rotationOffset; // 0x3C
		::System::Single weight; // 0x4C
		::UnityEngine::Vector3 defaultLocalDirection; // 0x50
		::UnityEngine::Vector3 defaultChildDirection; // 0x5C
		::System::Single clampF; // 0x68
		::System::Int32 chainIndex1; // 0x6C
		::System::Int32 nodeIndex1; // 0x70
		::System::Int32 chainIndex2; // 0x74
		::System::Int32 nodeIndex2; // 0x78
		::System::Int32 chainIndex3; // 0x7C
		::System::Int32 nodeIndex3; // 0x80
		::System::Boolean _initiated_k__BackingField; // 0x84
		::System::Boolean limbOrientationsSet; // 0x85

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_CDB9356E62DEB3C0(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_CDB9356E62DEB3C0_OFFSET))(this, a1);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_SET_INITIATED_OFFSET))(this, a1);
		}

		::System::Void Method_1_35EDB68198B7034F(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_35EDB68198B7034F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_D945CEAD343B5366(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_D945CEAD343B5366_OFFSET))(this, a1);
		}

		::System::Void Method_1_2787325FBE894674(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_2787325FBE894674_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_F552CBD036D44B0E(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_F552CBD036D44B0E_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_E77295995B04931B(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_E77295995B04931B_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_6C6B39C825927D70(::RPG::Client::FullBody::IKSolverFullBody* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_6C6B39C825927D70_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_6C6B39C825927D70_1(::RPG::Client::FullBody::IKSolverFullBody* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_METHOD_1_6C6B39C825927D70_1_OFFSET))(this, a1, a2);
		}
	};
}
