#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfSubTabType_TypeDefinitionIndex = 11870;

	enum class SilverWolfSubTabType : ::System::Int32
	{
		None = 0,
		Exploration = 1,
		Shoot = 2,
		Raid = 3,
	};
}
