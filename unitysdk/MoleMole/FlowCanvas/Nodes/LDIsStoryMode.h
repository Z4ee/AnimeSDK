#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x182D4BD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x182D4CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x182D4CF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDIsStoryMode_TypeDefinitionIndex = 70502;

	class LDIsStoryMode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* falseOutput; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::FlowInput* input; // 0xB8
		::FlowCanvas::FlowOutput* trueOutput; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISSTORYMODE__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
