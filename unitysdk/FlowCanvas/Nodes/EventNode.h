#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_EVENTNODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D81CDB0)
#define FLOWCANVAS_NODES_EVENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81CE40)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int EventNode_TypeDefinitionIndex = 29981;

	class EventNode : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EVENTNODE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EVENTNODE_GET_NAME_OFFSET))(this);
		}
	};
}
