#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveOffsetCoordType_TypeDefinitionIndex = 23756;

	enum class MoveOffsetCoordType : ::System::Int32
	{
		SourceToTarget = 0,
		OriginalSourceToTarget = 1,
		Source = 2,
		Target = 3,
	};
}
