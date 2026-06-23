#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_LATCHINT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1BCB4840)
#define FLOWCANVAS_NODES_LATCHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB49C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatchInt_TypeDefinitionIndex = 29433;

	class LatchInt : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Int32 _portCount; // 0xA8
		::System::Int32 latched; // 0xAC

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
