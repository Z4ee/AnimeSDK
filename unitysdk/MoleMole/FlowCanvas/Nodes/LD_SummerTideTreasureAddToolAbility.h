#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY_DO_OFFSET UNITYSDK_OFFSET(0x1B1B2A30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B1B2970)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B2B90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SummerTideTreasureAddToolAbility_TypeDefinitionIndex = 88423;

	class LD_SummerTideTreasureAddToolAbility : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Do(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASUREADDTOOLABILITY_DO_OFFSET))(this, f);
		}
	};
}
