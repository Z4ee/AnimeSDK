#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int GUILayoutOptions_GUILayoutOptionType_TypeDefinitionIndex = 6487;

	enum class GUILayoutOptions_GUILayoutOptionType : ::System::Int32
	{
		Width = 0,
		Height = 1,
		MinWidth = 2,
		MaxHeight = 3,
		MaxWidth = 4,
		MinHeight = 5,
		ExpandHeight = 6,
		ExpandWidth = 7,
	};
}
