#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class SummerEventBeatMap; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x144CEBF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP_START_OFFSET UNITYSDK_OFFSET(0x144CED80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x144CF100)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP__START_G__ONFINISH_6_1_OFFSET UNITYSDK_OFFSET(0x144CF150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP__START_G__ONSTART_6_0_OFFSET UNITYSDK_OFFSET(0x144CF140)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartShootBeatMap_TypeDefinitionIndex = 51813;

	class LDStartShootBeatMap : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::SummerEventBeatMap*>*>* _beatMapList; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* _emptyTimescale; // 0xB8
		::FlowCanvas::FlowOutput* _finish; // 0xC0
		::System::Boolean _isRunning; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP_START_OFFSET))(this, flow);
		}

		::System::Void _Start_g__OnStart_6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP__START_G__ONSTART_6_0_OFFSET))(this);
		}

		::System::Void _Start_g__OnFinish_6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP__START_G__ONFINISH_6_1_OFFSET))(this);
		}
	};
}
