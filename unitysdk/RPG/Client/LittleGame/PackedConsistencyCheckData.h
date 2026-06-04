#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int PackedConsistencyCheckData_TypeDefinitionIndex = 71135;

	struct alignas(8) PackedConsistencyCheckData
	{
		::System::String* GameData; // 0x10
		::System::String* AuthSwap; // 0x18
		::System::String* SimSwap; // 0x20
		::System::String* AuthUseItem; // 0x28
		::System::String* SimUseItem; // 0x30
	};
}
