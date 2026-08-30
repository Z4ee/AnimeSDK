#pragma once
#include "unitysdk/unitysdk.h"

namespace SuperScrollView
{
	inline static constexpr unsigned int ListItemArrangeType_TypeDefinitionIndex = 48090;

	enum class ListItemArrangeType : ::System::Int32
	{
		TopToBottom = 0,
		BottomToTop = 1,
		LeftToRight = 2,
		RightToLeft = 3,
	};
}
