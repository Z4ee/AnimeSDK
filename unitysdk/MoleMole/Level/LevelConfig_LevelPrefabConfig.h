#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_LevelPrefabConfig_TypeDefinitionIndex = 47023;

	struct alignas(8) LevelConfig_LevelPrefabConfig
	{
		::System::String* Path; // 0x10
		::UnityEngine::GameObject* prefabObject; // 0x18
	};
}
