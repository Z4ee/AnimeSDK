#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

#define FLOWCANVAS_NODES_DEBUGEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E7A5A70)
#define FLOWCANVAS_NODES_DEBUGEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A5A80)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DebugEvent_TypeDefinitionIndex = 31435;

	class DebugEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DEBUGEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DEBUGEVENT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
