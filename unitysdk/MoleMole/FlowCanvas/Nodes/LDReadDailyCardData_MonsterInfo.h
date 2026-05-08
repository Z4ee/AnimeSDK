#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadDailyCardData_MonsterInfo_TypeDefinitionIndex = 71777;

	struct alignas(8) LDReadDailyCardData_MonsterInfo
	{
		::System::Int32 monsterID; // 0x10
		::System::Int32 monsterCount; // 0x14
		::System::Int32 monsterAI; // 0x18
		::System::String* wavePos; // 0x20
	};
}
