#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterController_StateBeginTimeRecord_TypeDefinitionIndex = 54466;

	struct alignas(4) AdventureCharacterController_StateBeginTimeRecord
	{
		::System::Int32 Hash; // 0x10
		::System::Single BeginTime; // 0x14
	};
}
