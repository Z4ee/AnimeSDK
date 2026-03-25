#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicRadiusType_TypeDefinitionIndex = 16885;

	enum class DynamicRadiusType : ::System::Int32
	{
		None = 0,
		ForceReplace = 1,
		NoZeroReplace = 2,
	};
}
