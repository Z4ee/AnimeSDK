#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class Object; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDOBJECTNULLCHECKNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BA6DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOBJECTNULLCHECKNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10BA6C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOBJECTNULLCHECKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA6FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOBJECTNULLCHECKNODE__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x10BA7030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOBJECTNULLCHECKNODE__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x10BA7060)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDObjectNullCheckNode_TypeDefinitionIndex = 51500;

	class LDObjectNullCheckNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Boolean>* resultOutput; // 0xA8
		::FlowCanvas::FlowOutput* falseOutput; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Object*>* valueInput; // 0xC0
		::FlowCanvas::FlowOutput* trueOutput; // 0xC8
		::FlowCanvas::FlowInput* input; // 0xD0
		::System::Boolean result; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOBJECTNULLCHECKNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOBJECTNULLCHECKNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOBJECTNULLCHECKNODE_INVOKE_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOBJECTNULLCHECKNODE__REGISTERPORTS_B__7_0_OFFSET))(this, f);
		}

		::System::Boolean _RegisterPorts_b__7_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOBJECTNULLCHECKNODE__REGISTERPORTS_B__7_1_OFFSET))(this);
		}
	};
}
