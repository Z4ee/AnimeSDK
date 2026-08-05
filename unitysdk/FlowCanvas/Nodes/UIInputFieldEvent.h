#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }
namespace UnityEngine::UI { class InputField; }

#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x1EF8AE70)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1EF8AB80)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EF8A990)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EF8AE20)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EF8AD20)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8AEC0)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1EF8AF10)
#define FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1EF8AF70)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UIInputFieldEvent_TypeDefinitionIndex = 30564;

	class UIInputFieldEvent : public ::FlowCanvas::Nodes::EventNode_1<::UnityEngine::UI::InputField*>
	{
	public:
		::FlowCanvas::FlowOutput* onValueChanged; // 0xB0
		::System::String* value; // 0xB8
		::FlowCanvas::FlowOutput* onEndEdit; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONVALUECHANGED_OFFSET))(this, value);
		}

		::System::Void OnEndEdit(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT_ONENDEDIT_OFFSET))(this, value);
		}

		::UnityEngine::UI::InputField* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::UI::InputField*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__5_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIINPUTFIELDEVENT__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
