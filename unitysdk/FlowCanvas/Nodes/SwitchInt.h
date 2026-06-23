#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_SWITCHINT_GET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BCB6AD0)
#define FLOWCANVAS_NODES_SWITCHINT_ISCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1BCB6CB0)
#define FLOWCANVAS_NODES_SWITCHINT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1BCB6AF0)
#define FLOWCANVAS_NODES_SWITCHINT_SET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1BCB6AE0)
#define FLOWCANVAS_NODES_SWITCHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB6CC0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchInt_TypeDefinitionIndex = 30376;

	class SwitchInt : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Int32 _portCount; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHINT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PortCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHINT_GET_PORTCOUNT_OFFSET))(this);
		}

		::System::Void set_PortCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHINT_SET_PORTCOUNT_OFFSET))(this, value);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHINT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHINT_ISCHOICENODE_OFFSET))(this);
		}
	};
}
