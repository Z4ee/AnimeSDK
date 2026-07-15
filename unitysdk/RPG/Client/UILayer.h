#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UILayer_TypeDefinitionIndex = 69701;

	enum class UILayer : ::System::Int32
	{
		Null = 0,
		Widget3D = 1,
		BelowPage = 2,
		Page = 3,
		AbovePage = 4,
		Dialog = 5,
		AboveDialog = 6,
	};
}
