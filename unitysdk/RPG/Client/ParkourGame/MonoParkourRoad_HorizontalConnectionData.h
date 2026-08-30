#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_HorizontalConnectionData_TypeDefinitionIndex = 74064;

	struct alignas(8) MonoParkourRoad_HorizontalConnectionData
	{
		::System::String* ConnectUniqueName; // 0x10
		::System::Boolean NeedHeight; // 0x18
	};
}
