#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDEBUDDYNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19BDD620)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDEBUDDYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDD6E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDEBUDDYNODE__HANDLE_OFFSET UNITYSDK_OFFSET(0x19BDD3A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHIDEBUDDYNODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x19BDD720)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHideBuddyNode_TypeDefinitionIndex = 62552;

	class LDHideBuddyNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* ToRemoveBuddyZoneTag; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDEBUDDYNODE__CTOR_OFFSET))(this);
		}

		::System::Void _Handle(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDEBUDDYNODE__HANDLE_OFFSET))(this, flow);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDEBUDDYNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHIDEBUDDYNODE__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
