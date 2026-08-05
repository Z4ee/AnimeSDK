#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_LATCHBOOL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E7A6200)
#define FLOWCANVAS_NODES_LATCHBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A6340)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatchBool_TypeDefinitionIndex = 30788;

	class LatchBool : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Boolean latched; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHBOOL__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATCHBOOL_REGISTERPORTS_OFFSET))(this);
		}
	};
}
