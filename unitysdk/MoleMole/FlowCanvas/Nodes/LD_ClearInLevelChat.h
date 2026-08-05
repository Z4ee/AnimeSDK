#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARINLEVELCHAT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x107D5F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARINLEVELCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x107D6000)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARINLEVELCHAT__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x107D6040)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ClearInLevelChat_TypeDefinitionIndex = 83299;

	class LD_ClearInLevelChat : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8
		::FlowCanvas::FlowInput* _in; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARINLEVELCHAT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARINLEVELCHAT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARINLEVELCHAT__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
