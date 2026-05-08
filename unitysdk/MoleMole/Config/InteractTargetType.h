#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractTargetType_TypeDefinitionIndex = 70754;

	enum class InteractTargetType : ::System::Int32
	{
		Piece = 1,
		All = 3,
		Other = 2,
	};
}
