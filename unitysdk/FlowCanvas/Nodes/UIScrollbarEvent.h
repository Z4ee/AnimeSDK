#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace UnityEngine::UI { class Scrollbar; }

#define FLOWCANVAS_NODES_UISCROLLBAREVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A297590)
#define FLOWCANVAS_NODES_UISCROLLBAREVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A2974A0)
#define FLOWCANVAS_NODES_UISCROLLBAREVENT_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A297780)
#define FLOWCANVAS_NODES_UISCROLLBAREVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A2976A0)
#define FLOWCANVAS_NODES_UISCROLLBAREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2977D0)
#define FLOWCANVAS_NODES_UISCROLLBAREVENT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A297820)
#define FLOWCANVAS_NODES_UISCROLLBAREVENT__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A297880)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UIScrollbarEvent_TypeDefinitionIndex = 27941;

	class UIScrollbarEvent : public ::FlowCanvas::Nodes::EventNode_1<::UnityEngine::UI::Scrollbar*>
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0xB0
		::System::Single value; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISCROLLBAREVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISCROLLBAREVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISCROLLBAREVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISCROLLBAREVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISCROLLBAREVENT_ONVALUECHANGED_OFFSET))(this, value);
		}

		::UnityEngine::UI::Scrollbar* _RegisterPorts_b__4_0()
		{
			return ((::UnityEngine::UI::Scrollbar*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISCROLLBAREVENT__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__4_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UISCROLLBAREVENT__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
