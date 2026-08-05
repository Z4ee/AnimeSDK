#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ProceduralAnimType_TypeDefinitionIndex = 48900;

	enum class ProceduralAnimType : ::System::Int32
	{
		Instance = 1,
		Damper = 3,
		Fixed = 2,
		None = 0,
	};
}
