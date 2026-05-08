#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDChangeMonsterAI; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1427A830)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI___C__DISPLAYCLASS4_0__PROCESSCHANGEAI_B__0_OFFSET UNITYSDK_OFFSET(0x1427A840)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChangeMonsterAI___c__DisplayClass4_0_TypeDefinitionIndex = 40569;

	class LDChangeMonsterAI___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDChangeMonsterAI* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessChangeAI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEMONSTERAI___C__DISPLAYCLASS4_0__PROCESSCHANGEAI_B__0_OFFSET))(this);
		}
	};
}
