#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SummerTideTreasuresSubSystem; }
namespace MoleMole { class UISummerTideTreasureInLevelPageController; }
namespace MoleMole::FlowCanvas::Nodes { class LD_StartSummerTideTreasure; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTSUMMERTIDETREASURE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x118C3E70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STARTSUMMERTIDETREASURE___C__DISPLAYCLASS2_0__PLAY_B__0_OFFSET UNITYSDK_OFFSET(0x118C3EC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StartSummerTideTreasure___c__DisplayClass2_0_TypeDefinitionIndex = 87950;

	class LD_StartSummerTideTreasure___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LD_StartSummerTideTreasure* __4__this; // 0x10
		::FlowCanvas::Flow f; // 0x18
		::MoleMole::SummerTideTreasuresSubSystem* sub; // 0x40
		::MoleMole::UISummerTideTreasureInLevelPageController* mainPage; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTSUMMERTIDETREASURE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Play_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STARTSUMMERTIDETREASURE___C__DISPLAYCLASS2_0__PLAY_B__0_OFFSET))(this);
		}
	};
}
