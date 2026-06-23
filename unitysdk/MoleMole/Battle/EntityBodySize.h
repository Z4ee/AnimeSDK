#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int EntityBodySize_TypeDefinitionIndex = 57852;

	enum class EntityBodySize : ::System::Int32
	{
		DontCare = -1,
		Unknown = 1,
		Large = 16,
		None = 0,
		Tiny = 2,
		Default = 8,
		Point = 64,
		Gigantic = 32,
		Small = 4,
		Standard = 8,
	};
}
