#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int PathSelectorAttribute_DialogMode_TypeDefinitionIndex = 25874;

	enum class PathSelectorAttribute_DialogMode : ::System::Int32
	{
		OpenFile = 0,
		OpenFolder = 1,
		CreateFile = 2,
	};
}
