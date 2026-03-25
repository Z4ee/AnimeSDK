#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeValueType_TypeDefinitionIndex = 21318;

	enum class ChangeValueType : ::System::Int32
	{
		Delta = 0,
		RawDelta = 1,
		ClampedAdd = 2,
	};
}
