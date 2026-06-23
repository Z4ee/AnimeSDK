#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDPlayParallelTimeline; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA1C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYPARALLELTIMELINE___C__DISPLAYCLASS10_0__PLAYTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x16CA1C70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayParallelTimeline___c__DisplayClass10_0_TypeDefinitionIndex = 62587;

	class LDPlayParallelTimeline___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDPlayParallelTimeline* __4__this; // 0x38

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
