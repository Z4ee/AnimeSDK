#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalgameFilterType_TypeDefinitionIndex = 44968;

	enum class GalgameFilterType : ::System::Int32
	{
		Recalling = 1,
		Connecting = 2,
		None = 0,
		WhiteScreenShaking = 3,
	};
}
