#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryValueKind_TypeDefinitionIndex = 105;

	enum class RegistryValueKind : ::System::Int32
	{
		Unknown = 0,
		String = 1,
		ExpandString = 2,
		Binary = 3,
		DWord = 4,
		MultiString = 7,
		QWord = 11,
		None = -1,
	};
}
