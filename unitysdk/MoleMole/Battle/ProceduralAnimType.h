#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimType_TypeDefinitionIndex = 55994;

	enum class ProceduralAnimType : ::System::Int32
	{
		Instance = 1,
		Fixed = 2,
		Damper = 3,
		None = 0,
	};
}
