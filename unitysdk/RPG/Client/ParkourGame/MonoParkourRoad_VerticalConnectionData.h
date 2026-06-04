#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_VerticalConnectionData_TypeDefinitionIndex = 69245;

	struct alignas(8) MonoParkourRoad_VerticalConnectionData
	{
		::System::String* ConnectUniqueName; // 0x10
		::System::Single LimitSpeed; // 0x18
	};
}
