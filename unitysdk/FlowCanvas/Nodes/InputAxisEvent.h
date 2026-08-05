#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_INPUTAXISEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB7E120)
#define FLOWCANVAS_NODES_INPUTAXISEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EB7E200)
#define FLOWCANVAS_NODES_INPUTAXISEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7E210)
#define FLOWCANVAS_NODES_INPUTAXISEVENT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EB7E250)
#define FLOWCANVAS_NODES_INPUTAXISEVENT__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1EB7E260)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int InputAxisEvent_TypeDefinitionIndex = 31084;

	class InputAxisEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0xA8
		::System::Boolean calledLastFrame; // 0xB0
		::System::Single horizontal; // 0xB4
		::System::Single vertical; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTAXISEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTAXISEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTAXISEVENT_UPDATE_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__4_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTAXISEVENT__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__4_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTAXISEVENT__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
