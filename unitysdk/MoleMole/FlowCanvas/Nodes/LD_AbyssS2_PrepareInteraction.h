#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_PREPAREINTERACTION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1383A220)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_PREPAREINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1383A300)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_PREPAREINTERACTION__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1383A340)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_PrepareInteraction_TypeDefinitionIndex = 51660;

	class LD_AbyssS2_PrepareInteraction : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _error; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_PREPAREINTERACTION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_PREPAREINTERACTION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_PREPAREINTERACTION__REGISTERPORTS_B__2_0_OFFSET))(this, flow);
		}
	};
}
