#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionUIGotoType_TypeDefinitionIndex = 18237;

	enum class MissionUIGotoType : ::System::Int32
	{
		Default = 0,
		Message = 1,
	};
}
