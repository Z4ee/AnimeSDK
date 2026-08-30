#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HPSharedGroupPropertyType_TypeDefinitionIndex = 24479;

	enum class HPSharedGroupPropertyType : ::System::Int32
	{
		CurHP_MainAgent = 0,
		MaxHP_MainAgent = 1,
	};
}
