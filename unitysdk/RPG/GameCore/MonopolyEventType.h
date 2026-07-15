#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventType_TypeDefinitionIndex = 11557;

	enum class MonopolyEventType : ::System::Int32
	{
		Default = 0,
		Simple = 1,
		Random = 2,
		Optional = 3,
		RandomOptional = 4,
		OptionalGroup = 5,
	};
}
