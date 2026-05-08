#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDISUNITYEDITOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x18417C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISUNITYEDITOR_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18417B70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISUNITYEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18417CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISUNITYEDITOR__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x18417CF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDIsUnityEditor_TypeDefinitionIndex = 74601;

	class LDIsUnityEditor : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* trueOutput; // 0xA8
		::FlowCanvas::FlowOutput* falseOutput; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISUNITYEDITOR__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISUNITYEDITOR_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISUNITYEDITOR_INVOKE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISUNITYEDITOR__REGISTERPORTS_B__3_0_OFFSET))(this, f);
		}
	};
}
