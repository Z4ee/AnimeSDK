#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageLinkType_TypeDefinitionIndex = 13737;

	enum class MessageLinkType : ::System::Int32
	{
		None = 0,
		Exit = 1,
	};
}
