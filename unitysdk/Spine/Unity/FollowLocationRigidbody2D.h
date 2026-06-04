#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ACB4300)
#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACB4390)
#define SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB4570)

namespace Spine::Unity
{
	inline static constexpr unsigned int FollowLocationRigidbody2D_TypeDefinitionIndex = 41440;

	class FollowLocationRigidbody2D : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* reference; // 0x18
		::System::Boolean followFlippedX; // 0x20
		::UnityEngine::Rigidbody2D* ownRigidbody; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWLOCATIONRIGIDBODY2D_FIXEDUPDATE_OFFSET))(this);
		}
	};
}
