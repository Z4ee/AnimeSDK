#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPropertyIneritType_TypeDefinitionIndex = 15878;

	enum class AbilityPropertyIneritType : ::System::Int32
	{
		None = 0,
		InheritOnCreate = 1,
		InheritCurrent = 2,
		KeepSync = 3,
		_Count = 4,
	};
}
