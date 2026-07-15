#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraMode_TypeDefinitionIndex = 15784;

	enum class CameraMode : ::System::Int32
	{
		FightNormal = 0,
		CloseupShot = 1,
		FreeLook = 2,
		FreeLook3rd = 3,
		DisableCameraPipeline = 4,
		Roaming = 5,
		TopView = 6,
		LittleGame = 7,
		Count = 8,
	};
}
