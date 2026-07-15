#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingLayerType_TypeDefinitionIndex = 23581;

	enum class StreamingLayerType : ::System::Int32
	{
		Static = 0,
		PersistentLayer = 1,
		MoveableItem = 2,
		MonoEffect = 3,
		GrassStreaming = 4,
		Collider = 5,
		HoyoGroup = 6,
		ShadowProxy = 7,
		Variant = 8,
		SceneItemHLOD = 9,
		GlobalStatic = 10,
		Terrain = 11,
	};
}
