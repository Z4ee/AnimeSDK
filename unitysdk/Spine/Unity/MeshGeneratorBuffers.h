#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Spine::Unity { class MeshGenerator; }

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGeneratorBuffers_TypeDefinitionIndex = 42277;

	struct alignas(8) MeshGeneratorBuffers
	{
		::System::Int32 vertexCount; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* vertexBuffer; // 0x18
		::Il2CppArray<::UnityEngine::Vector2>* uvBuffer; // 0x20
		::Il2CppArray<::UnityEngine::Color32>* colorBuffer; // 0x28
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x30
	};
}
