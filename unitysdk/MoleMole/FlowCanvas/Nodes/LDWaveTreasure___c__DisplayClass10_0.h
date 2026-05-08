#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas::Nodes { class LDWaveTreasure; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }
namespace MoleMole::FlowCanvas::Nodes { class TreasureCreateData; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveTreasure___c__DisplayClass10_0_TypeDefinitionIndex = 55567;

	struct alignas(8) LDWaveTreasure___c__DisplayClass10_0
	{
		::MoleMole::FlowCanvas::Nodes::LDWaveTreasure* __4__this; // 0x10
		::MoleMole::FlowCanvas::Nodes::TreasureCreateData* treasureCreateData; // 0x18
		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* createData; // 0x20
	};
}
