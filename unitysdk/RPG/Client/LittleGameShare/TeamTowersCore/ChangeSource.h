#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int ChangeSource_TypeDefinitionIndex = 35543;

	enum class ChangeSource : ::System::Int32
	{
		Normal = 0,
		ReachHeightline = 1,
	};
}
