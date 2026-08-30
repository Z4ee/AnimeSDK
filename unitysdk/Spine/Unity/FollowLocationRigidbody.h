#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E63E2E0)
#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E63E350)
#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E63E430)

namespace Spine::Unity
{
	inline static constexpr unsigned int FollowLocationRigidbody_TypeDefinitionIndex = 43865;

	class FollowLocationRigidbody : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* reference; // 0x18
		::UnityEngine::Rigidbody* ownRigidbody; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY_FIXEDUPDATE_OFFSET))(this);
		}
	};
}
