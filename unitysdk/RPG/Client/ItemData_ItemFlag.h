#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ItemData_ItemFlag_TypeDefinitionIndex = 62787;

	enum class ItemData_ItemFlag : ::System::Int32
	{
		None = 0,
		Usable = 1,
		Sellable = 2,
		Visible = 4,
	};
}
