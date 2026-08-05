#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

namespace PathCreation::Examples
{
	inline static constexpr unsigned int PathPlacer_PropData_TypeDefinitionIndex = 38125;

	struct alignas(8) PathPlacer_PropData
	{
		::UnityEngine::GameObject* Prefab; // 0x10
		::System::Single Spacing; // 0x18
		::UnityEngine::Vector3 RotateOffset; // 0x1C
		::UnityEngine::Vector3 PositionOffset; // 0x28
	};
}
