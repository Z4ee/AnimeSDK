#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1232F430)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1232F520)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1232F560)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DestroyEffectNode_TypeDefinitionIndex = 62433;

	class LD_DestroyEffectNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _createdEffect; // 0xB0
		::System::Boolean isExecuted; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DESTROYEFFECTNODE__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
