#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int BillboardIdentifierType_TypeDefinitionIndex = 71378;

	enum class BillboardIdentifierType : ::System::Int32
	{
		MazeEntity = 0,
		LittleGameEntity = 1,
	};
}
