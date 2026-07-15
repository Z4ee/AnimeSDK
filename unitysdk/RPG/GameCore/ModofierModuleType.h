#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModofierModuleType_TypeDefinitionIndex = 10171;

	enum class ModofierModuleType : ::System::Int32
	{
		kModofierModuleNone = 0,
		kModofierModuleTrain = 1,
	};
}
