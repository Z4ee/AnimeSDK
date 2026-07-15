#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int TreeRotation_TypeDefinitionIndex = 3044;

	enum class TreeRotation : ::System::Byte
	{
		Left = 0x0,
		LeftRight = 0x1,
		Right = 0x2,
		RightLeft = 0x3,
	};
}
