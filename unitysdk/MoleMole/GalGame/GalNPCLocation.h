#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalNPCLocation_TypeDefinitionIndex = 56061;

	enum class GalNPCLocation : ::System::Int32
	{
		Middle = 1,
		Right = 2,
		Left = 0,
	};
}
