#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Joint; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_RIGIDBONE_RECORDVELOCITY_OFFSET UNITYSDK_OFFSET(0x1FA5CBF0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_RIGIDBONE_WAKEUP_OFFSET UNITYSDK_OFFSET(0x1FA5CE40)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_RIGIDBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5C840)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RagdollUtility_Rigidbone_TypeDefinitionIndex = 38964;

	class RagdollUtility_Rigidbone : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* c; // 0x10
		::UnityEngine::Joint* joint; // 0x18
		::UnityEngine::Rigidbody* r; // 0x20
		::UnityEngine::Collider* collider; // 0x28
		::UnityEngine::Transform* t; // 0x30
		::System::Single deltaTime; // 0x38
		::UnityEngine::Quaternion deltaRotation; // 0x3C
		::UnityEngine::Quaternion lastRotation; // 0x4C
		::UnityEngine::Vector3 deltaPosition; // 0x5C
		::System::Boolean updateAnchor; // 0x68
		::UnityEngine::Vector3 lastPosition; // 0x6C

		::System::Void _ctor(::UnityEngine::Rigidbody* r)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_RIGIDBONE__CTOR_OFFSET))(this, r);
		}

		::System::Void RecordVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_RIGIDBONE_RECORDVELOCITY_OFFSET))(this);
		}

		::System::Void WakeUp(::System::Single velocityWeight, ::System::Single angularVelocityWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_RAGDOLLUTILITY_RIGIDBONE_WAKEUP_OFFSET))(this, velocityWeight, angularVelocityWeight);
		}
	};
}
