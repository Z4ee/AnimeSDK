#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_StartMusicBattle; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10D48AB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE___C__DISPLAYCLASS6_0__PLAYTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x10D48AC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StartMusicBattle___c__DisplayClass6_0_TypeDefinitionIndex = 50967;

	class LD_StartMusicBattle___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_StartMusicBattle* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTimeline_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTMUSICBATTLE___C__DISPLAYCLASS6_0__PLAYTIMELINE_B__0_OFFSET))(this);
		}
	};
}
