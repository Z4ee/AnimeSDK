#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_820267F94C5D0AA4.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonster; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonster___c__DisplayClass76_0_TypeDefinitionIndex = 83843;

	struct alignas(8) LDWaveMonster___c__DisplayClass76_0
	{
		::Struct_2_820267F94C5D0AA4 config; // 0x10
		::MoleMole::MonoSpawnPoint* spawnPoint; // 0x50
		::MoleMole::FlowCanvas::Nodes::LDWaveMonster* __4__this; // 0x58
		::System::Boolean isPreload; // 0x60
	};
}
