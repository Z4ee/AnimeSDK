#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace UnityEngine::UI { class Dropdown; }

#define FLOWCANVAS_NODES_UIDROPDOWNEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1EB6E930)
#define FLOWCANVAS_NODES_UIDROPDOWNEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EB6E840)
#define FLOWCANVAS_NODES_UIDROPDOWNEVENT_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EB6EB20)
#define FLOWCANVAS_NODES_UIDROPDOWNEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB6EA40)
#define FLOWCANVAS_NODES_UIDROPDOWNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6EB70)
#define FLOWCANVAS_NODES_UIDROPDOWNEVENT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EB6EBC0)
#define FLOWCANVAS_NODES_UIDROPDOWNEVENT__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1EB6EC20)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UIDropdownEvent_TypeDefinitionIndex = 30354;

	class UIDropdownEvent : public ::FlowCanvas::Nodes::EventNode_1<::UnityEngine::UI::Dropdown*>
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0xB0
		::System::Int32 value; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIDROPDOWNEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIDROPDOWNEVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIDROPDOWNEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIDROPDOWNEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIDROPDOWNEVENT_ONVALUECHANGED_OFFSET))(this, value);
		}

		::UnityEngine::UI::Dropdown* _RegisterPorts_b__4_0()
		{
			return ((::UnityEngine::UI::Dropdown*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIDROPDOWNEVENT__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__4_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIDROPDOWNEVENT__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
