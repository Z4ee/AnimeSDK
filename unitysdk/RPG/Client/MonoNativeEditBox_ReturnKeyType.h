#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNativeEditBox_ReturnKeyType_TypeDefinitionIndex = 67955;

	enum class MonoNativeEditBox_ReturnKeyType : ::System::Int32
	{
		Default = 0,
		Next = 1,
		Done = 2,
		Send = 3,
		Go = 4,
	};
}
