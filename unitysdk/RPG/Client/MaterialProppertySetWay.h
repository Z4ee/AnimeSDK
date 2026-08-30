#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialProppertySetWay_TypeDefinitionIndex = 69777;

	enum class MaterialProppertySetWay : ::System::Int32
	{
		MatInstance = 0,
		PropertyBlock = 1,
		BySrpBatcher = 2,
	};
}
