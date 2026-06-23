#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimType_TypeDefinitionIndex = 82005;

	enum class ProceduralAnimType : ::System::Int32
	{
		None = 0,
		Instance = 1,
		Damper = 3,
		Fixed = 2,
	};
}
