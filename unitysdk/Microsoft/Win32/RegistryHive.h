#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryHive_TypeDefinitionIndex = 103;

	enum class RegistryHive : ::System::Int32
	{
		ClassesRoot = -2147483648,
		CurrentConfig = -2147483643,
		CurrentUser = -2147483647,
		DynData = -2147483642,
		LocalMachine = -2147483646,
		PerformanceData = -2147483644,
		Users = -2147483645,
	};
}
