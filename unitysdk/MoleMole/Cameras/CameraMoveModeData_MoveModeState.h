#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMoveModeData_MoveModeState_TypeDefinitionIndex = 76683;

	enum class CameraMoveModeData_MoveModeState : ::System::Int32
	{
		Dead = 3,
		Acting = 2,
		Null = 0,
		DelayStart = 1,
	};
}
