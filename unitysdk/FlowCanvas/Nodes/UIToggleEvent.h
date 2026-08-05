#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace UnityEngine::UI { class Toggle; }

#define FLOWCANVAS_NODES_UITOGGLEEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1EA95300)
#define FLOWCANVAS_NODES_UITOGGLEEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EA95210)
#define FLOWCANVAS_NODES_UITOGGLEEVENT_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EA954F0)
#define FLOWCANVAS_NODES_UITOGGLEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EA95410)
#define FLOWCANVAS_NODES_UITOGGLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA95540)
#define FLOWCANVAS_NODES_UITOGGLEEVENT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EA95590)
#define FLOWCANVAS_NODES_UITOGGLEEVENT__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1EA955F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UIToggleEvent_TypeDefinitionIndex = 30147;

	class UIToggleEvent : public ::FlowCanvas::Nodes::EventNode_1<::UnityEngine::UI::Toggle*>
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0xB0
		::System::Boolean state; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UITOGGLEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UITOGGLEEVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UITOGGLEEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UITOGGLEEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UITOGGLEEVENT_ONVALUECHANGED_OFFSET))(this, state);
		}

		::UnityEngine::UI::Toggle* _RegisterPorts_b__4_0()
		{
			return ((::UnityEngine::UI::Toggle*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UITOGGLEEVENT__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__4_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UITOGGLEEVENT__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
