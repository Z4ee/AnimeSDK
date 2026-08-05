#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int NPCSinglePlayableAnimLayer_TypeDefinitionIndex = 69556;

	enum class NPCSinglePlayableAnimLayer : ::System::Int32
	{
		BlendShape = 2,
		Base = 0,
		UpperBody = 1,
		Eyes = 3,
		Count = 4,
	};
}
