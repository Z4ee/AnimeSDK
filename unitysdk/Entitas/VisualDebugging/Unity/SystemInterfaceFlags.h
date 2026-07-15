#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int SystemInterfaceFlags_TypeDefinitionIndex = 9725;

	enum class SystemInterfaceFlags : ::System::Int32
	{
		None = 0,
		IInitializeSystem = 2,
		IExecuteSystem = 4,
		ICleanupSystem = 8,
		ITearDownSystem = 16,
		IReactiveSystem = 32,
	};
}
