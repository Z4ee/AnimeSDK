#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_DUMMY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DB24730)
#define FLOWCANVAS_NODES_DUMMY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1DB24740)
#define FLOWCANVAS_NODES_DUMMY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB247E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Dummy_TypeDefinitionIndex = 30381;

	class Dummy : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DUMMY__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DUMMY_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DUMMY_REGISTERPORTS_OFFSET))(this);
		}
	};
}
