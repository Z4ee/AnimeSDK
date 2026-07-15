#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CocoonType_TypeDefinitionIndex = 12083;

	enum class CocoonType : ::System::Int32
	{
		TYPE_NONE = 0,
		TYPE_NORMAL = 1,
		TYPE_WEEK = 2,
		TYPE_RELIC = 3,
	};
}
