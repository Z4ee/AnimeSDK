#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HPBarType_TypeDefinitionIndex = 15866;

	enum class HPBarType : ::System::Int32
	{
		Normal = 0,
		Multi = 1,
	};
}
