#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryValueOptions_TypeDefinitionIndex = 106;

	enum class RegistryValueOptions : ::System::Int32
	{
		None = 0,
		DoNotExpandEnvironmentNames = 1,
	};
}
