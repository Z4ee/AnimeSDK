#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARINLEVELCHAT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1499C030)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARINLEVELCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1499C0F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CLEARINLEVELCHAT__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1499C130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ClearInLevelChat_TypeDefinitionIndex = 74538;

	class LD_ClearInLevelChat : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* _in; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0

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
