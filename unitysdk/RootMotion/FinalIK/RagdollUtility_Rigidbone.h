#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Joint; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_RIGIDBONE_RECORDVELOCITY_OFFSET UNITYSDK_OFFSET(0x1C349E90)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_RIGIDBONE_WAKEUP_OFFSET UNITYSDK_OFFSET(0x1C34A0F0)
#define ROOTMOTION_FINALIK_RAGDOLLUTILITY_RIGIDBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C349AE0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RagdollUtility_Rigidbone_TypeDefinitionIndex = 36674;

	class RagdollUtility_Rigidbone : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* r; // 0x10
		::UnityEngine::Rigidbody* c; // 0x18
		::UnityEngine::Collider* collider; // 0x20
		::UnityEngine::Transform* t; // 0x28
		::UnityEngine::Joint* joint; // 0x30
		::UnityEngine::Vector3 lastPosition; // 0x38
		::UnityEngine::Vector3 deltaPosition; // 0x44
		::System::Single deltaTime; // 0x50
		::System::Boolean updateAnchor; // 0x54
		::UnityEngine::Quaternion lastRotation; // 0x58
		::UnityEngine::Quaternion deltaRotation; // 0x68

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
