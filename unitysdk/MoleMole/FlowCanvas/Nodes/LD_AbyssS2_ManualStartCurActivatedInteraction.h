#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTCURACTIVATEDINTERACTION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1369D9E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTCURACTIVATEDINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1369DAF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTCURACTIVATEDINTERACTION__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1369DB30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ManualStartCurActivatedInteraction_TypeDefinitionIndex = 76557;

	class LD_AbyssS2_ManualStartCurActivatedInteraction : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _interactionObject; // 0xA8
		::FlowCanvas::FlowOutput* _error; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTCURACTIVATEDINTERACTION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTCURACTIVATEDINTERACTION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_MANUALSTARTCURACTIVATEDINTERACTION__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
