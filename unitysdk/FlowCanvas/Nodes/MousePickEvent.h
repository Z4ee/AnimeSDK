#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"
#include "unitysdk/FlowCanvas/Nodes/MousePickEvent_ButtonKeys.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define FLOWCANVAS_NODES_MOUSEPICKEVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B324660)
#define FLOWCANVAS_NODES_MOUSEPICKEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B324770)
#define FLOWCANVAS_NODES_MOUSEPICKEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B324800)
#define FLOWCANVAS_NODES_MOUSEPICKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B324810)
#define FLOWCANVAS_NODES_MOUSEPICKEVENT__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B3248A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MousePickEvent_TypeDefinitionIndex = 27268;

	class MousePickEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::FlowCanvas::Nodes::MousePickEvent_ButtonKeys>* buttonKey; // 0xA8
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::LayerMask>* mask; // 0xB0
		::FlowCanvas::FlowOutput* o; // 0xB8
		::UnityEngine::RaycastHit hit; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEPICKEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEPICKEVENT_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEPICKEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEPICKEVENT_UPDATE_OFFSET))(this);
		}

		::UnityEngine::RaycastHit _RegisterPorts_b__7_0()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEPICKEVENT__REGISTERPORTS_B__7_0_OFFSET))(this);
		}
	};
}
