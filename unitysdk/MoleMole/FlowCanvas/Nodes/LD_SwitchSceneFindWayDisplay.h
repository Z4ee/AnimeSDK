#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16E54620)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY_START_INTERACT_OFFSET UNITYSDK_OFFSET(0x16E54750)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x16E54B20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x16E54B60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SwitchSceneFindWayDisplay_TypeDefinitionIndex = 77615;

	class LD_SwitchSceneFindWayDisplay : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* duration; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* wayID; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isOpen; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start_Interact(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY_START_INTERACT_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SWITCHSCENEFINDWAYDISPLAY__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
