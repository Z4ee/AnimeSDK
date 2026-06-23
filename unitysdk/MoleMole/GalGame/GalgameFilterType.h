#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalgameFilterType_TypeDefinitionIndex = 51151;

	enum class GalgameFilterType : ::System::Int32
	{
		Connecting = 2,
		None = 0,
		Recalling = 1,
		WhiteScreenShaking = 3,
	};
}
