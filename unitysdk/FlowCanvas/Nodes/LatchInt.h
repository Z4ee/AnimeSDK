#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_LATCHINT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19846920)
#define FLOWCANVAS_NODES_LATCHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19846AA0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatchInt_TypeDefinitionIndex = 26821;

	class LatchInt : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Int32 latched; // 0xA8
		::System::Int32 _portCount; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHINT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHINT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
