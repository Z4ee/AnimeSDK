#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectType_TypeDefinitionIndex = 56696;

	enum class EtherEyesObjectType : ::System::Int32
	{
		Find = 3,
		Break = 0,
		PathWire = 5,
		Path = 4,
		Show = 2,
		Fix = 6,
		BreakCore = 1,
	};
}
