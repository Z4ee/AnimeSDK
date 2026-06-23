#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDCreateMonsterSyncNode; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12609F60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE___C__DISPLAYCLASS11_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x12609F70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateMonsterSyncNode___c__DisplayClass11_0_TypeDefinitionIndex = 83965;

	class LDCreateMonsterSyncNode___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDCreateMonsterSyncNode* __4__this; // 0x10
		::FlowCanvas::Flow f; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATEMONSTERSYNCNODE___C__DISPLAYCLASS11_0__REGISTERPORTS_B__2_OFFSET))(this);
		}
	};
}
