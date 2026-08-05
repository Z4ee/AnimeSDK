#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAENDPERFORM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1684ED50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAENDPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1684EE10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAENDPERFORM__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1684EE50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_MarkAreaEndPerform_TypeDefinitionIndex = 42814;

	class LD_AbyssS2_MarkAreaEndPerform : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAENDPERFORM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAENDPERFORM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MARKAREAENDPERFORM__REGISTERPORTS_B__1_0_OFFSET))(this, flow);
		}
	};
}
