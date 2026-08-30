#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingHPChangeFormatType_TypeDefinitionIndex = 77354;

	enum class ChenLingHPChangeFormatType : ::System::Int32
	{
		Invalid = 0,
		Common = 1,
		Critial = 2,
		CertainCritical = 3,
		Reflection = 4,
		Immunity = 5,
		Block = 6,
		Coin = 7,
	};
}
