#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPNEXTWAVE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1710E1E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPNEXTWAVE_START_OFFSET UNITYSDK_OFFSET(0x1710E2D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPNEXTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1710E580)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetBeatmapNextWave_TypeDefinitionIndex = 73969;

	class LDSetBeatmapNextWave : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Single>* _time; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPNEXTWAVE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPNEXTWAVE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPNEXTWAVE_START_OFFSET))(this, flow);
		}
	};
}
