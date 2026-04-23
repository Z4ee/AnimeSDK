#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ConeSphereTrigger_TriggerPattern_TypeDefinitionIndex = 55800;

	enum class ConeSphereTrigger_TriggerPattern : ::System::Int32
	{
		Inner = 0,
		Outer = 1,
	};
}
