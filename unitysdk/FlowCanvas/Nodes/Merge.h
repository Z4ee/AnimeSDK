#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_MERGE_GET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B458000)
#define FLOWCANVAS_NODES_MERGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B457F40)
#define FLOWCANVAS_NODES_MERGE_SET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B458010)
#define FLOWCANVAS_NODES_MERGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B458020)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Merge_TypeDefinitionIndex = 27383;

	class Merge : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Int32 _portCount; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Int32 get_PortCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGE_GET_PORTCOUNT_OFFSET))(this);
		}

		::System::Void set_PortCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGE_SET_PORTCOUNT_OFFSET))(this, value);
		}
	};
}
