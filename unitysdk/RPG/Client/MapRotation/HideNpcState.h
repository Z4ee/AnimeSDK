#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MapRotation
{
	inline static constexpr unsigned int HideNpcState_TypeDefinitionIndex = 72025;

	enum class HideNpcState : ::System::Int32
	{
		None = 0,
		Logically = 1,
		Visually = 2,
	};
}
