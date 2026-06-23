#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class SphereCollider; }

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleCollisions_TypeDefinitionIndex = 52003;

	struct alignas(8) VehicleCollisions
	{
		::Il2CppArray<::UnityEngine::Collider*>* colliders; // 0x10
		::Il2CppArray<::UnityEngine::SphereCollider*>* wheels; // 0x18
	};
}
