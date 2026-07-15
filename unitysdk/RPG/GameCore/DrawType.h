#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrawType_TypeDefinitionIndex = 12849;

	enum class DrawType : ::System::Int32
	{
		Unknown = 0,
		Draw1 = 1,
		Draw10 = 10,
	};
}
