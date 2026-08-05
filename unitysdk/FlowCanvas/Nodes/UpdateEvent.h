#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }

#define FLOWCANVAS_NODES_UPDATEEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EB7FDD0)
#define FLOWCANVAS_NODES_UPDATEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB7FD80)
#define FLOWCANVAS_NODES_UPDATEEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EB7FDE0)
#define FLOWCANVAS_NODES_UPDATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7FEE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UpdateEvent_TypeDefinitionIndex = 30235;

	class UpdateEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* update; // 0xA8
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* updateInterval; // 0xB0
		::System::Single lastUpdatedTime; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UPDATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UPDATEEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UPDATEEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UPDATEEVENT_UPDATE_OFFSET))(this);
		}
	};
}
