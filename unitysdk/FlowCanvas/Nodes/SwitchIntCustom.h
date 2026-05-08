#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_NODES_SWITCHINTCUSTOM_ISCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1B419810)
#define FLOWCANVAS_NODES_SWITCHINTCUSTOM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B4195F0)
#define FLOWCANVAS_NODES_SWITCHINTCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B419820)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchIntCustom_TypeDefinitionIndex = 27674;

	class SwitchIntCustom : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* intCases; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHINTCUSTOM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHINTCUSTOM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHINTCUSTOM_ISCHOICENODE_OFFSET))(this);
		}
	};
}
