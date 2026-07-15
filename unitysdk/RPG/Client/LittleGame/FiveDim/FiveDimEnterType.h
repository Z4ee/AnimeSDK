#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimEnterType_TypeDefinitionIndex = 40958;

	enum class FiveDimEnterType : ::System::Int32
	{
		Graph = 0,
		PipeEntry = 1,
		GameBoy = 2,
		InitInFiveDim = 3,
		CrossLevel = 4,
	};
}
