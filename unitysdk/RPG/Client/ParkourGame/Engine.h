#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EngineData.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int Engine_TypeDefinitionIndex = 60789;

	struct alignas(8) Engine
	{
		::System::Single Mass; // 0x10
		::System::Int32 DefaultLevel; // 0x14
		::Il2CppArray<::RPG::Client::ParkourGame::EngineData>* Level; // 0x18
	};
}
