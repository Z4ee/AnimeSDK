#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int ChangeSource_TypeDefinitionIndex = 37091;

	enum class ChangeSource : ::System::Int32
	{
		Normal = 0,
		ReachHeightline = 1,
	};
}
