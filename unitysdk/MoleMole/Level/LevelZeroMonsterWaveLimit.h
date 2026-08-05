#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelZeroMonsterWaveLimit_TypeDefinitionIndex = 75468;

	struct alignas(4) LevelZeroMonsterWaveLimit
	{
		::System::Int32 MaxMonsterCount; // 0x10
		::System::Int32 MaxRangeMonsterCount; // 0x14
		::System::Int32 MaxSpecialMonsterCount; // 0x18
	};
}
