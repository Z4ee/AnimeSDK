#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EtherEyesObjectType_TypeDefinitionIndex = 57778;

	enum class EtherEyesObjectType : ::System::Int32
	{
		Show = 2,
		Find = 3,
		BreakCore = 1,
		Break = 0,
		Fix = 6,
		PathWire = 5,
		Path = 4,
	};
}
