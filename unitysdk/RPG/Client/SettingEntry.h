#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SettingEntry_TypeDefinitionIndex = 64936;

	enum class SettingEntry : ::System::Int32
	{
		Normal = 0,
		Performance = 1,
	};
}
