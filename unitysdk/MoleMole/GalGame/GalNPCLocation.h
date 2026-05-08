#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalNPCLocation_TypeDefinitionIndex = 51024;

	enum class GalNPCLocation : ::System::Int32
	{
		Middle = 1,
		Left = 0,
		Right = 2,
	};
}
