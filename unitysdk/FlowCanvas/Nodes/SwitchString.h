#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_NODES_SWITCHSTRING_ISCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1EB7F790)
#define FLOWCANVAS_NODES_SWITCHSTRING_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB7F530)
#define FLOWCANVAS_NODES_SWITCHSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7F7A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchString_TypeDefinitionIndex = 30735;

	class SwitchString : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* comparisonOutputs; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHSTRING__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHSTRING_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHSTRING_ISCHOICENODE_OFFSET))(this);
		}
	};
}
