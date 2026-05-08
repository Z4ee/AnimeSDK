#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EFCLogLevel.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDFCLOG_LOG_OFFSET UNITYSDK_OFFSET(0x170C2300)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFCLOG_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x170C21D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFCLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x170C2610)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFCLOG__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x170C2650)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFCLog_TypeDefinitionIndex = 47757;

	class LDFCLog : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* logLevelInput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* logInput; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFCLOG__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFCLOG_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Log(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFCLOG_LOG_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFCLOG__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
