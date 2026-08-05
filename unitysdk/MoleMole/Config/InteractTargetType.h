#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractTargetType_TypeDefinitionIndex = 60600;

	enum class InteractTargetType : ::System::Int32
	{
		Other = 2,
		All = 3,
		Piece = 1,
	};
}
