#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBuffSlotType_TypeDefinitionIndex = 11076;

	enum class FateBuffSlotType : ::System::Int32
	{
		Unknown = 0,
		Common = 1,
		Extra = 2,
	};
}
