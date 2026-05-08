#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REGHADALZONEEXPIREDNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1780EC70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REGHADALZONEEXPIREDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1780ED70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REGHADALZONEEXPIREDNODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1780EDB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REGHADALZONEEXPIREDNODE__REGISTERPORTS_B__3_1_OFFSET UNITYSDK_OFFSET(0x1780F320)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RegHadalZoneExpiredNode_TypeDefinitionIndex = 53112;

	class LD_RegHadalZoneExpiredNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* beforeExpiredSeconds; // 0xA8
		::FlowCanvas::FlowOutput* expiredOut; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REGHADALZONEEXPIREDNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REGHADALZONEEXPIREDNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REGHADALZONEEXPIREDNODE__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REGHADALZONEEXPIREDNODE__REGISTERPORTS_B__3_1_OFFSET))(this);
		}
	};
}
