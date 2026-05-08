#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPTOTALWAVE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10E0E950)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPTOTALWAVE_START_OFFSET UNITYSDK_OFFSET(0x10E0EA40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPTOTALWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0ECE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetBeatmapTotalWave_TypeDefinitionIndex = 38605;

	class LDSetBeatmapTotalWave : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _totalWave; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPTOTALWAVE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPTOTALWAVE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETBEATMAPTOTALWAVE_START_OFFSET))(this, flow);
		}
	};
}
