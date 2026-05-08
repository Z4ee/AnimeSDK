#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int EntityBodySize_TypeDefinitionIndex = 79422;

	enum class EntityBodySize : ::System::Int32
	{
		Standard = 8,
		Gigantic = 32,
		DontCare = -1,
		Small = 4,
		None = 0,
		Default = 8,
		Point = 64,
		Tiny = 2,
		Large = 16,
		Unknown = 1,
	};
}
