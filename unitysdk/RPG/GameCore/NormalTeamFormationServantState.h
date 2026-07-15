#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NormalTeamFormationServantState_TypeDefinitionIndex = 23800;

	enum class NormalTeamFormationServantState : ::System::Int32
	{
		Default = 0,
		DefaultFollow = 1,
		UniformFollow = 2,
	};
}
