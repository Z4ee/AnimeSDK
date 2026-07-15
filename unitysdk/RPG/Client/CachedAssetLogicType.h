#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLogicType_TypeDefinitionIndex = 39237;

	enum class CachedAssetLogicType : ::System::Int32
	{
		NotCache = 0,
		Prefab = 1,
		CharacterPrefab = 2,
		ScenePrefab = 3,
		EffectPrefab = 4,
		UIPrefab = 5,
		Mesh = 6,
		Material = 7,
		Animation = 8,
		Texture = 9,
		Sprite = 10,
		Text = 11,
		ScriptableObject = 12,
		NavMesh = 13,
	};
}
