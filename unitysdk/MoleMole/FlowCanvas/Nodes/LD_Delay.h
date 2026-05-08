#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10E15FD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x10E16190)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x10E161D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY__WAITTIMEOUT_OFFSET UNITYSDK_OFFSET(0x10E160C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Delay_TypeDefinitionIndex = 72600;

	class LD_Delay : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* _delayInput; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _WaitTimeout(::System::Single time, ::FlowCanvas::Flow flow)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY__WAITTIMEOUT_OFFSET))(this, time, flow);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DELAY__REGISTERPORTS_B__2_0_OFFSET))(this, flow);
		}
	};
}
