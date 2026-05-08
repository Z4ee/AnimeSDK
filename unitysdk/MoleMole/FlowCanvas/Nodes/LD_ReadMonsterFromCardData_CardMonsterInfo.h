#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReadMonsterFromCardData_CardMonsterInfo_TypeDefinitionIndex = 72333;

	struct alignas(8) LD_ReadMonsterFromCardData_CardMonsterInfo
	{
		::System::Int32 monsterID; // 0x10
		::System::Int32 monsterCount; // 0x14
		::System::String* wavePos; // 0x18
		::System::Int32 AIId; // 0x20
		::System::Int32 monsterLevel; // 0x24
	};
}
