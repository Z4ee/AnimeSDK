#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TickLodTemplateName_TypeDefinitionIndex = 10141;

	enum class TickLodTemplateName : ::System::Int32
	{
		AlwaysTickEntity = 0,
		DefaultStaticEntity = 1,
		DefaultDynamicEntity = 2,
		LargeStaticEntity = 3,
		AssemblyEntity = 4,
	};
}
