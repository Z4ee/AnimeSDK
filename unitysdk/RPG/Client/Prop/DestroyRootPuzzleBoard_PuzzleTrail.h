#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class GameObject; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleBoard_PuzzleTrail_TypeDefinitionIndex = 74587;

	struct alignas(8) DestroyRootPuzzleBoard_PuzzleTrail
	{
		::Il2CppArray<::UnityEngine::Vector2Int>* EndPoints; // 0x10
		::Il2CppArray<::UnityEngine::GameObject*>* EndPointObjects; // 0x18
		::UnityEngine::GameObject* TrailAnimObject; // 0x20
	};
}
