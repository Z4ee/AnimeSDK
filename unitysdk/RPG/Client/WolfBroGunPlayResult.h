#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayResult_TypeDefinitionIndex = 65670;

	struct alignas(4) WolfBroGunPlayResult
	{
		::System::Int32 SpawnTargetCount; // 0x10
		::System::Int32 KillTargetCount; // 0x14
		::System::Single BasicScore; // 0x18
		::System::Single AdditionScore; // 0x1C
		::System::Single DelScore; // 0x20
		::System::Int32 TopKillCount; // 0x24
		::System::Single CountdownScore; // 0x28
		::System::Single Score; // 0x2C
		::System::Int32 ScoreRank; // 0x30
		::System::Boolean IsSuccess; // 0x34
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 SerialNumber; // 0x3C
		::System::UInt32 ContinueTime; // 0x40
	};
}
