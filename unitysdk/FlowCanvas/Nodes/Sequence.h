#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_SEQUENCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D058240)
#define FLOWCANVAS_NODES_SEQUENCE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D058200)
#define FLOWCANVAS_NODES_SEQUENCE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D058230)
#define FLOWCANVAS_NODES_SEQUENCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D0582E0)
#define FLOWCANVAS_NODES_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D058500)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 30999;

	class Sequence : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Int32 _portCount; // 0xA8
		::System::Int32 current; // 0xAC
		::System::Int32 original; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SEQUENCE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SEQUENCE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SEQUENCE_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SEQUENCE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
