#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRO_ACTIVETIMER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15417860)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRO_ACTIVETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x15417950)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRO_ACTIVETIMER__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x15417990)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSmashBro_ActiveTimer_TypeDefinitionIndex = 52079;

	class LDSmashBro_ActiveTimer : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* _timerKey; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRO_ACTIVETIMER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRO_ACTIVETIMER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSMASHBRO_ACTIVETIMER__REGISTERPORTS_B__2_0_OFFSET))(this, flow);
		}
	};
}
