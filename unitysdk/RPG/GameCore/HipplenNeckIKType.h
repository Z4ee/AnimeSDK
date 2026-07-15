#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenNeckIKType_TypeDefinitionIndex = 23691;

	enum class HipplenNeckIKType : ::System::Int32
	{
		None = 0,
		AttachPoint = 1,
		TouchHead = 2,
		Feeding = 3,
	};
}
