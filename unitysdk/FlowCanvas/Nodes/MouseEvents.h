#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"
#include "unitysdk/FlowCanvas/Nodes/MouseEvents_ButtonKeys.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define FLOWCANVAS_NODES_MOUSEEVENTS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D83BFB0)
#define FLOWCANVAS_NODES_MOUSEEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D83C0C0)
#define FLOWCANVAS_NODES_MOUSEEVENTS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D83C150)
#define FLOWCANVAS_NODES_MOUSEEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83C160)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MouseEvents_TypeDefinitionIndex = 30153;

	class MouseEvents : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::FlowCanvas::Nodes::MouseEvents_ButtonKeys>* buttonKey; // 0xA8
		::FlowCanvas::FlowOutput* down; // 0xB0
		::FlowCanvas::FlowOutput* up; // 0xB8
		::FlowCanvas::FlowOutput* pressed; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEEVENTS__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEEVENTS_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEEVENTS_UPDATE_OFFSET))(this);
		}
	};
}
