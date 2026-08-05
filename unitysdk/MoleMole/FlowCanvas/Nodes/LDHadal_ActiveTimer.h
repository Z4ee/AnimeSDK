#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ACTIVETIMER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x118B6500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ACTIVETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x118B6610)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ACTIVETIMER__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x118B6650)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHadal_ActiveTimer_TypeDefinitionIndex = 76650;

	class LDHadal_ActiveTimer : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* _timerExpired; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _timerKey; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ACTIVETIMER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ACTIVETIMER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHADAL_ACTIVETIMER__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
