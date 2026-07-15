#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int GameCameraType_TypeDefinitionIndex = 36027;

	enum class GameCameraType : ::System::Int32
	{
		Invalid = 0,
		Game = 1,
		UI = 2,
		Reflection = 4,
		SceneView = 8,
		Preview = 16,
		ReflectionCube = 32,
		SceneViewReflection = 64,
		PVSBake = 256,
		GBufferOnly = 512,
		All = 65535,
	};
}
