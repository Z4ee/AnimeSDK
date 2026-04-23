#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class MeshCollider; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleMeshAreaConfig_TypeDefinitionIndex = 72069;

	struct alignas(8) DronesPuzzleMeshAreaConfig
	{
		::UnityEngine::MeshCollider* meshCollider; // 0x10
	};
}
