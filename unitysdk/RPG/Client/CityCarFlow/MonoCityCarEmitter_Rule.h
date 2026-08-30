#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::CityCarFlow { class MonoCityCar; }

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarEmitter_Rule_TypeDefinitionIndex = 80845;

	struct alignas(8) MonoCityCarEmitter_Rule
	{
		::RPG::Client::CityCarFlow::MonoCityCar* Car; // 0x10
		::System::Single Weight; // 0x18
	};
}
