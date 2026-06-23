#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_SEQUENCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BCB63D0)
#define FLOWCANVAS_NODES_SEQUENCE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1BCB6390)
#define FLOWCANVAS_NODES_SEQUENCE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1BCB63C0)
#define FLOWCANVAS_NODES_SEQUENCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1BCB6470)
#define FLOWCANVAS_NODES_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB6690)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 29731;

	class Sequence : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Int32 original; // 0xA8
		::System::Int32 _portCount; // 0xAC
		::System::Int32 current; // 0xB0

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
