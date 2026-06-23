#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace UnityEngine::UI { class Button; }

#define FLOWCANVAS_NODES_UIBUTTONEVENT_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1D349D30)
#define FLOWCANVAS_NODES_UIBUTTONEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D349B90)
#define FLOWCANVAS_NODES_UIBUTTONEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D349AA0)
#define FLOWCANVAS_NODES_UIBUTTONEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D349CA0)
#define FLOWCANVAS_NODES_UIBUTTONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D349D70)
#define FLOWCANVAS_NODES_UIBUTTONEVENT__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D349DC0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UIButtonEvent_TypeDefinitionIndex = 29680;

	class UIButtonEvent : public ::FlowCanvas::Nodes::EventNode_1<::UnityEngine::UI::Button*>
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIBUTTONEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIBUTTONEVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIBUTTONEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIBUTTONEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIBUTTONEVENT_ONCLICK_OFFSET))(this);
		}

		::UnityEngine::UI::Button* _RegisterPorts_b__3_0()
		{
			return ((::UnityEngine::UI::Button*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIBUTTONEVENT__REGISTERPORTS_B__3_0_OFFSET))(this);
		}
	};
}
