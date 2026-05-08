#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define FLOWCANVAS_NODES_FORLOOP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B7E1490)
#define FLOWCANVAS_NODES_FORLOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E1660)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ForLoop_TypeDefinitionIndex = 27905;

	class ForLoop : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* first; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* last; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* step; // 0xB8
		::System::Int32 current; // 0xC0
		::System::Boolean broken; // 0xC4
		::System::Boolean reverse; // 0xC5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FORLOOP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FORLOOP_REGISTERPORTS_OFFSET))(this);
		}
	};
}
