#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19BE4950)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE_STARTREALTIMEQTE_OFFSET UNITYSDK_OFFSET(0x19BE4AC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE4D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x19BE4D80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartRealtimeQTE_TypeDefinitionIndex = 82738;

	class LDStartRealtimeQTE : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* _customTag; // 0xA8
		::FlowCanvas::FlowOutput* _onSuccess; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::FlowCanvas::FlowOutput* _onFinish; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* _configKey; // 0xC8
		::FlowCanvas::FlowOutput* _onFail; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void StartRealtimeQTE(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE_STARTREALTIMEQTE_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTREALTIMEQTE__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
