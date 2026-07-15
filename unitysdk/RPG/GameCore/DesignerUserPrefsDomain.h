#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DesignerUserPrefsDomain_TypeDefinitionIndex = 23689;

	enum class DesignerUserPrefsDomain : ::System::Int32
	{
		GameLogin = 0,
		LocalDevice = 1,
	};
}
