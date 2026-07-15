#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DateTimePro_LiteralDate_Kind_TypeDefinitionIndex = 33832;

	enum class DateTimePro_LiteralDate_Kind : ::System::Int32
	{
		Unspecified = 0,
		Server = 1,
		Utc = 2,
		Local = 3,
		Beijing = 4,
	};
}
