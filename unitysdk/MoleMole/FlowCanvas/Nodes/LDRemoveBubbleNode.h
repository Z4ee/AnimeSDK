#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUBBLENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x149DFEF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUBBLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x149DFFE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUBBLENODE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x149E0020)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveBubbleNode_TypeDefinitionIndex = 87692;

	class LDRemoveBubbleNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entity; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUBBLENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUBBLENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEBUBBLENODE__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
