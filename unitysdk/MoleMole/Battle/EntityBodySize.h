#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int EntityBodySize_TypeDefinitionIndex = 41214;

	enum class EntityBodySize : ::System::Int32
	{
		Tiny = 2,
		Standard = 8,
		Large = 16,
		Small = 4,
		DontCare = -1,
		None = 0,
		Point = 64,
		Unknown = 1,
		Gigantic = 32,
		Default = 8,
	};
}
