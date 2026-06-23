#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractTargetType_TypeDefinitionIndex = 46233;

	enum class InteractTargetType : ::System::Int32
	{
		All = 3,
		Other = 2,
		Piece = 1,
	};
}
