#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopRefreshType_TypeDefinitionIndex = 62309;

	enum class GridFightShopRefreshType : ::System::Int32
	{
		Default = 0,
		Manual = 1,
		GemiRefresh = 2,
		EnterNode = 3,
	};
}
