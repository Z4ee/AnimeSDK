#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int PowerModes_TypeDefinitionIndex = 4294;

	enum class PowerModes : ::System::Int32
	{
		Resume = 1,
		StatusChange = 2,
		Suspend = 3,
	};
}
