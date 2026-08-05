#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas::Nodes { class GoToLabel; }
namespace NodeCanvas::Framework { class INodeReference; }
namespace NodeCanvas::Framework { template <typename T> class NodeReference_1; }
namespace System { class String; }

#define FLOWCANVAS_NODES_GOTOSTATEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E8B78E0)
#define FLOWCANVAS_NODES_GOTOSTATEMENT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1E8B7880)
#define FLOWCANVAS_NODES_GOTOSTATEMENT_NODECANVAS_FRAMEWORK_IHAVENODEREFERENCE_GET_TARGETREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E8B7870)
#define FLOWCANVAS_NODES_GOTOSTATEMENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E8B7AC0)
#define FLOWCANVAS_NODES_GOTOSTATEMENT_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1E8B7A20)
#define FLOWCANVAS_NODES_GOTOSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B7B30)
#define FLOWCANVAS_NODES_GOTOSTATEMENT__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1E8B7B70)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GoToStatement_TypeDefinitionIndex = 29867;

	class GoToStatement : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::NodeCanvas::Framework::NodeReference_1<::FlowCanvas::Nodes::GoToLabel*>* _targetLabel; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOSTATEMENT__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::INodeReference* NodeCanvas_Framework_IHaveNodeReference_get_targetReference()
		{
			return ((::NodeCanvas::Framework::INodeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOSTATEMENT_NODECANVAS_FRAMEWORK_IHAVENODEREFERENCE_GET_TARGETREFERENCE_OFFSET))(this);
		}

		::FlowCanvas::Nodes::GoToLabel* get_target()
		{
			return ((::FlowCanvas::Nodes::GoToLabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOSTATEMENT_GET_TARGET_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOSTATEMENT_GET_NAME_OFFSET))(this);
		}

		::System::Void SetTarget(::FlowCanvas::Nodes::GoToLabel* newTarget)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::GoToLabel*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOSTATEMENT_SETTARGET_OFFSET))(this, newTarget);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOSTATEMENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__8_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOSTATEMENT__REGISTERPORTS_B__8_0_OFFSET))(this, f);
		}
	};
}
