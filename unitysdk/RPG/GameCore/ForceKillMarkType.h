#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceKillMarkType_TypeDefinitionIndex = 18246;

	enum class ForceKillMarkType : ::System::Int32
	{
		Default = 0,
		StageInvasion = 1,
		MechanicThreshold = 2,
	};
}
