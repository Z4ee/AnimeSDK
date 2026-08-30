#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int PolishItemKind_TypeDefinitionIndex = 49368;

	enum class PolishItemKind : ::System::Int32
	{
		Primitive = 0,
		FbxRef = 1,
	};
}
