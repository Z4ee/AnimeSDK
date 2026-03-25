#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModofierModuleType_TypeDefinitionIndex = 10133;

	enum class ModofierModuleType : ::System::Int32
	{
		kModofierModuleNone = 0,
		kModofierModuleTrain = 1,
	};
}
