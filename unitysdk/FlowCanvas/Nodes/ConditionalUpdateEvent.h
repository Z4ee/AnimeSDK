#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define FLOWCANVAS_NODES_CONDITIONALUPDATEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D347B50)
#define FLOWCANVAS_NODES_CONDITIONALUPDATEEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D347BE0)
#define FLOWCANVAS_NODES_CONDITIONALUPDATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D347D10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ConditionalUpdateEvent_TypeDefinitionIndex = 30142;

	class ConditionalUpdateEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* becameFalse; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* condition; // 0xB0
		::FlowCanvas::FlowOutput* becameTrue; // 0xB8
		::System::Boolean lastState; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CONDITIONALUPDATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CONDITIONALUPDATEEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CONDITIONALUPDATEEVENT_UPDATE_OFFSET))(this);
		}
	};
}
