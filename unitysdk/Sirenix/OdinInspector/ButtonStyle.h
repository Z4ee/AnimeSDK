#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ButtonStyle_TypeDefinitionIndex = 7269;

	enum class ButtonStyle : ::System::Int32
	{
		CompactBox = 0,
		FoldoutButton = 1,
		Box = 2,
	};
}
