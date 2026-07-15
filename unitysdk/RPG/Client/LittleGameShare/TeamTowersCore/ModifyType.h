#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int ModifyType_TypeDefinitionIndex = 35576;

	enum class ModifyType : ::System::Int32
	{
		Add = 1,
		Max = 2,
		Set = 3,
	};
}
