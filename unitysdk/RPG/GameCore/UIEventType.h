#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIEventType_TypeDefinitionIndex = 24303;

	enum class UIEventType : ::System::Int32
	{
		None = 0,
		FindTrotter = 1,
	};
}
