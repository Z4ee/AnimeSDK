#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int CrystalState_TypeDefinitionIndex = 40912;

	enum class CrystalState : ::System::Int32
	{
		None = -1,
		Normal = 0,
		Broken = 1,
		Die = 2,
	};
}
