#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMoveModeData_MoveModeState_TypeDefinitionIndex = 53623;

	enum class CameraMoveModeData_MoveModeState : ::System::Int32
	{
		DelayStart = 1,
		Acting = 2,
		Null = 0,
		Dead = 3,
	};
}
