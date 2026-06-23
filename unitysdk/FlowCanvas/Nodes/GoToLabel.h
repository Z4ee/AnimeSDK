#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }

#define FLOWCANVAS_NODES_GOTOLABEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D347EC0)
#define FLOWCANVAS_NODES_GOTOLABEL_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1D347EA0)
#define FLOWCANVAS_NODES_GOTOLABEL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D347F50)
#define FLOWCANVAS_NODES_GOTOLABEL_SET_PORT_OFFSET UNITYSDK_OFFSET(0x1D347EB0)
#define FLOWCANVAS_NODES_GOTOLABEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D347FA0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GoToLabel_TypeDefinitionIndex = 30261;

	class GoToLabel : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* identifier; // 0xA8
		::FlowCanvas::FlowOutput* _port_k__BackingField; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOLABEL__CTOR_OFFSET))(this);
		}

		::FlowCanvas::FlowOutput* get_port()
		{
			return ((::FlowCanvas::FlowOutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOLABEL_GET_PORT_OFFSET))(this);
		}

		::System::Void set_port(::FlowCanvas::FlowOutput* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOLABEL_SET_PORT_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOLABEL_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GOTOLABEL_REGISTERPORTS_OFFSET))(this);
		}
	};
}
