#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_DisableCameraProtectReason_TypeDefinitionIndex = 66423;

	enum class CameraDataAndFlags_DisableCameraProtectReason : ::System::Int32
	{
		Default = 1,
		TrainParty = 2,
		Ghost = 4,
		Chimera = 8,
		LittleGame = 16,
		Task = 32,
	};
}
