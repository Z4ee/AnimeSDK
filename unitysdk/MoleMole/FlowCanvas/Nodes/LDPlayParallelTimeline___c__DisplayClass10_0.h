#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDPlayParallelTimeline; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A84DD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE___C__DISPLAYCLASS10_0__PLAYTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x13A84DE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayParallelTimeline___c__DisplayClass10_0_TypeDefinitionIndex = 61860;

	class LDPlayParallelTimeline___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDPlayParallelTimeline* __4__this; // 0x10
		::FlowCanvas::Flow f; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTimeline_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE___C__DISPLAYCLASS10_0__PLAYTIMELINE_B__0_OFFSET))(this);
		}
	};
}
