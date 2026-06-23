#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_MULTITOGGLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D532D40)
#define FLOWCANVAS_NODES_MULTITOGGLE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D532DE0)
#define FLOWCANVAS_NODES_MULTITOGGLE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D532E10)
#define FLOWCANVAS_NODES_MULTITOGGLE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D532E20)
#define FLOWCANVAS_NODES_MULTITOGGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D533080)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MultiToggle_TypeDefinitionIndex = 29505;

	class MultiToggle : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Int32 original; // 0xA8
		::System::Int32 _portCount; // 0xAC
		::System::Int32 current; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MULTITOGGLE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MULTITOGGLE_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MULTITOGGLE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MULTITOGGLE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MULTITOGGLE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
