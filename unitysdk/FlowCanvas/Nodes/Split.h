#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_SPLIT_GET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E22AD90)
#define FLOWCANVAS_NODES_SPLIT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E22ADB0)
#define FLOWCANVAS_NODES_SPLIT_SET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E22ADA0)
#define FLOWCANVAS_NODES_SPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22AF50)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Split_TypeDefinitionIndex = 31200;

	class Split : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Int32 _portCount; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SPLIT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PortCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SPLIT_GET_PORTCOUNT_OFFSET))(this);
		}

		::System::Void set_PortCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SPLIT_SET_PORTCOUNT_OFFSET))(this, value);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SPLIT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
