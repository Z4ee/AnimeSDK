#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchAlertValueModulePriority_TypeDefinitionIndex = 54574;

	enum class SwitchAlertValueModulePriority : ::System::Int32
	{
		Task = 0,
		DummyAI = 2,
	};
}
