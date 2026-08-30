#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootChessActionType_TypeDefinitionIndex = 78066;

	enum class DestroyRootChessActionType : ::System::Int32
	{
		RotateClockwise = 1,
		RotateAntiClockwise = 2,
		Move = 3,
		Launch = 4,
	};
}
