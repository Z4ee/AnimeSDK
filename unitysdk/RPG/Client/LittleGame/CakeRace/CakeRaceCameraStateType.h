#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceCameraStateType_TypeDefinitionIndex = 77541;

	enum class CakeRaceCameraStateType : ::System::Int32
	{
		None = 0,
		Follow = 1,
		Cut = 2,
		Free = 3,
		Direct = 4,
		Stop = 5,
		SectionShow = 6,
	};
}
