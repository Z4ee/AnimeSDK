#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentType_TypeDefinitionIndex = 11211;

	enum class HipplenIncidentType : ::System::Int32
	{
		NormalIncident = 0,
		OptionIncident = 1,
	};
}
