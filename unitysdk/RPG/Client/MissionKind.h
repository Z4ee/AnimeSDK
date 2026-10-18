#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionKind_TypeDefinitionIndex = 66166;

	enum class MissionKind : ::System::Int32
	{
		Main = 0,
		Sub = 1,
	};
}
