#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMiniGameEnterType_TypeDefinitionIndex = 41921;

	enum class FiveDimMiniGameEnterType : ::System::Int32
	{
		Normal = 0,
		PausePage = 1,
		FinishPage = 2,
	};
}
