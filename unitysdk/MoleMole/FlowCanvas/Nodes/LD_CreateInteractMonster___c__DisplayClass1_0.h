#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_CreateInteractMonster; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x161E9A50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___C__DISPLAYCLASS1_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x161E9BE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateInteractMonster___c__DisplayClass1_0_TypeDefinitionIndex = 46347;

	class LD_CreateInteractMonster___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow flow; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_CreateInteractMonster* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATEINTERACTMONSTER___C__DISPLAYCLASS1_0__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
