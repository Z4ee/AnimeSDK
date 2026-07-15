#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePrefabInfoFeature_TypeDefinitionIndex = 23566;

	enum class StagePrefabInfoFeature : ::System::Int32
	{
		MonoEffect = 0,
		CustomFading = 1,
		SceneMonoPlugin = 2,
		CanChangeIRIVolumeTransRuntime = 3,
		OnResetable = 4,
		TerrainObject = 5,
	};
}
