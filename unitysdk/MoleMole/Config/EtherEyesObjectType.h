#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectType_TypeDefinitionIndex = 45125;

	enum class EtherEyesObjectType : ::System::Int32
	{
		Fix = 6,
		Path = 4,
		Find = 3,
		BreakCore = 1,
		Break = 0,
		PathWire = 5,
		Show = 2,
	};
}
